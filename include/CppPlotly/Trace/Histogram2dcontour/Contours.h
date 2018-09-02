/**
 * @file Contours.h
This attribute is part of the possible options for the trace histogram2dcontour.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#histogram2dcontour>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Histogram2dcontour/Contours/ImpliedEdits.h"
#include "CppPlotly/Trace/Histogram2dcontour/Contours/Labelfont.h"



namespace CppPlotly {
    namespace Trace {
    namespace histogram2dcontour {

    /**
     * 
     *
     *
     */
    class Contours {
    public:

    /**
Determines the coloring method showing the contour values. If *fill*, coloring is done evenly between each contour level If *heatmap*, a heatmap gradient coloring is applied between each contour level. If *lines*, coloring is done on the contour lines. If *none*, no coloring is applied on this trace.
*/Contours & Coloring(const json11::Json::object &coloring ) {
    _contours.insert({"coloring", coloring});
    return *this;
}


/**
Sets the end contour level value. Must be more than `contours.start`
*/Contours & End(const double &end ) {
    _contours.insert({"end", end});
    return *this;
}


Contours & ImpliedEdits(const CppPlotly::Trace::histogram2dcontour::contours::ImpliedEdits &impliedEdits ) {
    _contours.insert({"impliedEdits", impliedEdits});
    return *this;
}


Contours & Labelfont(const CppPlotly::Trace::histogram2dcontour::contours::Labelfont &labelfont ) {
    _contours.insert({"labelfont", labelfont});
    return *this;
}


/**
Sets the contour label formatting rule using d3 formatting mini-language which is very similar to Python, see: https://github.com/d3/d3-format/blob/master/README.md#locale_format.
*/Contours & Labelformat(const std::string &labelformat ) {
    _contours.insert({"labelformat", labelformat});
    return *this;
}


/**
Sets the constraint operation. *=* keeps regions equal to `value` *<* and *<=* keep regions less than `value` *>* and *>=* keep regions greater than `value` *[]*, *()*, *[)*, and *(]* keep regions inside `value[0]` to `value[1]` *][*, *)(*, *](*, *)[* keep regions outside `value[0]` to value[1]` Open vs. closed intervals make no difference to constraint display, but all versions are allowed for consistency with filter transforms.
*/Contours & Operation(const json11::Json::object &operation ) {
    _contours.insert({"operation", operation});
    return *this;
}


/**
Determines whether to label the contour lines with their values.
*/Contours & Showlabels(const bool &showlabels ) {
    _contours.insert({"showlabels", showlabels});
    return *this;
}


/**
Determines whether or not the contour lines are drawn. Has an effect only if `contours.coloring` is set to *fill*.
*/Contours & Showlines(const bool &showlines ) {
    _contours.insert({"showlines", showlines});
    return *this;
}


/**
Sets the step between each contour level. Must be positive.
*/Contours & Size(const double &size ) {
    _contours.insert({"size", size});
    return *this;
}


/**
Sets the starting contour level value. Must be less than `contours.end`
*/Contours & Start(const double &start ) {
    _contours.insert({"start", start});
    return *this;
}


/**
Sets the value or values of the constraint boundary. When `operation` is set to one of the comparison values (=,<,>=,>,<=) *value* is expected to be a number. When `operation` is set to one of the interval values ([],(),[),(],][,)(,](,)[) *value* is expected to be an array of two numbers where the first is the lower bound and the second is the upper bound.
*/Contours & Value(const json11::Json::object &value ) {
    _contours.insert({"value", value});
    return *this;
}




    json11::Json to_json() const {
        return _contours;
    }

    private:

    json11::Json::object _contours;

    };

    }

    }
}
