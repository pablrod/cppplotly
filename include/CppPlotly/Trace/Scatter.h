/**
 * @file Scatter.h
This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scatter>

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.
 *
 */
#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "../BaseTrace.h"

#include "CppPlotly/Trace/Scatter/Error_x.h"
#include "CppPlotly/Trace/Scatter/Error_y.h"
#include "CppPlotly/Trace/Scatter/Hoverlabel.h"
#include "CppPlotly/Trace/Scatter/Line.h"
#include "CppPlotly/Trace/Scatter/Marker.h"
#include "CppPlotly/Trace/Scatter/Selected.h"
#include "CppPlotly/Trace/Scatter/Stream.h"
#include "CppPlotly/Trace/Scatter/Textfont.h"
#include "CppPlotly/Trace/Scatter/Transform.h"
#include "CppPlotly/Trace/Scatter/Unselected.h"


namespace CppPlotly {
    namespace Trace {
        /**
         * The scatter trace type encompasses line charts, scatter charts, text charts, and bubble charts. The data visualized as scatter point or lines is set in `x` and `y`. Text (appearing either on the chart or on hover only) is via `text`. Bubble charts are achieved by setting `marker.size` and/or `marker.color` to numerical arrays.
         *
         *
         */ 
        class Scatter : public virtual CppPlotly::BaseTrace {
        public:
            Scatter() :
                            _scatter({
                                {"type", "scatter"},
                                    })
                        {}

           /**
Determines whether or not markers and text nodes are clipped about the subplot axes. To show markers and text nodes above axis lines and tick labels, make sure to set `xaxis.layer` and `yaxis.layer` to *below traces*.
*/Scatter & Cliponaxis(const bool &cliponaxis ) {
    _scatter.insert({"cliponaxis", cliponaxis});
    return *this;
}


/**
Determines whether or not gaps (i.e. {nan} or missing values) in the provided data arrays are connected.
*/Scatter & Connectgaps(const bool &connectgaps ) {
    _scatter.insert({"connectgaps", connectgaps});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Scatter & Customdata(const std::vector<double> &customdata ) {
    _scatter.insert({"customdata", customdata});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Scatter & Customdata(const std::vector<std::string> &customdata ) {
    _scatter.insert({"customdata", customdata});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Scatter & Customdata(const json11::Json &customdata ) {
    _scatter.insert({"customdata", customdata});
    return *this;
}


/**
Sets the source reference on plot.ly for  customdata .
*/Scatter & Customdatasrc(const std::string &customdatasrc ) {
    _scatter.insert({"customdatasrc", customdatasrc});
    return *this;
}


/**
Sets the x coordinate step. See `x0` for more info.
*/Scatter & Dx(const double &dx ) {
    _scatter.insert({"dx", dx});
    return *this;
}


/**
Sets the y coordinate step. See `y0` for more info.
*/Scatter & Dy(const double &dy ) {
    _scatter.insert({"dy", dy});
    return *this;
}


Scatter & Error_x(const CppPlotly::Trace::scatter::Error_x &error_x ) {
    _scatter.insert({"error_x", error_x});
    return *this;
}


Scatter & Error_y(const CppPlotly::Trace::scatter::Error_y &error_y ) {
    _scatter.insert({"error_y", error_y});
    return *this;
}


/**
Sets the area to fill with a solid color. Defaults to *none* unless this trace is stacked, then it gets *tonexty* (*tonextx*) if `orientation` is *v* (*h*) Use with `fillcolor` if not *none*. *tozerox* and *tozeroy* fill to x=0 and y=0 respectively. *tonextx* and *tonexty* fill between the endpoints of this trace and the endpoints of the trace before it, connecting those endpoints with straight lines (to make a stacked area graph); if there is no trace before it, they behave like *tozerox* and *tozeroy*. *toself* connects the endpoints of the trace (or each segment of the trace if it has gaps) into a closed shape. *tonext* fills the space between two traces if one completely encloses the other (eg consecutive contour lines), and behaves like *toself* if there is no trace before it. *tonext* should not be used if one trace does not enclose the other. Traces in a `stackgroup` will only fill to (or be filled to) other traces in the same group. With multiple `stackgroup`s or some traces stacked and some not, if fill-linked traces are not already consecutive, the later ones will be pushed down in the drawing order.
*/Scatter & Fill(const json11::Json &fill ) {
    _scatter.insert({"fill", fill});
    return *this;
}


/**
Sets the fill color. Defaults to a half-transparent variant of the line color, marker color, or marker line color, whichever is available.
*/Scatter & Fillcolor(const json11::Json &fillcolor ) {
    _scatter.insert({"fillcolor", fillcolor});
    return *this;
}


/**
Only relevant when `stackgroup` is used, and only the first `groupnorm` found in the `stackgroup` will be used - including if `visible` is *legendonly* but not if it is `false`. Sets the normalization for the sum of this `stackgroup`. With *fraction*, the value of each trace at each location is divided by the sum of all trace values at that location. *percent* is the same but multiplied by 100 to show percentages. If there are multiple subplots, or multiple `stackgroup`s on one subplot, each will be normalized within its own set.
*/Scatter & Groupnorm(const json11::Json &groupnorm ) {
    _scatter.insert({"groupnorm", groupnorm});
    return *this;
}


/**
Determines which trace information appear on hover. If `none` or `skip` are set, no information is displayed upon hovering. But, if `none` is set, click and hover events are still fired.
*/Scatter & Hoverinfo(const json11::Json &hoverinfo ) {
    _scatter.insert({"hoverinfo", hoverinfo});
    return *this;
}


/**
Sets the source reference on plot.ly for  hoverinfo .
*/Scatter & Hoverinfosrc(const std::string &hoverinfosrc ) {
    _scatter.insert({"hoverinfosrc", hoverinfosrc});
    return *this;
}


Scatter & Hoverlabel(const CppPlotly::Trace::scatter::Hoverlabel &hoverlabel ) {
    _scatter.insert({"hoverlabel", hoverlabel});
    return *this;
}


/**
Do the hover effects highlight individual points (markers or line points) or do they highlight filled regions? If the fill is *toself* or *tonext* and there are no markers or text, then the default is *fills*, otherwise it is *points*.
*/Scatter & Hoveron(const json11::Json &hoveron ) {
    _scatter.insert({"hoveron", hoveron});
    return *this;
}


/**
Template string used for rendering the information that appear on hover box. Note that this will override `hoverinfo`. Variables are inserted using %{variable}, for example "y: %{y}". Numbers are formatted using d3-format's syntax %{variable:d3-format}, for example "Price: %{y:$.2f}". See https://github.com/d3/d3-format/blob/master/README.md#locale_format for details on the formatting syntax. The variables available in `hovertemplate` are the ones emitted as event data described at this link https://plot.ly/javascript/plotlyjs-events/#event-data. Additionally, every attributes that can be specified per-point (the ones that are `arrayOk: true`) are available.  Anything contained in tag `<extra>` is displayed in the secondary box, for example "<extra>{fullData.name}</extra>". To hide the secondary box completely, use an empty tag `<extra></extra>`.
*/Scatter & Hovertemplate(const json11::Json &hovertemplate ) {
    _scatter.insert({"hovertemplate", hovertemplate});
    return *this;
}


/**
Sets the source reference on plot.ly for  hovertemplate .
*/Scatter & Hovertemplatesrc(const std::string &hovertemplatesrc ) {
    _scatter.insert({"hovertemplatesrc", hovertemplatesrc});
    return *this;
}


/**
Sets hover text elements associated with each (x,y) pair. If a single string, the same string appears over all the data points. If an array of string, the items are mapped in order to the this trace's (x,y) coordinates. To be seen, trace `hoverinfo` must contain a *text* flag.
*/Scatter & Hovertext(const json11::Json &hovertext ) {
    _scatter.insert({"hovertext", hovertext});
    return *this;
}


/**
Sets the source reference on plot.ly for  hovertext .
*/Scatter & Hovertextsrc(const std::string &hovertextsrc ) {
    _scatter.insert({"hovertextsrc", hovertextsrc});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Scatter & Ids(const std::vector<double> &ids ) {
    _scatter.insert({"ids", ids});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Scatter & Ids(const std::vector<std::string> &ids ) {
    _scatter.insert({"ids", ids});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Scatter & Ids(const json11::Json &ids ) {
    _scatter.insert({"ids", ids});
    return *this;
}


/**
Sets the source reference on plot.ly for  ids .
*/Scatter & Idssrc(const std::string &idssrc ) {
    _scatter.insert({"idssrc", idssrc});
    return *this;
}


/**
Sets the legend group for this trace. Traces part of the same legend group hide/show at the same time when toggling legend items.
*/Scatter & Legendgroup(const std::string &legendgroup ) {
    _scatter.insert({"legendgroup", legendgroup});
    return *this;
}


Scatter & Line(const CppPlotly::Trace::scatter::Line &line ) {
    _scatter.insert({"line", line});
    return *this;
}


Scatter & Marker(const CppPlotly::Trace::scatter::Marker &marker ) {
    _scatter.insert({"marker", marker});
    return *this;
}


/**
Determines the drawing mode for this scatter trace. If the provided `mode` includes *text* then the `text` elements appear at the coordinates. Otherwise, the `text` elements appear on hover. If there are less than 20 points and the trace is not stacked then the default is *lines+markers*. Otherwise, *lines*.
*/Scatter & Mode(const json11::Json &mode ) {
    _scatter.insert({"mode", mode});
    return *this;
}


/**
Sets the trace name. The trace name appear as the legend item and on hover.
*/Scatter & Name(const std::string &name ) {
    _scatter.insert({"name", name});
    return *this;
}


/**
Sets the opacity of the trace.
*/Scatter & Opacity(const double &opacity ) {
    _scatter.insert({"opacity", opacity});
    return *this;
}


/**
Only relevant when `stackgroup` is used, and only the first `orientation` found in the `stackgroup` will be used - including if `visible` is *legendonly* but not if it is `false`. Sets the stacking direction. With *v* (*h*), the y (x) values of subsequent traces are added. Also affects the default value of `fill`.
*/Scatter & Orientation(const json11::Json &orientation ) {
    _scatter.insert({"orientation", orientation});
    return *this;
}


/**
r coordinates in scatter traces are deprecated!Please switch to the *scatterpolar* trace type.Sets the radial coordinatesfor legacy polar chart only.
*/Scatter & R(const std::vector<double> &r ) {
    _scatter.insert({"r", r});
    return *this;
}


/**
r coordinates in scatter traces are deprecated!Please switch to the *scatterpolar* trace type.Sets the radial coordinatesfor legacy polar chart only.
*/Scatter & R(const std::vector<std::string> &r ) {
    _scatter.insert({"r", r});
    return *this;
}


/**
r coordinates in scatter traces are deprecated!Please switch to the *scatterpolar* trace type.Sets the radial coordinatesfor legacy polar chart only.
*/Scatter & R(const json11::Json &r ) {
    _scatter.insert({"r", r});
    return *this;
}


/**
Sets the source reference on plot.ly for  r .
*/Scatter & Rsrc(const std::string &rsrc ) {
    _scatter.insert({"rsrc", rsrc});
    return *this;
}


Scatter & Selected(const CppPlotly::Trace::scatter::Selected &selected ) {
    _scatter.insert({"selected", selected});
    return *this;
}


/**
Array containing integer indices of selected points. Has an effect only for traces that support selections. Note that an empty array means an empty selection where the `unselected` are turned on for all points, whereas, any other non-array values means no selection all where the `selected` and `unselected` styles have no effect.
*/Scatter & Selectedpoints(const json11::Json &selectedpoints ) {
    _scatter.insert({"selectedpoints", selectedpoints});
    return *this;
}


/**
Determines whether or not an item corresponding to this trace is shown in the legend.
*/Scatter & Showlegend(const bool &showlegend ) {
    _scatter.insert({"showlegend", showlegend});
    return *this;
}


/**
Only relevant when `stackgroup` is used, and only the first `stackgaps` found in the `stackgroup` will be used - including if `visible` is *legendonly* but not if it is `false`. Determines how we handle locations at which other traces in this group have data but this one does not. With *infer zero* we insert a zero at these locations. With *interpolate* we linearly interpolate between existing values, and extrapolate a constant beyond the existing values.
*/Scatter & Stackgaps(const json11::Json &stackgaps ) {
    _scatter.insert({"stackgaps", stackgaps});
    return *this;
}


/**
Set several scatter traces (on the same subplot) to the same stackgroup in order to add their y values (or their x values if `orientation` is *h*). If blank or omitted this trace will not be stacked. Stacking also turns `fill` on by default, using *tonexty* (*tonextx*) if `orientation` is *h* (*v*) and sets the default `mode` to *lines* irrespective of point count. You can only stack on a numeric (linear or log) axis. Traces in a `stackgroup` will only fill to (or be filled to) other traces in the same group. With multiple `stackgroup`s or some traces stacked and some not, if fill-linked traces are not already consecutive, the later ones will be pushed down in the drawing order.
*/Scatter & Stackgroup(const std::string &stackgroup ) {
    _scatter.insert({"stackgroup", stackgroup});
    return *this;
}


Scatter & Stream(const CppPlotly::Trace::scatter::Stream &stream ) {
    _scatter.insert({"stream", stream});
    return *this;
}


/**
t coordinates in scatter traces are deprecated!Please switch to the *scatterpolar* trace type.Sets the angular coordinatesfor legacy polar chart only.
*/Scatter & T(const std::vector<double> &t ) {
    _scatter.insert({"t", t});
    return *this;
}


/**
t coordinates in scatter traces are deprecated!Please switch to the *scatterpolar* trace type.Sets the angular coordinatesfor legacy polar chart only.
*/Scatter & T(const std::vector<std::string> &t ) {
    _scatter.insert({"t", t});
    return *this;
}


/**
t coordinates in scatter traces are deprecated!Please switch to the *scatterpolar* trace type.Sets the angular coordinatesfor legacy polar chart only.
*/Scatter & T(const json11::Json &t ) {
    _scatter.insert({"t", t});
    return *this;
}


/**
Sets text elements associated with each (x,y) pair. If a single string, the same string appears over all the data points. If an array of string, the items are mapped in order to the this trace's (x,y) coordinates. If trace `hoverinfo` contains a *text* flag and *hovertext* is not set, these elements will be seen in the hover labels.
*/Scatter & Text(const json11::Json &text ) {
    _scatter.insert({"text", text});
    return *this;
}


Scatter & Textfont(const CppPlotly::Trace::scatter::Textfont &textfont ) {
    _scatter.insert({"textfont", textfont});
    return *this;
}


/**
Sets the positions of the `text` elements with respects to the (x,y) coordinates.
*/Scatter & Textposition(const json11::Json &textposition ) {
    _scatter.insert({"textposition", textposition});
    return *this;
}


/**
Sets the source reference on plot.ly for  textposition .
*/Scatter & Textpositionsrc(const std::string &textpositionsrc ) {
    _scatter.insert({"textpositionsrc", textpositionsrc});
    return *this;
}


/**
Sets the source reference on plot.ly for  text .
*/Scatter & Textsrc(const std::string &textsrc ) {
    _scatter.insert({"textsrc", textsrc});
    return *this;
}


Scatter & Transforms(const std::vector<CppPlotly::Trace::scatter::Transform> &transforms ) {
    _scatter.insert({"transforms", transforms});
    return *this;
}


/**
Sets the source reference on plot.ly for  t .
*/Scatter & Tsrc(const std::string &tsrc ) {
    _scatter.insert({"tsrc", tsrc});
    return *this;
}


/**
Assign an id to this trace, Use this to provide object constancy between traces during animations and transitions.
*/Scatter & Uid(const std::string &uid ) {
    _scatter.insert({"uid", uid});
    return *this;
}


/**
Controls persistence of some user-driven changes to the trace: `constraintrange` in `parcoords` traces, as well as some `editable: true` modifications such as `name` and `colorbar.title`. Defaults to `layout.uirevision`. Note that other user-driven trace attribute changes are controlled by `layout` attributes: `trace.visible` is controlled by `layout.legend.uirevision`, `selectedpoints` is controlled by `layout.selectionrevision`, and `colorbar.(x|y)` (accessible with `config: {editable: true}`) is controlled by `layout.editrevision`. Trace changes are tracked by `uid`, which only falls back on trace index if no `uid` is provided. So if your app can add/remove traces before the end of the `data` array, such that the same trace has a different index, you can still preserve user-driven changes if you give each trace a `uid` that stays with it as it moves.
*/Scatter & Uirevision(const json11::Json &uirevision ) {
    _scatter.insert({"uirevision", uirevision});
    return *this;
}


Scatter & Unselected(const CppPlotly::Trace::scatter::Unselected &unselected ) {
    _scatter.insert({"unselected", unselected});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Scatter & Visible(const json11::Json &visible ) {
    _scatter.insert({"visible", visible});
    return *this;
}


/**
Sets the x coordinates.
*/Scatter & X(const std::vector<double> &x ) {
    _scatter.insert({"x", x});
    return *this;
}


/**
Sets the x coordinates.
*/Scatter & X(const std::vector<std::string> &x ) {
    _scatter.insert({"x", x});
    return *this;
}


/**
Sets the x coordinates.
*/Scatter & X(const json11::Json &x ) {
    _scatter.insert({"x", x});
    return *this;
}


/**
Alternate to `x`. Builds a linear space of x coordinates. Use with `dx` where `x0` is the starting coordinate and `dx` the step.
*/Scatter & X0(const json11::Json &x0 ) {
    _scatter.insert({"x0", x0});
    return *this;
}


/**
Sets a reference between this trace's x coordinates and a 2D cartesian x axis. If *x* (the default value), the x coordinates refer to `layout.xaxis`. If *x2*, the x coordinates refer to `layout.xaxis2`, and so on.
*/Scatter & Xaxis(const json11::Json &xaxis ) {
    _scatter.insert({"xaxis", xaxis});
    return *this;
}


/**
Sets the calendar system to use with `x` date data.
*/Scatter & Xcalendar(const json11::Json &xcalendar ) {
    _scatter.insert({"xcalendar", xcalendar});
    return *this;
}


/**
Sets the source reference on plot.ly for  x .
*/Scatter & Xsrc(const std::string &xsrc ) {
    _scatter.insert({"xsrc", xsrc});
    return *this;
}


/**
Sets the y coordinates.
*/Scatter & Y(const std::vector<double> &y ) {
    _scatter.insert({"y", y});
    return *this;
}


/**
Sets the y coordinates.
*/Scatter & Y(const std::vector<std::string> &y ) {
    _scatter.insert({"y", y});
    return *this;
}


/**
Sets the y coordinates.
*/Scatter & Y(const json11::Json &y ) {
    _scatter.insert({"y", y});
    return *this;
}


/**
Alternate to `y`. Builds a linear space of y coordinates. Use with `dy` where `y0` is the starting coordinate and `dy` the step.
*/Scatter & Y0(const json11::Json &y0 ) {
    _scatter.insert({"y0", y0});
    return *this;
}


/**
Sets a reference between this trace's y coordinates and a 2D cartesian y axis. If *y* (the default value), the y coordinates refer to `layout.yaxis`. If *y2*, the y coordinates refer to `layout.yaxis2`, and so on.
*/Scatter & Yaxis(const json11::Json &yaxis ) {
    _scatter.insert({"yaxis", yaxis});
    return *this;
}


/**
Sets the calendar system to use with `y` date data.
*/Scatter & Ycalendar(const json11::Json &ycalendar ) {
    _scatter.insert({"ycalendar", ycalendar});
    return *this;
}


/**
Sets the source reference on plot.ly for  y .
*/Scatter & Ysrc(const std::string &ysrc ) {
    _scatter.insert({"ysrc", ysrc});
    return *this;
}


 

            virtual json11::Json to_json() const {
                return _scatter;
            }

        private:
            
            json11::Json::object _scatter;

        };
    }
}


