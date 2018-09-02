/**
 * @file Scattermapbox.h
This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scattermapbox>

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.
 *
 */
#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "../BaseTrace.h"

#include "CppPlotly/Trace/Scattermapbox/Hoverlabel.h"
#include "CppPlotly/Trace/Scattermapbox/Line.h"
#include "CppPlotly/Trace/Scattermapbox/Marker.h"
#include "CppPlotly/Trace/Scattermapbox/Selected.h"
#include "CppPlotly/Trace/Scattermapbox/Stream.h"
#include "CppPlotly/Trace/Scattermapbox/Textfont.h"
#include "CppPlotly/Trace/Scattermapbox/Transform.h"
#include "CppPlotly/Trace/Scattermapbox/Unselected.h"


namespace CppPlotly {
    namespace Trace {
        /**
         * The data visualized as scatter point, lines or marker symbols on a Mapbox GL geographic map is provided by longitude/latitude pairs in `lon` and `lat`.
         *
         *
         */ 
        class Scattermapbox : public virtual CppPlotly::BaseTrace {
        public:
            Scattermapbox() :
                            _scattermapbox({
                                {"type", "scattermapbox"},
                                    })
                        {}

           /**
Determines whether or not gaps (i.e. {nan} or missing values) in the provided data arrays are connected.
*/Scattermapbox & Connectgaps(const bool &connectgaps ) {
    _scattermapbox.insert({"connectgaps", connectgaps});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Scattermapbox & Customdata(const std::vector<double> &customdata ) {
    _scattermapbox.insert({"customdata", customdata});
    return *this;
}


/**
Sets the source reference on plot.ly for  customdata .
*/Scattermapbox & Customdatasrc(const std::string &customdatasrc ) {
    _scattermapbox.insert({"customdatasrc", customdatasrc});
    return *this;
}


/**
Sets the area to fill with a solid color. Use with `fillcolor` if not *none*. *toself* connects the endpoints of the trace (or each segment of the trace if it has gaps) into a closed shape.
*/Scattermapbox & Fill(const json11::Json::object &fill ) {
    _scattermapbox.insert({"fill", fill});
    return *this;
}


/**
Sets the fill color. Defaults to a half-transparent variant of the line color, marker color, or marker line color, whichever is available.
*/Scattermapbox & Fillcolor(const json11::Json::object &fillcolor ) {
    _scattermapbox.insert({"fillcolor", fillcolor});
    return *this;
}


/**
Determines which trace information appear on hover. If `none` or `skip` are set, no information is displayed upon hovering. But, if `none` is set, click and hover events are still fired.
*/Scattermapbox & Hoverinfo(const json11::Json::object &hoverinfo ) {
    _scattermapbox.insert({"hoverinfo", hoverinfo});
    return *this;
}


/**
Sets the source reference on plot.ly for  hoverinfo .
*/Scattermapbox & Hoverinfosrc(const std::string &hoverinfosrc ) {
    _scattermapbox.insert({"hoverinfosrc", hoverinfosrc});
    return *this;
}


Scattermapbox & Hoverlabel(const CppPlotly::Trace::scattermapbox::Hoverlabel &hoverlabel ) {
    _scattermapbox.insert({"hoverlabel", hoverlabel});
    return *this;
}


/**
Sets hover text elements associated with each (lon,lat) pair If a single string, the same string appears over all the data points. If an array of string, the items are mapped in order to the this trace's (lon,lat) coordinates. To be seen, trace `hoverinfo` must contain a *text* flag.
*/Scattermapbox & Hovertext(const json11::Json::object &hovertext ) {
    _scattermapbox.insert({"hovertext", hovertext});
    return *this;
}


/**
Sets the source reference on plot.ly for  hovertext .
*/Scattermapbox & Hovertextsrc(const std::string &hovertextsrc ) {
    _scattermapbox.insert({"hovertextsrc", hovertextsrc});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Scattermapbox & Ids(const std::vector<double> &ids ) {
    _scattermapbox.insert({"ids", ids});
    return *this;
}


/**
Sets the source reference on plot.ly for  ids .
*/Scattermapbox & Idssrc(const std::string &idssrc ) {
    _scattermapbox.insert({"idssrc", idssrc});
    return *this;
}


/**
Sets the latitude coordinates (in degrees North).
*/Scattermapbox & Lat(const std::vector<double> &lat ) {
    _scattermapbox.insert({"lat", lat});
    return *this;
}


/**
Sets the source reference on plot.ly for  lat .
*/Scattermapbox & Latsrc(const std::string &latsrc ) {
    _scattermapbox.insert({"latsrc", latsrc});
    return *this;
}


/**
Sets the legend group for this trace. Traces part of the same legend group hide/show at the same time when toggling legend items.
*/Scattermapbox & Legendgroup(const std::string &legendgroup ) {
    _scattermapbox.insert({"legendgroup", legendgroup});
    return *this;
}


Scattermapbox & Line(const CppPlotly::Trace::scattermapbox::Line &line ) {
    _scattermapbox.insert({"line", line});
    return *this;
}


/**
Sets the longitude coordinates (in degrees East).
*/Scattermapbox & Lon(const std::vector<double> &lon ) {
    _scattermapbox.insert({"lon", lon});
    return *this;
}


/**
Sets the source reference on plot.ly for  lon .
*/Scattermapbox & Lonsrc(const std::string &lonsrc ) {
    _scattermapbox.insert({"lonsrc", lonsrc});
    return *this;
}


Scattermapbox & Marker(const CppPlotly::Trace::scattermapbox::Marker &marker ) {
    _scattermapbox.insert({"marker", marker});
    return *this;
}


/**
Determines the drawing mode for this scatter trace. If the provided `mode` includes *text* then the `text` elements appear at the coordinates. Otherwise, the `text` elements appear on hover.
*/Scattermapbox & Mode(const json11::Json::object &mode ) {
    _scattermapbox.insert({"mode", mode});
    return *this;
}


/**
Sets the trace name. The trace name appear as the legend item and on hover.
*/Scattermapbox & Name(const std::string &name ) {
    _scattermapbox.insert({"name", name});
    return *this;
}


/**
Sets the opacity of the trace.
*/Scattermapbox & Opacity(const double &opacity ) {
    _scattermapbox.insert({"opacity", opacity});
    return *this;
}


Scattermapbox & Selected(const CppPlotly::Trace::scattermapbox::Selected &selected ) {
    _scattermapbox.insert({"selected", selected});
    return *this;
}


/**
Array containing integer indices of selected points. Has an effect only for traces that support selections. Note that an empty array means an empty selection where the `unselected` are turned on for all points, whereas, any other non-array values means no selection all where the `selected` and `unselected` styles have no effect.
*/Scattermapbox & Selectedpoints(const json11::Json::object &selectedpoints ) {
    _scattermapbox.insert({"selectedpoints", selectedpoints});
    return *this;
}


/**
Determines whether or not an item corresponding to this trace is shown in the legend.
*/Scattermapbox & Showlegend(const bool &showlegend ) {
    _scattermapbox.insert({"showlegend", showlegend});
    return *this;
}


Scattermapbox & Stream(const CppPlotly::Trace::scattermapbox::Stream &stream ) {
    _scattermapbox.insert({"stream", stream});
    return *this;
}


/**
Sets a reference between this trace's data coordinates and a mapbox subplot. If *mapbox* (the default value), the data refer to `layout.mapbox`. If *mapbox2*, the data refer to `layout.mapbox2`, and so on.
*/Scattermapbox & Subplot(const json11::Json::object &subplot ) {
    _scattermapbox.insert({"subplot", subplot});
    return *this;
}


/**
Sets text elements associated with each (lon,lat) pair If a single string, the same string appears over all the data points. If an array of string, the items are mapped in order to the this trace's (lon,lat) coordinates. If trace `hoverinfo` contains a *text* flag and *hovertext* is not set, these elements will be seen in the hover labels.
*/Scattermapbox & Text(const json11::Json::object &text ) {
    _scattermapbox.insert({"text", text});
    return *this;
}


Scattermapbox & Textfont(const CppPlotly::Trace::scattermapbox::Textfont &textfont ) {
    _scattermapbox.insert({"textfont", textfont});
    return *this;
}


/**
Sets the positions of the `text` elements with respects to the (x,y) coordinates.
*/Scattermapbox & Textposition(const json11::Json::object &textposition ) {
    _scattermapbox.insert({"textposition", textposition});
    return *this;
}


/**
Sets the source reference on plot.ly for  text .
*/Scattermapbox & Textsrc(const std::string &textsrc ) {
    _scattermapbox.insert({"textsrc", textsrc});
    return *this;
}


Scattermapbox & Transforms(const std::vector<CppPlotly::Trace::scattermapbox::Transform> &transforms ) {
    _scattermapbox.insert({"transforms", transforms});
    return *this;
}


Scattermapbox & Uid(const std::string &uid ) {
    _scattermapbox.insert({"uid", uid});
    return *this;
}


Scattermapbox & Unselected(const CppPlotly::Trace::scattermapbox::Unselected &unselected ) {
    _scattermapbox.insert({"unselected", unselected});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Scattermapbox & Visible(const json11::Json::object &visible ) {
    _scattermapbox.insert({"visible", visible});
    return *this;
}


 

            json11::Json to_json() const {
                return _scattermapbox;
            }

        private:
            
            json11::Json::object _scattermapbox;

        };
    }
}


