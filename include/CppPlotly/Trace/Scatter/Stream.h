/**
 * @file Stream.h
This attribute is part of the possible options for the trace scatter.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scatter>

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
    namespace scatter {

    /**
     * 
     *
     *
     */
    class Stream {
    public:

    /**
Sets the maximum number of points to keep on the plots from an incoming stream. If `maxpoints` is set to *50*, only the newest 50 points will be displayed on the plot.
*/Stream & Maxpoints(const double &maxpoints ) {
    _stream.insert({"maxpoints", maxpoints});
    return *this;
}


/**
The stream id number links a data trace on a plot with a stream. See https://plot.ly/settings for more details.
*/Stream & Token(const std::string &token ) {
    _stream.insert({"token", token});
    return *this;
}




    json11::Json to_json() const {
        return _stream;
    }

    private:

    json11::Json::object _stream;

    };

    }

    }
}
