#!/usr/bin/env perl 

use strict;
use warnings;
use utf8;

use Getopt::Long::Descriptive;
use Const::Fast;
use Path::Tiny;
use Text::Template;
use JSON;
use Cwd;
use Data::Dump;
use Scalar::Util;

# TODO Use enum names
# TODO Use enums with JSON::false and JSON::true and number
# TODO Types: color, subplotid, flaglist, angle, colorscale
# TODO Add defaults?
# TODO Add support for items

my $moose_type_for = {
    any        => 'json11::Json::object',
    number     => 'double',
    string     => 'std::string',
    boolean    => 'bool',
    integer    => 'int',
    info_array => 'std::vector<std::string>',
    data_array => 'std::vector<double>',
    enumerated => => 'enum'
};
my $template_h = path("template/trace.h.tmpl")->slurp_utf8();
my $template_cpp = path("template/trace.cpp.tmpl")->slurp_utf8();
my $attribute_template = path("template/attribute.tmpl")->slurp_utf8();
my $plotly_js_dist_path = path("../plotly.js/dist");
my $current_dir = cwd;
my $types_without_moose_equivalent = {};

my $plotly_schema = from_json($plotly_js_dist_path->child('plot-schema.json')->slurp_utf8());
my $traces_schema = $plotly_schema->{'traces'};

for my $trace_name (sort keys %$traces_schema) {
    my $trace_schema = $traces_schema->{$trace_name};
    my $ast = GenerateTraceAST($trace_schema, $trace_name);
    RenderTypeAST($trace_name, $ast, $template_h, $trace_name);
}

print "Types without C++ equivalent: \n" . join("\n", sort keys %$types_without_moose_equivalent) . "\n";

sub FieldsAST {
    my $fields_schema = shift();
    my $parent_class = shift();
    my $AST = shift();
    for my $field_name (sort keys %$fields_schema) {
        if ($field_name eq "_deprecated") {
            next;
        }
        if ($field_name eq "role") {
            next;
        }
        if ($field_name eq "editType") {
            next;
        }
        if ($field_name eq "arrayOk") {
            next;
        }
        if ($field_name eq "dflt") {
            next;
        }
        if ($field_name eq "type") {
            next;
        }
        my $field_contents = $fields_schema->{$field_name};
        if (ref $field_contents eq 'HASH') {
            if (exists $field_contents->{'role'} && $field_contents->{'role'} eq "object") {
                if (exists $field_contents->{items}) {
                    if (ref $field_contents->{items} eq 'HASH' && scalar keys %{$field_contents->{items}} == 1) {
                        my ($item_name) = keys %{$field_contents->{items}};
                        $AST->{subtypes}{$item_name} = SubtypeAST($field_contents->{items}{$item_name}, $item_name, $parent_class);
                        my $field = {
                            is  => 'rw',
                            isa => "ArrayRef|ArrayRef[" . GenerateClassName($parent_class, $item_name) . "]"
                        };
                        $AST->{fields}{$field_name} = $field;
                    } else {
                        warn("Role object with items with more than 1 type of item. Ignored");
                    }
                } else {
                    $AST->{subtypes}{$field_name} = SubtypeAST($field_contents, $field_name, $parent_class);
                    my $field = {
                        is  => 'rw',
                        isa => "Maybe[HashRef]|" . GenerateClassName($parent_class, $field_name)
                    };
                    if (defined $field_contents->{arrayOk} && $field_contents->{arrayOk}) {
                        warn("Until now this combination is not present (array of elements with role object). Ignored");
                    }
                    $AST->{fields}{$field_name} = $field;
                }
            }
            else {
                my $field = {
                    is => 'rw'
                };
                if (defined $field_contents->{'description'}) {
                    $field->{documentation} = $field_contents->{'description'};
                }
                if (defined $field_contents->{'valType'}) {
                    my $moose_type = $moose_type_for->{$field_contents->{'valType'}};
                    if (defined $moose_type) {
                        if ($moose_type eq 'enum') {
                            if (defined $field_contents->{values}) {
                                my $only_strings = 1;
                                for my $value (@{$field_contents->{values}}) {
                                    if (Scalar::Util::looks_like_number($value)) {
                                        $only_strings = 0;
                                    }
                                }

                                if ($only_strings) {
                                    my $enum_type = 'enum([' . join(",", map {Data::Dump::quote($_)} @{$field_contents->{values}}) . '])';
                                    if (defined $field_contents->{arrayOk} && $field_contents->{arrayOk}) {
                                        $field->{isa} = "union([" . $enum_type . ", " .  Data::Dump::quote("ArrayRef") . "])";
                                    } else {
                                        $field->{isa} = $enum_type;
                                    }
                                }
                            }
                        }
                        else {
                            if (defined $field_contents->{arrayOk} && $field_contents->{arrayOk}) {
                                $field->{isa} = $moose_type . "|ArrayRef[" . $moose_type . "]";
                            } else {
                                $field->{isa} = $moose_type;
                            }
                        }
                    }
                    else {
                        $types_without_moose_equivalent->{$field_contents->{'valType'}} = 1;
                    }
                }
                if (defined $field_contents->{arrayOk} && $field_contents->{arrayOk} && !defined $field->{isa}) {
                    $field->{isa} = "Maybe[ArrayRef]";
                }

                $AST->{fields}{$field_name} = $field;
            }

        }
        else {
            $AST->{fields}{$field_name} = {
                default => $field_contents,
                is      => 'ro'
            };
        }
    }
}

sub GenerateClassName {
    my $parent_class = shift();
    my $type_name = shift();
    return $parent_class . '::' . ucfirst($type_name);
}

sub InitialAST {
    my $class_name = shift();
    return {
        class_name => $class_name,
        fields     => {},
        subtypes   => {}
    };
}

sub SubtypeAST {
    my $type_schema = shift();
    my $type_name = shift();
    my $parent_class = shift();

    my $class_name = GenerateClassName($parent_class, $type_name);
    my $AST = InitialAST($class_name);
    FieldsAST($type_schema, $class_name, $AST);
    return $AST;
}

sub GenerateTraceAST {
    my $trace_schema = shift();
    my $trace_name = shift();

    my $class_name = GenerateClassName('CppPlotly::Trace', $trace_name);
    my $AST = InitialAST($class_name);

    if (defined $trace_schema->{'meta'}{'description'}) {
        $AST->{documentation} = $trace_schema->{'meta'}{'description'};
    }

    my $fields_schema = $trace_schema->{attributes};
    FieldsAST($fields_schema, $class_name, $AST);
    return $AST;
}


sub RenderField {
    my $field_name = shift();
    my $ast = shift();
    my $trace_name = shift();

    my $file_contents = ""; 
    my $documentation;
    if (defined $ast->{'documentation'}) {
        $documentation = $ast->{'documentation'};
        $documentation =~ s/\/\*//g;
        $documentation =~ s/\*\///g;
        $file_contents .= "/**\n" . $documentation . "\n*/";
    }
    my $type = $ast->{isa} || "json11::Json::object";
    if (defined $ast->{default}) {
        #$file_contents .= "\n    default => " . Data::Dump::quote($ast->{default}) . ",";
    }
    if (defined $documentation) {
        #$file_contents .= "\n    documentation => " . Data::Dump::quote($documentation) . ",";
    }

    #$file_contents .= "template <typename Data>
    $file_contents .= ucfirst($trace_name) . " & " . ucfirst($field_name) . "(const $type &$field_name ) {\n";
    $file_contents .= "    _$trace_name.insert(\"" . $field_name . '", ' . $field_name . "});\n";
    $file_contents .= "    return *this;\n";
    $file_contents .= "}\n";

    return $file_contents .= "\n\n";
}

sub RenderTypeAST {
    my $trace_name = shift();
    my $ast = shift();
    my $template_h = shift();
    my $root_trace_name = shift();

    my $file_contents = "";

    for my $field (sort keys %{$ast->{fields}}) {
        my $value = $ast->{fields}{$field};
        $file_contents .= RenderField($field, $value, $trace_name);
    }

    my $used_modules = "";
    for my $subtype (sort keys %{$ast->{subtypes}}) {
        RenderTypeAST($subtype, $ast->{subtypes}{$subtype}, $attribute_template, $root_trace_name);
        my $type_constraint = $ast->{subtypes}{$subtype}{class_name};
        $used_modules .= "use $type_constraint;\n";
    }

    my $description = $ast->{documentation};
    my $header =
        Text::Template::fill_in_string($template_h, HASH => {
            package_name => $ast->{class_name},
            class_name   => (split(/::/, $ast->{class_name}))[-1],
            trace_name   => $root_trace_name,
            used_modules => $used_modules,
            description  => $description,
            body         => $file_contents,
        });

    $file_contents = $header;
    chdir $current_dir;
    my $file = path('include/' . join("/", split(/::/, $ast->{class_name})) . ".h");
    $file->parent->mkpath();
    $file->spew_utf8($file_contents);
}
