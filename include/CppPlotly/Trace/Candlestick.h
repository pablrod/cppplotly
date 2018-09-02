/**
 * @file Candlestick.h
This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#candlestick>

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.
 *
 */
#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "../BaseTrace.h"

#include "CppPlotly/Trace/Candlestick/Decreasing.h"
#include "CppPlotly/Trace/Candlestick/Hoverlabel.h"
#include "CppPlotly/Trace/Candlestick/Increasing.h"
#include "CppPlotly/Trace/Candlestick/Line.h"
#include "CppPlotly/Trace/Candlestick/Stream.h"
#include "CppPlotly/Trace/Candlestick/Transform.h"


namespace CppPlotly {
    namespace Trace {
        /**
         * The candlestick is a style of financial chart describing open, high, low and close for a given `x` coordinate (most likely time). The boxes represent the spread between the `open` and `close` values and the lines represent the spread between the `low` and `high` values Sample points where the close value is higher (lower) then the open value are called increasing (decreasing). By default, increasing candles are drawn in green whereas decreasing are drawn in red.
         *
         *
         */ 
        class Candlestick : public virtual CppPlotly::BaseTrace {
        public:
            Candlestick() :
                            _candlestick({
                                {"type", "candlestick"},
                                    })
                        {}

           /**
Sets the close values.
*/Candlestick & Close(const std::vector<double> &close ) {
    _candlestick.insert({"close", close});
    return *this;
}


/**
Sets the source reference on plot.ly for  close .
*/Candlestick & Closesrc(const std::string &closesrc ) {
    _candlestick.insert({"closesrc", closesrc});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Candlestick & Customdata(const std::vector<double> &customdata ) {
    _candlestick.insert({"customdata", customdata});
    return *this;
}


/**
Sets the source reference on plot.ly for  customdata .
*/Candlestick & Customdatasrc(const std::string &customdatasrc ) {
    _candlestick.insert({"customdatasrc", customdatasrc});
    return *this;
}


Candlestick & Decreasing(const CppPlotly::Trace::candlestick::Decreasing &decreasing ) {
    _candlestick.insert({"decreasing", decreasing});
    return *this;
}


/**
Sets the high values.
*/Candlestick & High(const std::vector<double> &high ) {
    _candlestick.insert({"high", high});
    return *this;
}


/**
Sets the source reference on plot.ly for  high .
*/Candlestick & Highsrc(const std::string &highsrc ) {
    _candlestick.insert({"highsrc", highsrc});
    return *this;
}


/**
Determines which trace information appear on hover. If `none` or `skip` are set, no information is displayed upon hovering. But, if `none` is set, click and hover events are still fired.
*/Candlestick & Hoverinfo(const json11::Json::object &hoverinfo ) {
    _candlestick.insert({"hoverinfo", hoverinfo});
    return *this;
}


/**
Sets the source reference on plot.ly for  hoverinfo .
*/Candlestick & Hoverinfosrc(const std::string &hoverinfosrc ) {
    _candlestick.insert({"hoverinfosrc", hoverinfosrc});
    return *this;
}


Candlestick & Hoverlabel(const CppPlotly::Trace::candlestick::Hoverlabel &hoverlabel ) {
    _candlestick.insert({"hoverlabel", hoverlabel});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Candlestick & Ids(const std::vector<double> &ids ) {
    _candlestick.insert({"ids", ids});
    return *this;
}


/**
Sets the source reference on plot.ly for  ids .
*/Candlestick & Idssrc(const std::string &idssrc ) {
    _candlestick.insert({"idssrc", idssrc});
    return *this;
}


Candlestick & Increasing(const CppPlotly::Trace::candlestick::Increasing &increasing ) {
    _candlestick.insert({"increasing", increasing});
    return *this;
}


/**
Sets the legend group for this trace. Traces part of the same legend group hide/show at the same time when toggling legend items.
*/Candlestick & Legendgroup(const std::string &legendgroup ) {
    _candlestick.insert({"legendgroup", legendgroup});
    return *this;
}


Candlestick & Line(const CppPlotly::Trace::candlestick::Line &line ) {
    _candlestick.insert({"line", line});
    return *this;
}


/**
Sets the low values.
*/Candlestick & Low(const std::vector<double> &low ) {
    _candlestick.insert({"low", low});
    return *this;
}


/**
Sets the source reference on plot.ly for  low .
*/Candlestick & Lowsrc(const std::string &lowsrc ) {
    _candlestick.insert({"lowsrc", lowsrc});
    return *this;
}


/**
Sets the trace name. The trace name appear as the legend item and on hover.
*/Candlestick & Name(const std::string &name ) {
    _candlestick.insert({"name", name});
    return *this;
}


/**
Sets the opacity of the trace.
*/Candlestick & Opacity(const double &opacity ) {
    _candlestick.insert({"opacity", opacity});
    return *this;
}


/**
Sets the open values.
*/Candlestick & Open(const std::vector<double> &open ) {
    _candlestick.insert({"open", open});
    return *this;
}


/**
Sets the source reference on plot.ly for  open .
*/Candlestick & Opensrc(const std::string &opensrc ) {
    _candlestick.insert({"opensrc", opensrc});
    return *this;
}


/**
Array containing integer indices of selected points. Has an effect only for traces that support selections. Note that an empty array means an empty selection where the `unselected` are turned on for all points, whereas, any other non-array values means no selection all where the `selected` and `unselected` styles have no effect.
*/Candlestick & Selectedpoints(const json11::Json::object &selectedpoints ) {
    _candlestick.insert({"selectedpoints", selectedpoints});
    return *this;
}


/**
Determines whether or not an item corresponding to this trace is shown in the legend.
*/Candlestick & Showlegend(const bool &showlegend ) {
    _candlestick.insert({"showlegend", showlegend});
    return *this;
}


Candlestick & Stream(const CppPlotly::Trace::candlestick::Stream &stream ) {
    _candlestick.insert({"stream", stream});
    return *this;
}


/**
Sets hover text elements associated with each sample point. If a single string, the same string appears over all the data points. If an array of string, the items are mapped in order to this trace's sample points.
*/Candlestick & Text(const json11::Json::object &text ) {
    _candlestick.insert({"text", text});
    return *this;
}


/**
Sets the source reference on plot.ly for  text .
*/Candlestick & Textsrc(const std::string &textsrc ) {
    _candlestick.insert({"textsrc", textsrc});
    return *this;
}


Candlestick & Transforms(const std::vector<CppPlotly::Trace::candlestick::Transform> &transforms ) {
    _candlestick.insert({"transforms", transforms});
    return *this;
}


Candlestick & Uid(const std::string &uid ) {
    _candlestick.insert({"uid", uid});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Candlestick & Visible(const json11::Json::object &visible ) {
    _candlestick.insert({"visible", visible});
    return *this;
}


/**
Sets the width of the whiskers relative to the box' width. For example, with 1, the whiskers are as wide as the box(es).
*/Candlestick & Whiskerwidth(const double &whiskerwidth ) {
    _candlestick.insert({"whiskerwidth", whiskerwidth});
    return *this;
}


/**
Sets the x coordinates. If absent, linear coordinate will be generated.
*/Candlestick & X(const std::vector<double> &x ) {
    _candlestick.insert({"x", x});
    return *this;
}


/**
Sets a reference between this trace's x coordinates and a 2D cartesian x axis. If *x* (the default value), the x coordinates refer to `layout.xaxis`. If *x2*, the x coordinates refer to `layout.xaxis2`, and so on.
*/Candlestick & Xaxis(const json11::Json::object &xaxis ) {
    _candlestick.insert({"xaxis", xaxis});
    return *this;
}


/**
Sets the calendar system to use with `x` date data.
*/Candlestick & Xcalendar(const json11::Json::object &xcalendar ) {
    _candlestick.insert({"xcalendar", xcalendar});
    return *this;
}


/**
Sets the source reference on plot.ly for  x .
*/Candlestick & Xsrc(const std::string &xsrc ) {
    _candlestick.insert({"xsrc", xsrc});
    return *this;
}


/**
Sets a reference between this trace's y coordinates and a 2D cartesian y axis. If *y* (the default value), the y coordinates refer to `layout.yaxis`. If *y2*, the y coordinates refer to `layout.yaxis2`, and so on.
*/Candlestick & Yaxis(const json11::Json::object &yaxis ) {
    _candlestick.insert({"yaxis", yaxis});
    return *this;
}


 

            json11::Json to_json() const {
                return _candlestick;
            }

        private:
            
            json11::Json::object _candlestick;

        };
    }
}


