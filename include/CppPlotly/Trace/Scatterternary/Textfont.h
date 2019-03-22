/**
 * @file Textfont.h
This attribute is part of the possible options for the trace scatterternary.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scatterternary>

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
    namespace scatterternary {

    /**
     * 
     *
     *
     */
    class Textfont {
    public:

    Textfont & Color(const json11::Json &color ) {
    _textfont.insert({"color", color});
    return *this;
}


/**
Sets the source reference on plot.ly for  color .
*/Textfont & Colorsrc(const std::string &colorsrc ) {
    _textfont.insert({"colorsrc", colorsrc});
    return *this;
}


Textfont & Description(const json11::Json &description ) {
    _textfont.insert({"description", description});
    return *this;
}


/**
HTML font family - the typeface that will be applied by the web browser. The web browser will only be able to apply a font if it is available on the system which it operates. Provide multiple font families, separated by commas, to indicate the preference in which to apply fonts if they aren't available on the system. The plotly service (at https://plot.ly or on-premise) generates images on a server, where only a select number of fonts are installed and supported. These include *Arial*, *Balto*, *Courier New*, *Droid Sans*,, *Droid Serif*, *Droid Sans Mono*, *Gravitas One*, *Old Standard TT*, *Open Sans*, *Overpass*, *PT Sans Narrow*, *Raleway*, *Times New Roman*.
*/Textfont & Family(const json11::Json &family ) {
    _textfont.insert({"family", family});
    return *this;
}


/**
Sets the source reference on plot.ly for  family .
*/Textfont & Familysrc(const std::string &familysrc ) {
    _textfont.insert({"familysrc", familysrc});
    return *this;
}


Textfont & Size(const json11::Json &size ) {
    _textfont.insert({"size", size});
    return *this;
}


/**
Sets the source reference on plot.ly for  size .
*/Textfont & Sizesrc(const std::string &sizesrc ) {
    _textfont.insert({"sizesrc", sizesrc});
    return *this;
}




    json11::Json to_json() const {
        return _textfont;
    }

    private:

    json11::Json::object _textfont;

    };

    }

    }
}
