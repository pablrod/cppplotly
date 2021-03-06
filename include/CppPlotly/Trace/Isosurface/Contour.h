/**
 * @file Contour.h
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




namespace CppPlotly {
    namespace Trace {
    namespace isosurface {

    /**
     * 
     *
     *
     */
    class Contour {
    public:

    /**
Sets the color of the contour lines.
*/Contour & Color(const json11::Json &color ) {
    _contour.insert({"color", color});
    return *this;
}


/**
Sets whether or not dynamic contours are shown on hover
*/Contour & Show(const bool &show ) {
    _contour.insert({"show", show});
    return *this;
}


/**
Sets the width of the contour lines.
*/Contour & Width(const double &width ) {
    _contour.insert({"width", width});
    return *this;
}




    json11::Json to_json() const {
        return _contour;
    }

    private:

    json11::Json::object _contour;

    };

    }

    }
}
