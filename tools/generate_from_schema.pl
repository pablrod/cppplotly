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

my $generic_type = 'json11::Json';
my $moose_type_for = {
    any        => $generic_type,
    number     => 'double',
    string     => 'std::string',
    boolean    => 'bool',
    integer    => 'int',
    info_array => 'std::vector<std::string>',
    data_array => 'std::vector<double>',
    enumerated => 'enum'
};
my $template_h = path("template/trace.h.tmpl")->slurp_utf8();
my $template_cpp = path("template/trace.cpp.tmpl")->slurp_utf8();
my $attribute_template = path("template/attribute.tmpl")->slurp_utf8();
my $plotly_js_dist_path = path("../plotly.js/dist");
my $header_file_suffix = ".h";
my $main_trace_namespace = "CppPlotly::Trace";
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
                            isa => "std::vector<" . AdjustNamespaceClassName(GenerateClassName($parent_class, $item_name)) . ">"
                        };
                        $AST->{fields}{$field_name} = $field;
                    } else {
                        warn("Role object with items with more than 1 type of item. Ignored");
                    }
                } else {
                    $AST->{subtypes}{$field_name} = SubtypeAST($field_contents, $field_name, $parent_class);
                    my $field = {
                        is  => 'rw',
                        isa => AdjustNamespaceClassName(GenerateClassName($parent_class, $field_name))
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
                                $field->{isa} = $generic_type;
                            }
                        }
                        else {
                            if (defined $field_contents->{arrayOk} && $field_contents->{arrayOk}) {
                                #$field->{isa} = $moose_type . "|ArrayRef[" . $moose_type . "]";
                                $field->{isa} = $generic_type;
                            } else {
                                if ($field_contents->{'valType'} eq 'data_array') {
                                    $field->{isa} = [
                                        $moose_type,
                                        "std::vector<std::string>",
                                        $generic_type
                                    ];
                                } else {
                                    $field->{isa} = $moose_type;
                                }
                            }
                        }
                    }
                    else {
                        $types_without_moose_equivalent->{$field_contents->{'valType'}} = 1;
                    }
                }
                if (defined $field_contents->{arrayOk} && $field_contents->{arrayOk} && !defined $field->{isa}) {
                    #$field->{isa} = "Maybe[ArrayRef]";
                    $field->{isa} = $generic_type;
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

    my $class_name = GenerateClassName($main_trace_namespace, $trace_name);
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
    my $type = $ast->{isa} || "json11::Json";
    if (ref $type eq 'ARRAY') {
        for my $subtype (@$type) {
            $file_contents .= _RenderField($field_name, $trace_name, $subtype, $ast->{'documentation'});
        }
    } else {
        $file_contents .= _RenderField($field_name, $trace_name, $type, $ast->{'documentation'});
    }
    return $file_contents;
}

sub _RenderField {
    my $field_name = shift();
    my $trace_name = shift();
    my $type = shift();
    my $documentation = shift();

    my $file_contents = "";
    if ($documentation) {
        $documentation =~ s/\/\*//g;
        $documentation =~ s/\*\///g;
        $file_contents .= "/**\n" . $documentation . "\n*/";
    }

    $file_contents .= ucfirst($trace_name) . " & " . ucfirst($field_name) . "(const $type &$field_name ) {\n";
    $file_contents .= "    _$trace_name.insert({\"" . $field_name . '", ' . $field_name . "});\n";
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

    my $subclass = $ast->{class_name};
    $subclass =~ s/$main_trace_namespace\:\://;
    my $extra_namespaces = '';
    my $close_extra_namespaces = '';
    if ($subclass =~ /::/) {
        my @namespaces = split /::/, $subclass;
        pop @namespaces;
        $extra_namespaces = join '', map {"namespace ".lc($_)." {\n"} @namespaces;
        $close_extra_namespaces = join '', map {"}\n"} @namespaces;
    }

    my $used_modules = "";
    for my $subtype (sort keys %{$ast->{subtypes}}) {
        RenderTypeAST($subtype, $ast->{subtypes}{$subtype}, $attribute_template, $root_trace_name);
        my $type_constraint = $ast->{subtypes}{$subtype}{class_name};
        my $path_for_type_constraint = $type_constraint;
        $path_for_type_constraint =~ s/::/\//g;
        #my $namespaced_type_constraint = AdjustNamespaceClassName($type_constraint);
        $used_modules .= "#include \"$path_for_type_constraint$header_file_suffix\"\n";
    }

    my $description = $ast->{documentation};
    my $header =
        Text::Template::fill_in_string($template_h, HASH => {
            package_name => $ast->{class_name},
            class_name   => (split(/::/, $ast->{class_name}))[-1],
            trace_name   => $root_trace_name,
            extra_namespaces => $extra_namespaces,
            close_extra_namespaces => $close_extra_namespaces,
            used_modules => $used_modules,
            description  => $description,
            body         => $file_contents,
        });

    $file_contents = $header;
    chdir $current_dir;
    my $file = path('include/' . join("/", split(/::/, $ast->{class_name})) . $header_file_suffix);
    $file->parent->mkpath();
    $file->spew_utf8($file_contents);
}

sub AdjustNamespaceClassName {
    my $class_name = shift;
    my $sub_namespaced_type_constraint = $class_name;
    $sub_namespaced_type_constraint =~ s/$main_trace_namespace\:\://;
    if ($sub_namespaced_type_constraint =~ /::/) {
        my @namespaces = split /::/, $sub_namespaced_type_constraint;
        my $main_class = pop @namespaces;
        $class_name = $main_trace_namespace . "::" . (join '::', map {lc($_)} @namespaces ) . "::" . $main_class;
    }
    return $class_name;
}
