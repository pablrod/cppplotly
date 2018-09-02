/**
 * @file Area.h
This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#area>

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.
 *
 */
#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "../BaseTrace.h"

#include "CppPlotly/Trace/Area/Hoverlabel.h"
#include "CppPlotly/Trace/Area/Marker.h"
#include "CppPlotly/Trace/Area/Stream.h"
#include "CppPlotly/Trace/Area/Transform.h"


namespace CppPlotly {
    namespace Trace {
        /**
         * 
         *
         *
         */ 
        class Area : public virtual CppPlotly::BaseTrace {
        public:
            Area() :
                            _area({
                                {"type", "area"},
                                    })
                        {}

           /**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Area & Customdata(const std::vector<double> &customdata ) {
    _area.insert({"customdata", customdata});
    return *this;
}


/**
Sets the source reference on plot.ly for  customdata .
*/Area & Customdatasrc(const std::string &customdatasrc ) {
    _area.insert({"customdatasrc", customdatasrc});
    return *this;
}


/**
Determines which trace information appear on hover. If `none` or `skip` are set, no information is displayed upon hovering. But, if `none` is set, click and hover events are still fired.
*/Area & Hoverinfo(const json11::Json::object &hoverinfo ) {
    _area.insert({"hoverinfo", hoverinfo});
    return *this;
}


/**
Sets the source reference on plot.ly for  hoverinfo .
*/Area & Hoverinfosrc(const std::string &hoverinfosrc ) {
    _area.insert({"hoverinfosrc", hoverinfosrc});
    return *this;
}


Area & Hoverlabel(const CppPlotly::Trace::area::Hoverlabel &hoverlabel ) {
    _area.insert({"hoverlabel", hoverlabel});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Area & Ids(const std::vector<double> &ids ) {
    _area.insert({"ids", ids});
    return *this;
}


/**
Sets the source reference on plot.ly for  ids .
*/Area & Idssrc(const std::string &idssrc ) {
    _area.insert({"idssrc", idssrc});
    return *this;
}


/**
Sets the legend group for this trace. Traces part of the same legend group hide/show at the same time when toggling legend items.
*/Area & Legendgroup(const std::string &legendgroup ) {
    _area.insert({"legendgroup", legendgroup});
    return *this;
}


Area & Marker(const CppPlotly::Trace::area::Marker &marker ) {
    _area.insert({"marker", marker});
    return *this;
}


/**
Sets the trace name. The trace name appear as the legend item and on hover.
*/Area & Name(const std::string &name ) {
    _area.insert({"name", name});
    return *this;
}


/**
Sets the opacity of the trace.
*/Area & Opacity(const double &opacity ) {
    _area.insert({"opacity", opacity});
    return *this;
}


/**
For legacy polar chart only.Please switch to *scatterpolar* trace type.Sets the radial coordinates.
*/Area & R(const std::vector<double> &r ) {
    _area.insert({"r", r});
    return *this;
}


/**
Sets the source reference on plot.ly for  r .
*/Area & Rsrc(const std::string &rsrc ) {
    _area.insert({"rsrc", rsrc});
    return *this;
}


/**
Array containing integer indices of selected points. Has an effect only for traces that support selections. Note that an empty array means an empty selection where the `unselected` are turned on for all points, whereas, any other non-array values means no selection all where the `selected` and `unselected` styles have no effect.
*/Area & Selectedpoints(const json11::Json::object &selectedpoints ) {
    _area.insert({"selectedpoints", selectedpoints});
    return *this;
}


/**
Determines whether or not an item corresponding to this trace is shown in the legend.
*/Area & Showlegend(const bool &showlegend ) {
    _area.insert({"showlegend", showlegend});
    return *this;
}


Area & Stream(const CppPlotly::Trace::area::Stream &stream ) {
    _area.insert({"stream", stream});
    return *this;
}


/**
For legacy polar chart only.Please switch to *scatterpolar* trace type.Sets the angular coordinates.
*/Area & T(const std::vector<double> &t ) {
    _area.insert({"t", t});
    return *this;
}


Area & Transforms(const std::vector<CppPlotly::Trace::area::Transform> &transforms ) {
    _area.insert({"transforms", transforms});
    return *this;
}


/**
Sets the source reference on plot.ly for  t .
*/Area & Tsrc(const std::string &tsrc ) {
    _area.insert({"tsrc", tsrc});
    return *this;
}


Area & Uid(const std::string &uid ) {
    _area.insert({"uid", uid});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Area & Visible(const json11::Json::object &visible ) {
    _area.insert({"visible", visible});
    return *this;
}


 

            json11::Json to_json() const {
                return _area;
            }

        private:
            
            json11::Json::object _area;

        };
    }
}


