/**
 * @file Lightposition.h
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




namespace CppPlotly {
    namespace Trace {
    namespace surface {

    /**
     * 
     *
     *
     */
    class Lightposition {
    public:

    /**
Numeric vector, representing the X coordinate for each vertex.
*/Lightposition & X(const double &x ) {
    _lightposition.insert({"x", x});
    return *this;
}


/**
Numeric vector, representing the Y coordinate for each vertex.
*/Lightposition & Y(const double &y ) {
    _lightposition.insert({"y", y});
    return *this;
}


/**
Numeric vector, representing the Z coordinate for each vertex.
*/Lightposition & Z(const double &z ) {
    _lightposition.insert({"z", z});
    return *this;
}




    json11::Json to_json() const {
        return _lightposition;
    }

    private:

    json11::Json::object _lightposition;

    };

    }

    }
}
