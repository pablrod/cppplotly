/**
 * @file Title.h
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

#include "CppPlotly/Trace/Choropleth/Colorbar/Title/Font.h"



namespace CppPlotly {
    namespace Trace {
    namespace choropleth {
namespace colorbar {

    /**
     * 
     *
     *
     */
    class Title {
    public:

    Title & Font(const CppPlotly::Trace::choropleth::colorbar::title::Font &font ) {
    _title.insert({"font", font});
    return *this;
}


/**
Determines the location of color bar's title with respect to the color bar. Note that the title's location used to be set by the now deprecated `titleside` attribute.
*/Title & Side(const json11::Json &side ) {
    _title.insert({"side", side});
    return *this;
}


/**
Sets the title of the color bar. Note that before the existence of `title.text`, the title's contents used to be defined as the `title` attribute itself. This behavior has been deprecated.
*/Title & Text(const std::string &text ) {
    _title.insert({"text", text});
    return *this;
}




    json11::Json to_json() const {
        return _title;
    }

    private:

    json11::Json::object _title;

    };

    }
}

    }
}
