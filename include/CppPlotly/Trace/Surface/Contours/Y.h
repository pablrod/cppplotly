/**
 * @file Y.h
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

#include "CppPlotly/Trace/Surface/Contours/Y/Project.h"



namespace CppPlotly {
    namespace Trace {
    namespace surface {
namespace contours {

    /**
     * 
     *
     *
     */
    class Y {
    public:

    /**
Sets the color of the contour lines.
*/Y & Color(const json11::Json::object &color ) {
    _y.insert({"color", color});
    return *this;
}


/**
Determines whether or not contour lines about the y dimension are highlighted on hover.
*/Y & Highlight(const bool &highlight ) {
    _y.insert({"highlight", highlight});
    return *this;
}


/**
Sets the color of the highlighted contour lines.
*/Y & Highlightcolor(const json11::Json::object &highlightcolor ) {
    _y.insert({"highlightcolor", highlightcolor});
    return *this;
}


/**
Sets the width of the highlighted contour lines.
*/Y & Highlightwidth(const double &highlightwidth ) {
    _y.insert({"highlightwidth", highlightwidth});
    return *this;
}


Y & Project(const CppPlotly::Trace::surface::contours::y::Project &project ) {
    _y.insert({"project", project});
    return *this;
}


/**
Determines whether or not contour lines about the y dimension are drawn.
*/Y & Show(const bool &show ) {
    _y.insert({"show", show});
    return *this;
}


/**
An alternate to *color*. Determines whether or not the contour lines are colored using the trace *colorscale*.
*/Y & Usecolormap(const bool &usecolormap ) {
    _y.insert({"usecolormap", usecolormap});
    return *this;
}


/**
Sets the width of the contour lines.
*/Y & Width(const double &width ) {
    _y.insert({"width", width});
    return *this;
}




    json11::Json to_json() const {
        return _y;
    }

    private:

    json11::Json::object _y;

    };

    }
}

    }
}