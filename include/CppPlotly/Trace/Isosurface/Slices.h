/**
 * @file Slices.h
This attribute is part of the possible options for the trace isosurface.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#isosurface>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Isosurface/Slices/X.h"
#include "CppPlotly/Trace/Isosurface/Slices/Y.h"
#include "CppPlotly/Trace/Isosurface/Slices/Z.h"



namespace CppPlotly {
    namespace Trace {
    namespace isosurface {

    /**
     * 
     *
     *
     */
    class Slices {
    public:

    Slices & X(const CppPlotly::Trace::isosurface::slices::X &x ) {
    _slices.insert({"x", x});
    return *this;
}


Slices & Y(const CppPlotly::Trace::isosurface::slices::Y &y ) {
    _slices.insert({"y", y});
    return *this;
}


Slices & Z(const CppPlotly::Trace::isosurface::slices::Z &z ) {
    _slices.insert({"z", z});
    return *this;
}




    json11::Json to_json() const {
        return _slices;
    }

    private:

    json11::Json::object _slices;

    };

    }

    }
}
