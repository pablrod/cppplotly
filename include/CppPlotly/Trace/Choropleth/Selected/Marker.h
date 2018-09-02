/**
 * @file Marker.h
This attribute is part of the possible options for the trace choropleth.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#choropleth>

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
    namespace choropleth {
namespace selected {

    /**
     * 
     *
     *
     */
    class Marker {
    public:

    /**
Sets the marker opacity of selected points.
*/Marker & Opacity(const double &opacity ) {
    _marker.insert({"opacity", opacity});
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
