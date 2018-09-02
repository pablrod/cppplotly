/**
 * @file Scattergeo.h
This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scattergeo>

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.
 *
 */
#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "../BaseTrace.h"

#include "CppPlotly/Trace/Scattergeo/Hoverlabel.h"
#include "CppPlotly/Trace/Scattergeo/Line.h"
#include "CppPlotly/Trace/Scattergeo/Marker.h"
#include "CppPlotly/Trace/Scattergeo/Selected.h"
#include "CppPlotly/Trace/Scattergeo/Stream.h"
#include "CppPlotly/Trace/Scattergeo/Textfont.h"
#include "CppPlotly/Trace/Scattergeo/Transform.h"
#include "CppPlotly/Trace/Scattergeo/Unselected.h"


namespace CppPlotly {
    namespace Trace {
        /**
         * The data visualized as scatter point or lines on a geographic map is provided either by longitude/latitude pairs in `lon` and `lat` respectively or by geographic location IDs or names in `locations`.
         *
         *
         */ 
        class Scattergeo : public virtual CppPlotly::BaseTrace {
        public:
            Scattergeo() :
                            _scattergeo({
                                {"type", "scattergeo"},
                                    })
                        {}

           /**
Determines whether or not gaps (i.e. {nan} or missing values) in the provided data arrays are connected.
*/Scattergeo & Connectgaps(const bool &connectgaps ) {
    _scattergeo.insert({"connectgaps", connectgaps});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Scattergeo & Customdata(const std::vector<double> &customdata ) {
    _scattergeo.insert({"customdata", customdata});
    return *this;
}


/**
Sets the source reference on plot.ly for  customdata .
*/Scattergeo & Customdatasrc(const std::string &customdatasrc ) {
    _scattergeo.insert({"customdatasrc", customdatasrc});
    return *this;
}


/**
Sets the area to fill with a solid color. Use with `fillcolor` if not *none*. *toself* connects the endpoints of the trace (or each segment of the trace if it has gaps) into a closed shape.
*/Scattergeo & Fill(const json11::Json::object &fill ) {
    _scattergeo.insert({"fill", fill});
    return *this;
}


/**
Sets the fill color. Defaults to a half-transparent variant of the line color, marker color, or marker line color, whichever is available.
*/Scattergeo & Fillcolor(const json11::Json::object &fillcolor ) {
    _scattergeo.insert({"fillcolor", fillcolor});
    return *this;
}


/**
Sets a reference between this trace's geospatial coordinates and a geographic map. If *geo* (the default value), the geospatial coordinates refer to `layout.geo`. If *geo2*, the geospatial coordinates refer to `layout.geo2`, and so on.
*/Scattergeo & Geo(const json11::Json::object &geo ) {
    _scattergeo.insert({"geo", geo});
    return *this;
}


/**
Determines which trace information appear on hover. If `none` or `skip` are set, no information is displayed upon hovering. But, if `none` is set, click and hover events are still fired.
*/Scattergeo & Hoverinfo(const json11::Json::object &hoverinfo ) {
    _scattergeo.insert({"hoverinfo", hoverinfo});
    return *this;
}


/**
Sets the source reference on plot.ly for  hoverinfo .
*/Scattergeo & Hoverinfosrc(const std::string &hoverinfosrc ) {
    _scattergeo.insert({"hoverinfosrc", hoverinfosrc});
    return *this;
}


Scattergeo & Hoverlabel(const CppPlotly::Trace::scattergeo::Hoverlabel &hoverlabel ) {
    _scattergeo.insert({"hoverlabel", hoverlabel});
    return *this;
}


/**
Sets hover text elements associated with each (lon,lat) pair or item in `locations`. If a single string, the same string appears over all the data points. If an array of string, the items are mapped in order to the this trace's (lon,lat) or `locations` coordinates. To be seen, trace `hoverinfo` must contain a *text* flag.
*/Scattergeo & Hovertext(const json11::Json::object &hovertext ) {
    _scattergeo.insert({"hovertext", hovertext});
    return *this;
}


/**
Sets the source reference on plot.ly for  hovertext .
*/Scattergeo & Hovertextsrc(const std::string &hovertextsrc ) {
    _scattergeo.insert({"hovertextsrc", hovertextsrc});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Scattergeo & Ids(const std::vector<double> &ids ) {
    _scattergeo.insert({"ids", ids});
    return *this;
}


/**
Sets the source reference on plot.ly for  ids .
*/Scattergeo & Idssrc(const std::string &idssrc ) {
    _scattergeo.insert({"idssrc", idssrc});
    return *this;
}


/**
Sets the latitude coordinates (in degrees North).
*/Scattergeo & Lat(const std::vector<double> &lat ) {
    _scattergeo.insert({"lat", lat});
    return *this;
}


/**
Sets the source reference on plot.ly for  lat .
*/Scattergeo & Latsrc(const std::string &latsrc ) {
    _scattergeo.insert({"latsrc", latsrc});
    return *this;
}


/**
Sets the legend group for this trace. Traces part of the same legend group hide/show at the same time when toggling legend items.
*/Scattergeo & Legendgroup(const std::string &legendgroup ) {
    _scattergeo.insert({"legendgroup", legendgroup});
    return *this;
}


Scattergeo & Line(const CppPlotly::Trace::scattergeo::Line &line ) {
    _scattergeo.insert({"line", line});
    return *this;
}


/**
Determines the set of locations used to match entries in `locations` to regions on the map.
*/Scattergeo & Locationmode(const json11::Json::object &locationmode ) {
    _scattergeo.insert({"locationmode", locationmode});
    return *this;
}


/**
Sets the coordinates via location IDs or names. Coordinates correspond to the centroid of each location given. See `locationmode` for more info.
*/Scattergeo & Locations(const std::vector<double> &locations ) {
    _scattergeo.insert({"locations", locations});
    return *this;
}


/**
Sets the source reference on plot.ly for  locations .
*/Scattergeo & Locationssrc(const std::string &locationssrc ) {
    _scattergeo.insert({"locationssrc", locationssrc});
    return *this;
}


/**
Sets the longitude coordinates (in degrees East).
*/Scattergeo & Lon(const std::vector<double> &lon ) {
    _scattergeo.insert({"lon", lon});
    return *this;
}


/**
Sets the source reference on plot.ly for  lon .
*/Scattergeo & Lonsrc(const std::string &lonsrc ) {
    _scattergeo.insert({"lonsrc", lonsrc});
    return *this;
}


Scattergeo & Marker(const CppPlotly::Trace::scattergeo::Marker &marker ) {
    _scattergeo.insert({"marker", marker});
    return *this;
}


/**
Determines the drawing mode for this scatter trace. If the provided `mode` includes *text* then the `text` elements appear at the coordinates. Otherwise, the `text` elements appear on hover. If there are less than 20 points, then the default is *lines+markers*. Otherwise, *lines*.
*/Scattergeo & Mode(const json11::Json::object &mode ) {
    _scattergeo.insert({"mode", mode});
    return *this;
}


/**
Sets the trace name. The trace name appear as the legend item and on hover.
*/Scattergeo & Name(const std::string &name ) {
    _scattergeo.insert({"name", name});
    return *this;
}


/**
Sets the opacity of the trace.
*/Scattergeo & Opacity(const double &opacity ) {
    _scattergeo.insert({"opacity", opacity});
    return *this;
}


Scattergeo & Selected(const CppPlotly::Trace::scattergeo::Selected &selected ) {
    _scattergeo.insert({"selected", selected});
    return *this;
}


/**
Array containing integer indices of selected points. Has an effect only for traces that support selections. Note that an empty array means an empty selection where the `unselected` are turned on for all points, whereas, any other non-array values means no selection all where the `selected` and `unselected` styles have no effect.
*/Scattergeo & Selectedpoints(const json11::Json::object &selectedpoints ) {
    _scattergeo.insert({"selectedpoints", selectedpoints});
    return *this;
}


/**
Determines whether or not an item corresponding to this trace is shown in the legend.
*/Scattergeo & Showlegend(const bool &showlegend ) {
    _scattergeo.insert({"showlegend", showlegend});
    return *this;
}


Scattergeo & Stream(const CppPlotly::Trace::scattergeo::Stream &stream ) {
    _scattergeo.insert({"stream", stream});
    return *this;
}


/**
Sets text elements associated with each (lon,lat) pair or item in `locations`. If a single string, the same string appears over all the data points. If an array of string, the items are mapped in order to the this trace's (lon,lat) or `locations` coordinates. If trace `hoverinfo` contains a *text* flag and *hovertext* is not set, these elements will be seen in the hover labels.
*/Scattergeo & Text(const json11::Json::object &text ) {
    _scattergeo.insert({"text", text});
    return *this;
}


Scattergeo & Textfont(const CppPlotly::Trace::scattergeo::Textfont &textfont ) {
    _scattergeo.insert({"textfont", textfont});
    return *this;
}


/**
Sets the positions of the `text` elements with respects to the (x,y) coordinates.
*/Scattergeo & Textposition(const json11::Json::object &textposition ) {
    _scattergeo.insert({"textposition", textposition});
    return *this;
}


/**
Sets the source reference on plot.ly for  textposition .
*/Scattergeo & Textpositionsrc(const std::string &textpositionsrc ) {
    _scattergeo.insert({"textpositionsrc", textpositionsrc});
    return *this;
}


/**
Sets the source reference on plot.ly for  text .
*/Scattergeo & Textsrc(const std::string &textsrc ) {
    _scattergeo.insert({"textsrc", textsrc});
    return *this;
}


Scattergeo & Transforms(const std::vector<CppPlotly::Trace::scattergeo::Transform> &transforms ) {
    _scattergeo.insert({"transforms", transforms});
    return *this;
}


Scattergeo & Uid(const std::string &uid ) {
    _scattergeo.insert({"uid", uid});
    return *this;
}


Scattergeo & Unselected(const CppPlotly::Trace::scattergeo::Unselected &unselected ) {
    _scattergeo.insert({"unselected", unselected});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Scattergeo & Visible(const json11::Json::object &visible ) {
    _scattergeo.insert({"visible", visible});
    return *this;
}


 

            json11::Json to_json() const {
                return _scattergeo;
            }

        private:
            
            json11::Json::object _scattergeo;

        };
    }
}

