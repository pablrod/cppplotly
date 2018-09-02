/**
 * @file Contours.h
This attribute is part of the possible options for the trace surface.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#surface>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Surface/Contours/X.h"
#include "CppPlotly/Trace/Surface/Contours/Y.h"
#include "CppPlotly/Trace/Surface/Contours/Z.h"



namespace CppPlotly {
    namespace Trace {
    namespace surface {

    /**
     * 
     *
     *
     */
    class Contours {
    public:

    Contours & X(const CppPlotly::Trace::surface::contours::X &x ) {
    _contours.insert({"x", x});
    return *this;
}


Contours & Y(const CppPlotly::Trace::surface::contours::Y &y ) {
    _contours.insert({"y", y});
    return *this;
}


Contours & Z(const CppPlotly::Trace::surface::contours::Z &z ) {
    _contours.insert({"z", z});
    return *this;
}




    json11::Json to_json() const {
        return _contours;
    }

    private:

    json11::Json::object _contours;

    };

    }

    }
}
