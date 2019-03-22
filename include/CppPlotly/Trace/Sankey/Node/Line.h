/**
 * @file Line.h
This attribute is part of the possible options for the trace sankey.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#sankey>

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
    namespace sankey {
namespace node {

    /**
     * 
     *
     *
     */
    class Line {
    public:

    /**
Sets the color of the `line` around each `node`.
*/Line & Color(const json11::Json &color ) {
    _line.insert({"color", color});
    return *this;
}


/**
Sets the source reference on plot.ly for  color .
*/Line & Colorsrc(const std::string &colorsrc ) {
    _line.insert({"colorsrc", colorsrc});
    return *this;
}


/**
Sets the width (in px) of the `line` around each `node`.
*/Line & Width(const json11::Json &width ) {
    _line.insert({"width", width});
    return *this;
}


/**
Sets the source reference on plot.ly for  width .
*/Line & Widthsrc(const std::string &widthsrc ) {
    _line.insert({"widthsrc", widthsrc});
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
