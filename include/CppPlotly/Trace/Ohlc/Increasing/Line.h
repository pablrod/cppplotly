/**
 * @file Line.h
This attribute is part of the possible options for the trace ohlc.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#ohlc>

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
    namespace ohlc {
namespace increasing {

    /**
     * 
     *
     *
     */
    class Line {
    public:

    /**
Sets the line color.
*/Line & Color(const json11::Json &color ) {
    _line.insert({"color", color});
    return *this;
}


/**
Sets the dash style of lines. Set to a dash type string (*solid*, *dot*, *dash*, *longdash*, *dashdot*, or *longdashdot*) or a dash length list in px (eg *5px,10px,2px,2px*).
*/Line & Dash(const std::string &dash ) {
    _line.insert({"dash", dash});
    return *this;
}


/**
Sets the line width (in px).
*/Line & Width(const double &width ) {
    _line.insert({"width", width});
    return *this;
}




    json11::Json to_json() const {
        return _line;
    }

    private:

    json11::Json::object _line;

    };

    }
}

    }
}
