/**
 * @file Marker.h
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




namespace CppPlotly {
    namespace Trace {
    namespace splom {
namespace unselected {

    /**
     * 
     *
     *
     */
    class Marker {
    public:

    /**
Sets the marker color of unselected points, applied only when a selection exists.
*/Marker & Color(const json11::Json::object &color ) {
    _marker.insert({"color", color});
    return *this;
}


/**
Sets the marker opacity of unselected points, applied only when a selection exists.
*/Marker & Opacity(const double &opacity ) {
    _marker.insert({"opacity", opacity});
    return *this;
}


/**
Sets the marker size of unselected points, applied only when a selection exists.
*/Marker & Size(const double &size ) {
    _marker.insert({"size", size});
    return *this;
}




    json11::Json to_json() const {
        return _marker;
    }

    private:

    json11::Json::object _marker;

    };

    }
}

    }
}
