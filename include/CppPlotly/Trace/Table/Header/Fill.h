/**
 * @file Fill.h
This attribute is part of the possible options for the trace table.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#table>

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
    namespace table {
namespace header {

    /**
     * 
     *
     *
     */
    class Fill {
    public:

    /**
Sets the cell fill color. It accepts either a specific color or an array of colors or a 2D array of colors.
*/Fill & Color(const json11::Json &color ) {
    _fill.insert({"color", color});
    return *this;
}


/**
Sets the source reference on plot.ly for  color .
*/Fill & Colorsrc(const std::string &colorsrc ) {
    _fill.insert({"colorsrc", colorsrc});
    return *this;
}




    json11::Json to_json() const {
        return _fill;
    }

    private:

    json11::Json::object _fill;

    };

    }
}

    }
}
