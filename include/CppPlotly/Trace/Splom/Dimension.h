/**
 * @file Dimension.h
This attribute is part of the possible options for the trace splom.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#splom>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Splom/Dimension/Axis.h"



namespace CppPlotly {
    namespace Trace {
    namespace splom {

    /**
     * 
     *
     *
     */
    class Dimension {
    public:

    Dimension & Axis(const CppPlotly::Trace::splom::dimension::Axis &axis ) {
    _dimension.insert({"axis", axis});
    return *this;
}


/**
Sets the label corresponding to this splom dimension.
*/Dimension & Label(const std::string &label ) {
    _dimension.insert({"label", label});
    return *this;
}


/**
When used in a template, named items are created in the output figure in addition to any items the figure already has in this array. You can modify these items in the output figure by making your own item with `templateitemname` matching this `name` alongside your modifications (including `visible: false` or `enabled: false` to hide it). Has no effect outside of a template.
*/Dimension & Name(const std::string &name ) {
    _dimension.insert({"name", name});
    return *this;
}


/**
Used to refer to a named item in this array in the template. Named items from the template will be created even without a matching item in the input figure, but you can modify one by making an item with `templateitemname` matching its `name`, alongside your modifications (including `visible: false` or `enabled: false` to hide it). If there is no template or no matching item, this item will be hidden unless you explicitly show it with `visible: true`.
*/Dimension & Templateitemname(const std::string &templateitemname ) {
    _dimension.insert({"templateitemname", templateitemname});
    return *this;
}


/**
Sets the dimension values to be plotted.
*/Dimension & Values(const std::vector<double> &values ) {
    _dimension.insert({"values", values});
    return *this;
}


/**
Sets the dimension values to be plotted.
*/Dimension & Values(const std::vector<std::string> &values ) {
    _dimension.insert({"values", values});
    return *this;
}


/**
Sets the dimension values to be plotted.
*/Dimension & Values(const json11::Json &values ) {
    _dimension.insert({"values", values});
    return *this;
}


/**
Sets the source reference on plot.ly for  values .
*/Dimension & Valuessrc(const std::string &valuessrc ) {
    _dimension.insert({"valuessrc", valuessrc});
    return *this;
}


/**
Determines whether or not this dimension is shown on the graph. Note that even visible false dimension contribute to the default grid generate by this splom trace.
*/Dimension & Visible(const bool &visible ) {
    _dimension.insert({"visible", visible});
    return *this;
}




    json11::Json to_json() const {
        return _dimension;
    }

    private:

    json11::Json::object _dimension;

    };

    }

    }
}
