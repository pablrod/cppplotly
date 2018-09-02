/**
 * @file Unselected.h
This attribute is part of the possible options for the trace scattercarpet.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scattercarpet>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Scattercarpet/Unselected/Marker.h"
#include "CppPlotly/Trace/Scattercarpet/Unselected/Textfont.h"



namespace CppPlotly {
    namespace Trace {
    namespace scattercarpet {

    /**
     * 
     *
     *
     */
    class Unselected {
    public:

    Unselected & Marker(const CppPlotly::Trace::scattercarpet::unselected::Marker &marker ) {
    _unselected.insert({"marker", marker});
    return *this;
}


Unselected & Textfont(const CppPlotly::Trace::scattercarpet::unselected::Textfont &textfont ) {
    _unselected.insert({"textfont", textfont});
    return *this;
}




    json11::Json to_json() const {
        return _unselected;
    }

    private:

    json11::Json::object _unselected;

    };

    }

    }
}
