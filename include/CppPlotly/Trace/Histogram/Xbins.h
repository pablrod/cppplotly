/**
 * @file Xbins.h
This attribute is part of the possible options for the trace histogram.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#histogram>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Histogram/Xbins/ImpliedEdits.h"



namespace CppPlotly {
    namespace Trace {
    namespace histogram {

    /**
     * 
     *
     *
     */
    class Xbins {
    public:

    /**
Sets the end value for the x axis bins.
*/Xbins & End(const json11::Json::object &end ) {
    _xbins.insert({"end", end});
    return *this;
}


Xbins & ImpliedEdits(const CppPlotly::Trace::histogram::xbins::ImpliedEdits &impliedEdits ) {
    _xbins.insert({"impliedEdits", impliedEdits});
    return *this;
}


/**
Sets the step in-between value each x axis bin.
*/Xbins & Size(const json11::Json::object &size ) {
    _xbins.insert({"size", size});
    return *this;
}


/**
Sets the starting value for the x axis bins.
*/Xbins & Start(const json11::Json::object &start ) {
    _xbins.insert({"start", start});
    return *this;
}




    json11::Json to_json() const {
        return _xbins;
    }

    private:

    json11::Json::object _xbins;

    };

    }

    }
}
