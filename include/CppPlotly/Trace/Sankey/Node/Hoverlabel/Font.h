/**
 * @file Font.h
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
namespace hoverlabel {

    /**
     * 
     *
     *
     */
    class Font {
    public:

    Font & Color(const json11::Json &color ) {
    _font.insert({"color", color});
    return *this;
}


/**
Sets the source reference on plot.ly for  color .
*/Font & Colorsrc(const std::string &colorsrc ) {
    _font.insert({"colorsrc", colorsrc});
    return *this;
}


Font & Description(const json11::Json &description ) {
    _font.insert({"description", description});
    return *this;
}


/**
HTML font family - the typeface that will be applied by the web browser. The web browser will only be able to apply a font if it is available on the system which it operates. Provide multiple font families, separated by commas, to indicate the preference in which to apply fonts if they aren't available on the system. The plotly service (at https://plot.ly or on-premise) generates images on a server, where only a select number of fonts are installed and supported. These include *Arial*, *Balto*, *Courier New*, *Droid Sans*,, *Droid Serif*, *Droid Sans Mono*, *Gravitas One*, *Old Standard TT*, *Open Sans*, *Overpass*, *PT Sans Narrow*, *Raleway*, *Times New Roman*.
*/Font & Family(const json11::Json &family ) {
    _font.insert({"family", family});
    return *this;
}


/**
Sets the source reference on plot.ly for  family .
*/Font & Familysrc(const std::string &familysrc ) {
    _font.insert({"familysrc", familysrc});
    return *this;
}


Font & Size(const json11::Json &size ) {
    _font.insert({"size", size});
    return *this;
}


/**
Sets the source reference on plot.ly for  size .
*/Font & Sizesrc(const std::string &sizesrc ) {
    _font.insert({"sizesrc", sizesrc});
    return *this;
}




    json11::Json to_json() const {
        return _font;
    }

    private:

    json11::Json::object _font;

    };

    }
}
}

    }
}
