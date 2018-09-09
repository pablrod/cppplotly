/**
 * @file Contour.h
This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#contour>

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.
 *
 */
#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "../BaseTrace.h"

#include "CppPlotly/Trace/Contour/Colorbar.h"
#include "CppPlotly/Trace/Contour/Contours.h"
#include "CppPlotly/Trace/Contour/Hoverlabel.h"
#include "CppPlotly/Trace/Contour/Line.h"
#include "CppPlotly/Trace/Contour/Stream.h"
#include "CppPlotly/Trace/Contour/Transform.h"


namespace CppPlotly {
    namespace Trace {
        /**
         * The data from which contour lines are computed is set in `z`. Data in `z` must be a {2D array} of numbers. Say that `z` has N rows and M columns, then by default, these N rows correspond to N y coordinates (set in `y` or auto-generated) and the M columns correspond to M x coordinates (set in `x` or auto-generated). By setting `transpose` to *true*, the above behavior is flipped.
         *
         *
         */ 
        class Contour : public virtual CppPlotly::BaseTrace {
        public:
            Contour() :
                            _contour({
                                {"type", "contour"},
                                    })
                        {}

           /**
Determines whether or not the colorscale is picked using the sign of the input z values.
*/Contour & Autocolorscale(const bool &autocolorscale ) {
    _contour.insert({"autocolorscale", autocolorscale});
    return *this;
}


/**
Determines whether or not the contour level attributes are picked by an algorithm. If *true*, the number of contour levels can be set in `ncontours`. If *false*, set the contour level attributes in `contours`.
*/Contour & Autocontour(const bool &autocontour ) {
    _contour.insert({"autocontour", autocontour});
    return *this;
}


Contour & Colorbar(const CppPlotly::Trace::contour::Colorbar &colorbar ) {
    _contour.insert({"colorbar", colorbar});
    return *this;
}


/**
Sets the colorscale. The colorscale must be an array containing arrays mapping a normalized value to an rgb, rgba, hex, hsl, hsv, or named color string. At minimum, a mapping for the lowest (0) and highest (1) values are required. For example, `[[0, 'rgb(0,0,255)', [1, 'rgb(255,0,0)']]`. To control the bounds of the colorscale in z space, use zmin and zmax
*/Contour & Colorscale(const json11::Json::object &colorscale ) {
    _contour.insert({"colorscale", colorscale});
    return *this;
}


/**
Determines whether or not gaps (i.e. {nan} or missing values) in the `z` data are filled in.
*/Contour & Connectgaps(const bool &connectgaps ) {
    _contour.insert({"connectgaps", connectgaps});
    return *this;
}


Contour & Contours(const CppPlotly::Trace::contour::Contours &contours ) {
    _contour.insert({"contours", contours});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Contour & Customdata(const std::vector<double> &customdata ) {
    _contour.insert({"customdata", customdata});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Contour & Customdata(const std::vector<std::string> &customdata ) {
    _contour.insert({"customdata", customdata});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Contour & Customdata(const json11::Json::object &customdata ) {
    _contour.insert({"customdata", customdata});
    return *this;
}


/**
Sets the source reference on plot.ly for  customdata .
*/Contour & Customdatasrc(const std::string &customdatasrc ) {
    _contour.insert({"customdatasrc", customdatasrc});
    return *this;
}


/**
Sets the x coordinate step. See `x0` for more info.
*/Contour & Dx(const double &dx ) {
    _contour.insert({"dx", dx});
    return *this;
}


/**
Sets the y coordinate step. See `y0` for more info.
*/Contour & Dy(const double &dy ) {
    _contour.insert({"dy", dy});
    return *this;
}


/**
Sets the fill color if `contours.type` is *constraint*. Defaults to a half-transparent variant of the line color, marker color, or marker line color, whichever is available.
*/Contour & Fillcolor(const json11::Json::object &fillcolor ) {
    _contour.insert({"fillcolor", fillcolor});
    return *this;
}


/**
Determines which trace information appear on hover. If `none` or `skip` are set, no information is displayed upon hovering. But, if `none` is set, click and hover events are still fired.
*/Contour & Hoverinfo(const json11::Json::object &hoverinfo ) {
    _contour.insert({"hoverinfo", hoverinfo});
    return *this;
}


/**
Sets the source reference on plot.ly for  hoverinfo .
*/Contour & Hoverinfosrc(const std::string &hoverinfosrc ) {
    _contour.insert({"hoverinfosrc", hoverinfosrc});
    return *this;
}


Contour & Hoverlabel(const CppPlotly::Trace::contour::Hoverlabel &hoverlabel ) {
    _contour.insert({"hoverlabel", hoverlabel});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Contour & Ids(const std::vector<double> &ids ) {
    _contour.insert({"ids", ids});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Contour & Ids(const std::vector<std::string> &ids ) {
    _contour.insert({"ids", ids});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Contour & Ids(const json11::Json::object &ids ) {
    _contour.insert({"ids", ids});
    return *this;
}


/**
Sets the source reference on plot.ly for  ids .
*/Contour & Idssrc(const std::string &idssrc ) {
    _contour.insert({"idssrc", idssrc});
    return *this;
}


/**
Sets the legend group for this trace. Traces part of the same legend group hide/show at the same time when toggling legend items.
*/Contour & Legendgroup(const std::string &legendgroup ) {
    _contour.insert({"legendgroup", legendgroup});
    return *this;
}


Contour & Line(const CppPlotly::Trace::contour::Line &line ) {
    _contour.insert({"line", line});
    return *this;
}


/**
Sets the trace name. The trace name appear as the legend item and on hover.
*/Contour & Name(const std::string &name ) {
    _contour.insert({"name", name});
    return *this;
}


/**
Sets the maximum number of contour levels. The actual number of contours will be chosen automatically to be less than or equal to the value of `ncontours`. Has an effect only if `autocontour` is *true* or if `contours.size` is missing.
*/Contour & Ncontours(const int &ncontours ) {
    _contour.insert({"ncontours", ncontours});
    return *this;
}


/**
Sets the opacity of the trace.
*/Contour & Opacity(const double &opacity ) {
    _contour.insert({"opacity", opacity});
    return *this;
}


/**
Reverses the colorscale.
*/Contour & Reversescale(const bool &reversescale ) {
    _contour.insert({"reversescale", reversescale});
    return *this;
}


/**
Array containing integer indices of selected points. Has an effect only for traces that support selections. Note that an empty array means an empty selection where the `unselected` are turned on for all points, whereas, any other non-array values means no selection all where the `selected` and `unselected` styles have no effect.
*/Contour & Selectedpoints(const json11::Json::object &selectedpoints ) {
    _contour.insert({"selectedpoints", selectedpoints});
    return *this;
}


/**
Determines whether or not an item corresponding to this trace is shown in the legend.
*/Contour & Showlegend(const bool &showlegend ) {
    _contour.insert({"showlegend", showlegend});
    return *this;
}


/**
Determines whether or not a colorbar is displayed for this trace.
*/Contour & Showscale(const bool &showscale ) {
    _contour.insert({"showscale", showscale});
    return *this;
}


Contour & Stream(const CppPlotly::Trace::contour::Stream &stream ) {
    _contour.insert({"stream", stream});
    return *this;
}


/**
Sets the text elements associated with each z value.
*/Contour & Text(const std::vector<double> &text ) {
    _contour.insert({"text", text});
    return *this;
}


/**
Sets the text elements associated with each z value.
*/Contour & Text(const std::vector<std::string> &text ) {
    _contour.insert({"text", text});
    return *this;
}


/**
Sets the text elements associated with each z value.
*/Contour & Text(const json11::Json::object &text ) {
    _contour.insert({"text", text});
    return *this;
}


/**
Sets the source reference on plot.ly for  text .
*/Contour & Textsrc(const std::string &textsrc ) {
    _contour.insert({"textsrc", textsrc});
    return *this;
}


Contour & Transforms(const std::vector<CppPlotly::Trace::contour::Transform> &transforms ) {
    _contour.insert({"transforms", transforms});
    return *this;
}


/**
Transposes the z data.
*/Contour & Transpose(const bool &transpose ) {
    _contour.insert({"transpose", transpose});
    return *this;
}


Contour & Uid(const std::string &uid ) {
    _contour.insert({"uid", uid});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Contour & Visible(const json11::Json::object &visible ) {
    _contour.insert({"visible", visible});
    return *this;
}


/**
Sets the x coordinates.
*/Contour & X(const std::vector<double> &x ) {
    _contour.insert({"x", x});
    return *this;
}


/**
Sets the x coordinates.
*/Contour & X(const std::vector<std::string> &x ) {
    _contour.insert({"x", x});
    return *this;
}


/**
Sets the x coordinates.
*/Contour & X(const json11::Json::object &x ) {
    _contour.insert({"x", x});
    return *this;
}


/**
Alternate to `x`. Builds a linear space of x coordinates. Use with `dx` where `x0` is the starting coordinate and `dx` the step.
*/Contour & X0(const json11::Json::object &x0 ) {
    _contour.insert({"x0", x0});
    return *this;
}


/**
Sets a reference between this trace's x coordinates and a 2D cartesian x axis. If *x* (the default value), the x coordinates refer to `layout.xaxis`. If *x2*, the x coordinates refer to `layout.xaxis2`, and so on.
*/Contour & Xaxis(const json11::Json::object &xaxis ) {
    _contour.insert({"xaxis", xaxis});
    return *this;
}


/**
Sets the calendar system to use with `x` date data.
*/Contour & Xcalendar(const json11::Json::object &xcalendar ) {
    _contour.insert({"xcalendar", xcalendar});
    return *this;
}


/**
Sets the source reference on plot.ly for  x .
*/Contour & Xsrc(const std::string &xsrc ) {
    _contour.insert({"xsrc", xsrc});
    return *this;
}


/**
If *array*, the heatmap's x coordinates are given by *x* (the default behavior when `x` is provided). If *scaled*, the heatmap's x coordinates are given by *x0* and *dx* (the default behavior when `x` is not provided).
*/Contour & Xtype(const json11::Json::object &xtype ) {
    _contour.insert({"xtype", xtype});
    return *this;
}


/**
Sets the y coordinates.
*/Contour & Y(const std::vector<double> &y ) {
    _contour.insert({"y", y});
    return *this;
}


/**
Sets the y coordinates.
*/Contour & Y(const std::vector<std::string> &y ) {
    _contour.insert({"y", y});
    return *this;
}


/**
Sets the y coordinates.
*/Contour & Y(const json11::Json::object &y ) {
    _contour.insert({"y", y});
    return *this;
}


/**
Alternate to `y`. Builds a linear space of y coordinates. Use with `dy` where `y0` is the starting coordinate and `dy` the step.
*/Contour & Y0(const json11::Json::object &y0 ) {
    _contour.insert({"y0", y0});
    return *this;
}


/**
Sets a reference between this trace's y coordinates and a 2D cartesian y axis. If *y* (the default value), the y coordinates refer to `layout.yaxis`. If *y2*, the y coordinates refer to `layout.yaxis2`, and so on.
*/Contour & Yaxis(const json11::Json::object &yaxis ) {
    _contour.insert({"yaxis", yaxis});
    return *this;
}


/**
Sets the calendar system to use with `y` date data.
*/Contour & Ycalendar(const json11::Json::object &ycalendar ) {
    _contour.insert({"ycalendar", ycalendar});
    return *this;
}


/**
Sets the source reference on plot.ly for  y .
*/Contour & Ysrc(const std::string &ysrc ) {
    _contour.insert({"ysrc", ysrc});
    return *this;
}


/**
If *array*, the heatmap's y coordinates are given by *y* (the default behavior when `y` is provided) If *scaled*, the heatmap's y coordinates are given by *y0* and *dy* (the default behavior when `y` is not provided)
*/Contour & Ytype(const json11::Json::object &ytype ) {
    _contour.insert({"ytype", ytype});
    return *this;
}


/**
Sets the z data.
*/Contour & Z(const std::vector<double> &z ) {
    _contour.insert({"z", z});
    return *this;
}


/**
Sets the z data.
*/Contour & Z(const std::vector<std::string> &z ) {
    _contour.insert({"z", z});
    return *this;
}


/**
Sets the z data.
*/Contour & Z(const json11::Json::object &z ) {
    _contour.insert({"z", z});
    return *this;
}


/**
Determines the whether or not the color domain is computed with respect to the input data.
*/Contour & Zauto(const bool &zauto ) {
    _contour.insert({"zauto", zauto});
    return *this;
}


/**
Sets the hover text formatting rule using d3 formatting mini-languages which are very similar to those in Python. See: https://github.com/d3/d3-format/blob/master/README.md#locale_format
*/Contour & Zhoverformat(const std::string &zhoverformat ) {
    _contour.insert({"zhoverformat", zhoverformat});
    return *this;
}


/**
Sets the upper bound of color domain.
*/Contour & Zmax(const double &zmax ) {
    _contour.insert({"zmax", zmax});
    return *this;
}


/**
Sets the lower bound of color domain.
*/Contour & Zmin(const double &zmin ) {
    _contour.insert({"zmin", zmin});
    return *this;
}


/**
Sets the source reference on plot.ly for  z .
*/Contour & Zsrc(const std::string &zsrc ) {
    _contour.insert({"zsrc", zsrc});
    return *this;
}


 

            virtual json11::Json to_json() const {
                return _contour;
            }

        private:
            
            json11::Json::object _contour;

        };
    }
}


