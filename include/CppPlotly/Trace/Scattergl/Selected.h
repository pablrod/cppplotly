/**
 * @file Selected.h
This attribute is part of the possible options for the trace scattergl.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scattergl>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Scattergl/Selected/Marker.h"



namespace CppPlotly {
    namespace Trace {
    namespace scattergl {

    /**
     * 
     *
     *
     */
    class Selected {
    public:

    Selected & Marker(const CppPlotly::Trace::scattergl::selected::Marker &marker ) {
    _selected.insert({"marker", marker});
    return *this;
}




    json11::Json to_json() const {
        return _selected;
    }

    private:

    json11::Json::object _selected;

    };

    }

    }
}
