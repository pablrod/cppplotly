/**
 * @file Scatterternary.h
This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scatterternary>

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.
 *
 */
#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "../BaseTrace.h"

#include "CppPlotly/Trace/Scatterternary/Hoverlabel.h"
#include "CppPlotly/Trace/Scatterternary/Line.h"
#include "CppPlotly/Trace/Scatterternary/Marker.h"
#include "CppPlotly/Trace/Scatterternary/Selected.h"
#include "CppPlotly/Trace/Scatterternary/Stream.h"
#include "CppPlotly/Trace/Scatterternary/Textfont.h"
#include "CppPlotly/Trace/Scatterternary/Transform.h"
#include "CppPlotly/Trace/Scatterternary/Unselected.h"


namespace CppPlotly {
    namespace Trace {
        /**
         * Provides similar functionality to the *scatter* type but on a ternary phase diagram. The data is provided by at least two arrays out of `a`, `b`, `c` triplets.
         *
         *
         */ 
        class Scatterternary : public virtual CppPlotly::BaseTrace {
        public:
            Scatterternary() :
                            _scatterternary({
                                {"type", "scatterternary"},
                                    })
                        {}

           /**
Sets the quantity of component `a` in each data point. If `a`, `b`, and `c` are all provided, they need not be normalized, only the relative values matter. If only two arrays are provided they must be normalized to match `ternary<i>.sum`.
*/Scatterternary & A(const std::vector<double> &a ) {
    _scatterternary.insert({"a", a});
    return *this;
}


/**
Sets the source reference on plot.ly for  a .
*/Scatterternary & Asrc(const std::string &asrc ) {
    _scatterternary.insert({"asrc", asrc});
    return *this;
}


/**
Sets the quantity of component `a` in each data point. If `a`, `b`, and `c` are all provided, they need not be normalized, only the relative values matter. If only two arrays are provided they must be normalized to match `ternary<i>.sum`.
*/Scatterternary & B(const std::vector<double> &b ) {
    _scatterternary.insert({"b", b});
    return *this;
}


/**
Sets the source reference on plot.ly for  b .
*/Scatterternary & Bsrc(const std::string &bsrc ) {
    _scatterternary.insert({"bsrc", bsrc});
    return *this;
}


/**
Sets the quantity of component `a` in each data point. If `a`, `b`, and `c` are all provided, they need not be normalized, only the relative values matter. If only two arrays are provided they must be normalized to match `ternary<i>.sum`.
*/Scatterternary & C(const std::vector<double> &c ) {
    _scatterternary.insert({"c", c});
    return *this;
}


/**
Determines whether or not markers and text nodes are clipped about the subplot axes. To show markers and text nodes above axis lines and tick labels, make sure to set `xaxis.layer` and `yaxis.layer` to *below traces*.
*/Scatterternary & Cliponaxis(const bool &cliponaxis ) {
    _scatterternary.insert({"cliponaxis", cliponaxis});
    return *this;
}


/**
Determines whether or not gaps (i.e. {nan} or missing values) in the provided data arrays are connected.
*/Scatterternary & Connectgaps(const bool &connectgaps ) {
    _scatterternary.insert({"connectgaps", connectgaps});
    return *this;
}


/**
Sets the source reference on plot.ly for  c .
*/Scatterternary & Csrc(const std::string &csrc ) {
    _scatterternary.insert({"csrc", csrc});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Scatterternary & Customdata(const std::vector<double> &customdata ) {
    _scatterternary.insert({"customdata", customdata});
    return *this;
}


/**
Sets the source reference on plot.ly for  customdata .
*/Scatterternary & Customdatasrc(const std::string &customdatasrc ) {
    _scatterternary.insert({"customdatasrc", customdatasrc});
    return *this;
}


/**
Sets the area to fill with a solid color. Use with `fillcolor` if not *none*. scatterternary has a subset of the options available to scatter. *toself* connects the endpoints of the trace (or each segment of the trace if it has gaps) into a closed shape. *tonext* fills the space between two traces if one completely encloses the other (eg consecutive contour lines), and behaves like *toself* if there is no trace before it. *tonext* should not be used if one trace does not enclose the other.
*/Scatterternary & Fill(const json11::Json::object &fill ) {
    _scatterternary.insert({"fill", fill});
    return *this;
}


/**
Sets the fill color. Defaults to a half-transparent variant of the line color, marker color, or marker line color, whichever is available.
*/Scatterternary & Fillcolor(const json11::Json::object &fillcolor ) {
    _scatterternary.insert({"fillcolor", fillcolor});
    return *this;
}


/**
Determines which trace information appear on hover. If `none` or `skip` are set, no information is displayed upon hovering. But, if `none` is set, click and hover events are still fired.
*/Scatterternary & Hoverinfo(const json11::Json::object &hoverinfo ) {
    _scatterternary.insert({"hoverinfo", hoverinfo});
    return *this;
}


/**
Sets the source reference on plot.ly for  hoverinfo .
*/Scatterternary & Hoverinfosrc(const std::string &hoverinfosrc ) {
    _scatterternary.insert({"hoverinfosrc", hoverinfosrc});
    return *this;
}


Scatterternary & Hoverlabel(const CppPlotly::Trace::scatterternary::Hoverlabel &hoverlabel ) {
    _scatterternary.insert({"hoverlabel", hoverlabel});
    return *this;
}


/**
Do the hover effects highlight individual points (markers or line points) or do they highlight filled regions? If the fill is *toself* or *tonext* and there are no markers or text, then the default is *fills*, otherwise it is *points*.
*/Scatterternary & Hoveron(const json11::Json::object &hoveron ) {
    _scatterternary.insert({"hoveron", hoveron});
    return *this;
}


/**
Sets hover text elements associated with each (a,b,c) point. If a single string, the same string appears over all the data points. If an array of strings, the items are mapped in order to the the data points in (a,b,c). To be seen, trace `hoverinfo` must contain a *text* flag.
*/Scatterternary & Hovertext(const json11::Json::object &hovertext ) {
    _scatterternary.insert({"hovertext", hovertext});
    return *this;
}


/**
Sets the source reference on plot.ly for  hovertext .
*/Scatterternary & Hovertextsrc(const std::string &hovertextsrc ) {
    _scatterternary.insert({"hovertextsrc", hovertextsrc});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Scatterternary & Ids(const std::vector<double> &ids ) {
    _scatterternary.insert({"ids", ids});
    return *this;
}


/**
Sets the source reference on plot.ly for  ids .
*/Scatterternary & Idssrc(const std::string &idssrc ) {
    _scatterternary.insert({"idssrc", idssrc});
    return *this;
}


/**
Sets the legend group for this trace. Traces part of the same legend group hide/show at the same time when toggling legend items.
*/Scatterternary & Legendgroup(const std::string &legendgroup ) {
    _scatterternary.insert({"legendgroup", legendgroup});
    return *this;
}


Scatterternary & Line(const CppPlotly::Trace::scatterternary::Line &line ) {
    _scatterternary.insert({"line", line});
    return *this;
}


Scatterternary & Marker(const CppPlotly::Trace::scatterternary::Marker &marker ) {
    _scatterternary.insert({"marker", marker});
    return *this;
}


/**
Determines the drawing mode for this scatter trace. If the provided `mode` includes *text* then the `text` elements appear at the coordinates. Otherwise, the `text` elements appear on hover. If there are less than 20 points, then the default is *lines+markers*. Otherwise, *lines*.
*/Scatterternary & Mode(const json11::Json::object &mode ) {
    _scatterternary.insert({"mode", mode});
    return *this;
}


/**
Sets the trace name. The trace name appear as the legend item and on hover.
*/Scatterternary & Name(const std::string &name ) {
    _scatterternary.insert({"name", name});
    return *this;
}


/**
Sets the opacity of the trace.
*/Scatterternary & Opacity(const double &opacity ) {
    _scatterternary.insert({"opacity", opacity});
    return *this;
}


Scatterternary & Selected(const CppPlotly::Trace::scatterternary::Selected &selected ) {
    _scatterternary.insert({"selected", selected});
    return *this;
}


/**
Array containing integer indices of selected points. Has an effect only for traces that support selections. Note that an empty array means an empty selection where the `unselected` are turned on for all points, whereas, any other non-array values means no selection all where the `selected` and `unselected` styles have no effect.
*/Scatterternary & Selectedpoints(const json11::Json::object &selectedpoints ) {
    _scatterternary.insert({"selectedpoints", selectedpoints});
    return *this;
}


/**
Determines whether or not an item corresponding to this trace is shown in the legend.
*/Scatterternary & Showlegend(const bool &showlegend ) {
    _scatterternary.insert({"showlegend", showlegend});
    return *this;
}


Scatterternary & Stream(const CppPlotly::Trace::scatterternary::Stream &stream ) {
    _scatterternary.insert({"stream", stream});
    return *this;
}


/**
Sets a reference between this trace's data coordinates and a ternary subplot. If *ternary* (the default value), the data refer to `layout.ternary`. If *ternary2*, the data refer to `layout.ternary2`, and so on.
*/Scatterternary & Subplot(const json11::Json::object &subplot ) {
    _scatterternary.insert({"subplot", subplot});
    return *this;
}


/**
The number each triplet should sum to, if only two of `a`, `b`, and `c` are provided. This overrides `ternary<i>.sum` to normalize this specific trace, but does not affect the values displayed on the axes. 0 (or missing) means to use ternary<i>.sum
*/Scatterternary & Sum(const double &sum ) {
    _scatterternary.insert({"sum", sum});
    return *this;
}


/**
Sets text elements associated with each (a,b,c) point. If a single string, the same string appears over all the data points. If an array of strings, the items are mapped in order to the the data points in (a,b,c). If trace `hoverinfo` contains a *text* flag and *hovertext* is not set, these elements will be seen in the hover labels.
*/Scatterternary & Text(const json11::Json::object &text ) {
    _scatterternary.insert({"text", text});
    return *this;
}


Scatterternary & Textfont(const CppPlotly::Trace::scatterternary::Textfont &textfont ) {
    _scatterternary.insert({"textfont", textfont});
    return *this;
}


/**
Sets the positions of the `text` elements with respects to the (x,y) coordinates.
*/Scatterternary & Textposition(const json11::Json::object &textposition ) {
    _scatterternary.insert({"textposition", textposition});
    return *this;
}


/**
Sets the source reference on plot.ly for  textposition .
*/Scatterternary & Textpositionsrc(const std::string &textpositionsrc ) {
    _scatterternary.insert({"textpositionsrc", textpositionsrc});
    return *this;
}


/**
Sets the source reference on plot.ly for  text .
*/Scatterternary & Textsrc(const std::string &textsrc ) {
    _scatterternary.insert({"textsrc", textsrc});
    return *this;
}


Scatterternary & Transforms(const std::vector<CppPlotly::Trace::scatterternary::Transform> &transforms ) {
    _scatterternary.insert({"transforms", transforms});
    return *this;
}


Scatterternary & Uid(const std::string &uid ) {
    _scatterternary.insert({"uid", uid});
    return *this;
}


Scatterternary & Unselected(const CppPlotly::Trace::scatterternary::Unselected &unselected ) {
    _scatterternary.insert({"unselected", unselected});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Scatterternary & Visible(const json11::Json::object &visible ) {
    _scatterternary.insert({"visible", visible});
    return *this;
}


 

            json11::Json to_json() const {
                return _scatterternary;
            }

        private:
            
            json11::Json::object _scatterternary;

        };
    }
}


