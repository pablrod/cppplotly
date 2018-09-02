/**
 * @file Link.h
This attribute is part of the possible options for the trace sankey.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#sankey>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Sankey/Link/Line.h"



namespace CppPlotly {
    namespace Trace {
    namespace sankey {

    /**
     * 
     *
     *
     */
    class Link {
    public:

    /**
Sets the `link` color. It can be a single value, or an array for specifying color for each `link`. If `link.color` is omitted, then by default, a translucent grey link will be used.
*/Link & Color(const json11::Json::object &color ) {
    _link.insert({"color", color});
    return *this;
}


/**
Sets the source reference on plot.ly for  color .
*/Link & Colorsrc(const std::string &colorsrc ) {
    _link.insert({"colorsrc", colorsrc});
    return *this;
}


Link & Description(const json11::Json::object &description ) {
    _link.insert({"description", description});
    return *this;
}


/**
The shown name of the link.
*/Link & Label(const std::vector<double> &label ) {
    _link.insert({"label", label});
    return *this;
}


/**
Sets the source reference on plot.ly for  label .
*/Link & Labelsrc(const std::string &labelsrc ) {
    _link.insert({"labelsrc", labelsrc});
    return *this;
}


Link & Line(const CppPlotly::Trace::sankey::link::Line &line ) {
    _link.insert({"line", line});
    return *this;
}


/**
An integer number `[0..nodes.length - 1]` that represents the source node.
*/Link & Source(const std::vector<double> &source ) {
    _link.insert({"source", source});
    return *this;
}


/**
Sets the source reference on plot.ly for  source .
*/Link & Sourcesrc(const std::string &sourcesrc ) {
    _link.insert({"sourcesrc", sourcesrc});
    return *this;
}


/**
An integer number `[0..nodes.length - 1]` that represents the target node.
*/Link & Target(const std::vector<double> &target ) {
    _link.insert({"target", target});
    return *this;
}


/**
Sets the source reference on plot.ly for  target .
*/Link & Targetsrc(const std::string &targetsrc ) {
    _link.insert({"targetsrc", targetsrc});
    return *this;
}


/**
A numeric value representing the flow volume value.
*/Link & Value(const std::vector<double> &value ) {
    _link.insert({"value", value});
    return *this;
}


/**
Sets the source reference on plot.ly for  value .
*/Link & Valuesrc(const std::string &valuesrc ) {
    _link.insert({"valuesrc", valuesrc});
    return *this;
}




    json11::Json to_json() const {
        return _link;
    }

    private:

    json11::Json::object _link;

    };

    }

    }
}