/**
 * @file Z.h
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

#include "CppPlotly/Trace/Surface/Contours/Z/Project.h"



namespace CppPlotly {
    namespace Trace {
    namespace surface {
namespace contours {

    /**
     * 
     *
     *
     */
    class Z {
    public:

    /**
Sets the color of the contour lines.
*/Z & Color(const json11::Json &color ) {
    _z.insert({"color", color});
    return *this;
}


/**
Determines whether or not contour lines about the z dimension are highlighted on hover.
*/Z & Highlight(const bool &highlight ) {
    _z.insert({"highlight", highlight});
    return *this;
}


/**
Sets the color of the highlighted contour lines.
*/Z & Highlightcolor(const json11::Json &highlightcolor ) {
    _z.insert({"highlightcolor", highlightcolor});
    return *this;
}


/**
Sets the width of the highlighted contour lines.
*/Z & Highlightwidth(const double &highlightwidth ) {
    _z.insert({"highlightwidth", highlightwidth});
    return *this;
}


Z & Project(const CppPlotly::Trace::surface::contours::z::Project &project ) {
    _z.insert({"project", project});
    return *this;
}


/**
Determines whether or not contour lines about the z dimension are drawn.
*/Z & Show(const bool &show ) {
    _z.insert({"show", show});
    return *this;
}


/**
An alternate to *color*. Determines whether or not the contour lines are colored using the trace *colorscale*.
*/Z & Usecolormap(const bool &usecolormap ) {
    _z.insert({"usecolormap", usecolormap});
    return *this;
}


/**
Sets the width of the contour lines.
*/Z & Width(const double &width ) {
    _z.insert({"width", width});
    return *this;
}




    json11::Json to_json() const {
        return _z;
    }

    private:

    json11::Json::object _z;

    };

    }
}

    }
}
