/**
 * @file Scattercarpet.h
This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scattercarpet>

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.
 *
 */
#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "../BaseTrace.h"

#include "CppPlotly/Trace/Scattercarpet/Hoverlabel.h"
#include "CppPlotly/Trace/Scattercarpet/Line.h"
#include "CppPlotly/Trace/Scattercarpet/Marker.h"
#include "CppPlotly/Trace/Scattercarpet/Selected.h"
#include "CppPlotly/Trace/Scattercarpet/Stream.h"
#include "CppPlotly/Trace/Scattercarpet/Textfont.h"
#include "CppPlotly/Trace/Scattercarpet/Transform.h"
#include "CppPlotly/Trace/Scattercarpet/Unselected.h"


namespace CppPlotly {
    namespace Trace {
        /**
         * Plots a scatter trace on either the first carpet axis or the carpet axis with a matching `carpet` attribute.
         *
         *
         */ 
        class Scattercarpet : public virtual CppPlotly::BaseTrace {
        public:
            Scattercarpet() :
                            _scattercarpet({
                                {"type", "scattercarpet"},
                                    })
                        {}

           /**
Sets the a-axis coordinates.
*/Scattercarpet & A(const std::vector<double> &a ) {
    _scattercarpet.insert({"a", a});
    return *this;
}


/**
Sets the a-axis coordinates.
*/Scattercarpet & A(const std::vector<std::string> &a ) {
    _scattercarpet.insert({"a", a});
    return *this;
}


/**
Sets the a-axis coordinates.
*/Scattercarpet & A(const json11::Json &a ) {
    _scattercarpet.insert({"a", a});
    return *this;
}


/**
Sets the source reference on plot.ly for  a .
*/Scattercarpet & Asrc(const std::string &asrc ) {
    _scattercarpet.insert({"asrc", asrc});
    return *this;
}


/**
Sets the b-axis coordinates.
*/Scattercarpet & B(const std::vector<double> &b ) {
    _scattercarpet.insert({"b", b});
    return *this;
}


/**
Sets the b-axis coordinates.
*/Scattercarpet & B(const std::vector<std::string> &b ) {
    _scattercarpet.insert({"b", b});
    return *this;
}


/**
Sets the b-axis coordinates.
*/Scattercarpet & B(const json11::Json &b ) {
    _scattercarpet.insert({"b", b});
    return *this;
}


/**
Sets the source reference on plot.ly for  b .
*/Scattercarpet & Bsrc(const std::string &bsrc ) {
    _scattercarpet.insert({"bsrc", bsrc});
    return *this;
}


/**
An identifier for this carpet, so that `scattercarpet` and `scattercontour` traces can specify a carpet plot on which they lie
*/Scattercarpet & Carpet(const std::string &carpet ) {
    _scattercarpet.insert({"carpet", carpet});
    return *this;
}


/**
Determines whether or not gaps (i.e. {nan} or missing values) in the provided data arrays are connected.
*/Scattercarpet & Connectgaps(const bool &connectgaps ) {
    _scattercarpet.insert({"connectgaps", connectgaps});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Scattercarpet & Customdata(const std::vector<double> &customdata ) {
    _scattercarpet.insert({"customdata", customdata});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Scattercarpet & Customdata(const std::vector<std::string> &customdata ) {
    _scattercarpet.insert({"customdata", customdata});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Scattercarpet & Customdata(const json11::Json &customdata ) {
    _scattercarpet.insert({"customdata", customdata});
    return *this;
}


/**
Sets the source reference on plot.ly for  customdata .
*/Scattercarpet & Customdatasrc(const std::string &customdatasrc ) {
    _scattercarpet.insert({"customdatasrc", customdatasrc});
    return *this;
}


/**
Sets the area to fill with a solid color. Use with `fillcolor` if not *none*. scatterternary has a subset of the options available to scatter. *toself* connects the endpoints of the trace (or each segment of the trace if it has gaps) into a closed shape. *tonext* fills the space between two traces if one completely encloses the other (eg consecutive contour lines), and behaves like *toself* if there is no trace before it. *tonext* should not be used if one trace does not enclose the other.
*/Scattercarpet & Fill(const json11::Json &fill ) {
    _scattercarpet.insert({"fill", fill});
    return *this;
}


/**
Sets the fill color. Defaults to a half-transparent variant of the line color, marker color, or marker line color, whichever is available.
*/Scattercarpet & Fillcolor(const json11::Json &fillcolor ) {
    _scattercarpet.insert({"fillcolor", fillcolor});
    return *this;
}


/**
Determines which trace information appear on hover. If `none` or `skip` are set, no information is displayed upon hovering. But, if `none` is set, click and hover events are still fired.
*/Scattercarpet & Hoverinfo(const json11::Json &hoverinfo ) {
    _scattercarpet.insert({"hoverinfo", hoverinfo});
    return *this;
}


/**
Sets the source reference on plot.ly for  hoverinfo .
*/Scattercarpet & Hoverinfosrc(const std::string &hoverinfosrc ) {
    _scattercarpet.insert({"hoverinfosrc", hoverinfosrc});
    return *this;
}


Scattercarpet & Hoverlabel(const CppPlotly::Trace::scattercarpet::Hoverlabel &hoverlabel ) {
    _scattercarpet.insert({"hoverlabel", hoverlabel});
    return *this;
}


/**
Do the hover effects highlight individual points (markers or line points) or do they highlight filled regions? If the fill is *toself* or *tonext* and there are no markers or text, then the default is *fills*, otherwise it is *points*.
*/Scattercarpet & Hoveron(const json11::Json &hoveron ) {
    _scattercarpet.insert({"hoveron", hoveron});
    return *this;
}


/**
Template string used for rendering the information that appear on hover box. Note that this will override `hoverinfo`. Variables are inserted using %{variable}, for example "y: %{y}". Numbers are formatted using d3-format's syntax %{variable:d3-format}, for example "Price: %{y:$.2f}". See https://github.com/d3/d3-format/blob/master/README.md#locale_format for details on the formatting syntax. The variables available in `hovertemplate` are the ones emitted as event data described at this link https://plot.ly/javascript/plotlyjs-events/#event-data. Additionally, every attributes that can be specified per-point (the ones that are `arrayOk: true`) are available.  Anything contained in tag `<extra>` is displayed in the secondary box, for example "<extra>{fullData.name}</extra>". To hide the secondary box completely, use an empty tag `<extra></extra>`.
*/Scattercarpet & Hovertemplate(const json11::Json &hovertemplate ) {
    _scattercarpet.insert({"hovertemplate", hovertemplate});
    return *this;
}


/**
Sets the source reference on plot.ly for  hovertemplate .
*/Scattercarpet & Hovertemplatesrc(const std::string &hovertemplatesrc ) {
    _scattercarpet.insert({"hovertemplatesrc", hovertemplatesrc});
    return *this;
}


/**
Sets hover text elements associated with each (a,b) point. If a single string, the same string appears over all the data points. If an array of strings, the items are mapped in order to the the data points in (a,b). To be seen, trace `hoverinfo` must contain a *text* flag.
*/Scattercarpet & Hovertext(const json11::Json &hovertext ) {
    _scattercarpet.insert({"hovertext", hovertext});
    return *this;
}


/**
Sets the source reference on plot.ly for  hovertext .
*/Scattercarpet & Hovertextsrc(const std::string &hovertextsrc ) {
    _scattercarpet.insert({"hovertextsrc", hovertextsrc});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Scattercarpet & Ids(const std::vector<double> &ids ) {
    _scattercarpet.insert({"ids", ids});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Scattercarpet & Ids(const std::vector<std::string> &ids ) {
    _scattercarpet.insert({"ids", ids});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Scattercarpet & Ids(const json11::Json &ids ) {
    _scattercarpet.insert({"ids", ids});
    return *this;
}


/**
Sets the source reference on plot.ly for  ids .
*/Scattercarpet & Idssrc(const std::string &idssrc ) {
    _scattercarpet.insert({"idssrc", idssrc});
    return *this;
}


/**
Sets the legend group for this trace. Traces part of the same legend group hide/show at the same time when toggling legend items.
*/Scattercarpet & Legendgroup(const std::string &legendgroup ) {
    _scattercarpet.insert({"legendgroup", legendgroup});
    return *this;
}


Scattercarpet & Line(const CppPlotly::Trace::scattercarpet::Line &line ) {
    _scattercarpet.insert({"line", line});
    return *this;
}


Scattercarpet & Marker(const CppPlotly::Trace::scattercarpet::Marker &marker ) {
    _scattercarpet.insert({"marker", marker});
    return *this;
}


/**
Determines the drawing mode for this scatter trace. If the provided `mode` includes *text* then the `text` elements appear at the coordinates. Otherwise, the `text` elements appear on hover. If there are less than 20 points and the trace is not stacked then the default is *lines+markers*. Otherwise, *lines*.
*/Scattercarpet & Mode(const json11::Json &mode ) {
    _scattercarpet.insert({"mode", mode});
    return *this;
}


/**
Sets the trace name. The trace name appear as the legend item and on hover.
*/Scattercarpet & Name(const std::string &name ) {
    _scattercarpet.insert({"name", name});
    return *this;
}


/**
Sets the opacity of the trace.
*/Scattercarpet & Opacity(const double &opacity ) {
    _scattercarpet.insert({"opacity", opacity});
    return *this;
}


Scattercarpet & Selected(const CppPlotly::Trace::scattercarpet::Selected &selected ) {
    _scattercarpet.insert({"selected", selected});
    return *this;
}


/**
Array containing integer indices of selected points. Has an effect only for traces that support selections. Note that an empty array means an empty selection where the `unselected` are turned on for all points, whereas, any other non-array values means no selection all where the `selected` and `unselected` styles have no effect.
*/Scattercarpet & Selectedpoints(const json11::Json &selectedpoints ) {
    _scattercarpet.insert({"selectedpoints", selectedpoints});
    return *this;
}


/**
Determines whether or not an item corresponding to this trace is shown in the legend.
*/Scattercarpet & Showlegend(const bool &showlegend ) {
    _scattercarpet.insert({"showlegend", showlegend});
    return *this;
}


Scattercarpet & Stream(const CppPlotly::Trace::scattercarpet::Stream &stream ) {
    _scattercarpet.insert({"stream", stream});
    return *this;
}


/**
Sets text elements associated with each (a,b) point. If a single string, the same string appears over all the data points. If an array of strings, the items are mapped in order to the the data points in (a,b). If trace `hoverinfo` contains a *text* flag and *hovertext* is not set, these elements will be seen in the hover labels.
*/Scattercarpet & Text(const json11::Json &text ) {
    _scattercarpet.insert({"text", text});
    return *this;
}


Scattercarpet & Textfont(const CppPlotly::Trace::scattercarpet::Textfont &textfont ) {
    _scattercarpet.insert({"textfont", textfont});
    return *this;
}


/**
Sets the positions of the `text` elements with respects to the (x,y) coordinates.
*/Scattercarpet & Textposition(const json11::Json &textposition ) {
    _scattercarpet.insert({"textposition", textposition});
    return *this;
}


/**
Sets the source reference on plot.ly for  textposition .
*/Scattercarpet & Textpositionsrc(const std::string &textpositionsrc ) {
    _scattercarpet.insert({"textpositionsrc", textpositionsrc});
    return *this;
}


/**
Sets the source reference on plot.ly for  text .
*/Scattercarpet & Textsrc(const std::string &textsrc ) {
    _scattercarpet.insert({"textsrc", textsrc});
    return *this;
}


Scattercarpet & Transforms(const std::vector<CppPlotly::Trace::scattercarpet::Transform> &transforms ) {
    _scattercarpet.insert({"transforms", transforms});
    return *this;
}


/**
Assign an id to this trace, Use this to provide object constancy between traces during animations and transitions.
*/Scattercarpet & Uid(const std::string &uid ) {
    _scattercarpet.insert({"uid", uid});
    return *this;
}


/**
Controls persistence of some user-driven changes to the trace: `constraintrange` in `parcoords` traces, as well as some `editable: true` modifications such as `name` and `colorbar.title`. Defaults to `layout.uirevision`. Note that other user-driven trace attribute changes are controlled by `layout` attributes: `trace.visible` is controlled by `layout.legend.uirevision`, `selectedpoints` is controlled by `layout.selectionrevision`, and `colorbar.(x|y)` (accessible with `config: {editable: true}`) is controlled by `layout.editrevision`. Trace changes are tracked by `uid`, which only falls back on trace index if no `uid` is provided. So if your app can add/remove traces before the end of the `data` array, such that the same trace has a different index, you can still preserve user-driven changes if you give each trace a `uid` that stays with it as it moves.
*/Scattercarpet & Uirevision(const json11::Json &uirevision ) {
    _scattercarpet.insert({"uirevision", uirevision});
    return *this;
}


Scattercarpet & Unselected(const CppPlotly::Trace::scattercarpet::Unselected &unselected ) {
    _scattercarpet.insert({"unselected", unselected});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Scattercarpet & Visible(const json11::Json &visible ) {
    _scattercarpet.insert({"visible", visible});
    return *this;
}


/**
Sets a reference between this trace's x coordinates and a 2D cartesian x axis. If *x* (the default value), the x coordinates refer to `layout.xaxis`. If *x2*, the x coordinates refer to `layout.xaxis2`, and so on.
*/Scattercarpet & Xaxis(const json11::Json &xaxis ) {
    _scattercarpet.insert({"xaxis", xaxis});
    return *this;
}


/**
Sets a reference between this trace's y coordinates and a 2D cartesian y axis. If *y* (the default value), the y coordinates refer to `layout.yaxis`. If *y2*, the y coordinates refer to `layout.yaxis2`, and so on.
*/Scattercarpet & Yaxis(const json11::Json &yaxis ) {
    _scattercarpet.insert({"yaxis", yaxis});
    return *this;
}


 

            virtual json11::Json to_json() const {
                return _scattercarpet;
            }

        private:
            
            json11::Json::object _scattercarpet;

        };
    }
}


