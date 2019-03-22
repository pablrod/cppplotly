/**
 * @file Hoverlabel.h
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

#include "CppPlotly/Trace/Scatterternary/Hoverlabel/Font.h"



namespace CppPlotly {
    namespace Trace {
    namespace scatterternary {

    /**
     * 
     *
     *
     */
    class Hoverlabel {
    public:

    /**
Sets the background color of the hover labels for this trace
*/Hoverlabel & Bgcolor(const json11::Json &bgcolor ) {
    _hoverlabel.insert({"bgcolor", bgcolor});
    return *this;
}


/**
Sets the source reference on plot.ly for  bgcolor .
*/Hoverlabel & Bgcolorsrc(const std::string &bgcolorsrc ) {
    _hoverlabel.insert({"bgcolorsrc", bgcolorsrc});
    return *this;
}


/**
Sets the border color of the hover labels for this trace.
*/Hoverlabel & Bordercolor(const json11::Json &bordercolor ) {
    _hoverlabel.insert({"bordercolor", bordercolor});
    return *this;
}


/**
Sets the source reference on plot.ly for  bordercolor .
*/Hoverlabel & Bordercolorsrc(const std::string &bordercolorsrc ) {
    _hoverlabel.insert({"bordercolorsrc", bordercolorsrc});
    return *this;
}


Hoverlabel & Font(const CppPlotly::Trace::scatterternary::hoverlabel::Font &font ) {
    _hoverlabel.insert({"font", font});
    return *this;
}


/**
Sets the length (in number of characters) of the trace name in the hover labels for this trace. -1 shows the whole name regardless of length. 0-3 shows the first 0-3 characters, and an integer >3 will show the whole name if it is less than that many characters, but if it is longer, will truncate to `namelength - 3` characters and add an ellipsis.
*/Hoverlabel & Namelength(const json11::Json &namelength ) {
    _hoverlabel.insert({"namelength", namelength});
    return *this;
}


/**
Sets the source reference on plot.ly for  namelength .
*/Hoverlabel & Namelengthsrc(const std::string &namelengthsrc ) {
    _hoverlabel.insert({"namelengthsrc", namelengthsrc});
    return *this;
}




    json11::Json to_json() const {
        return _hoverlabel;
    }

    private:

    json11::Json::object _hoverlabel;

    };

    }

    }
}
