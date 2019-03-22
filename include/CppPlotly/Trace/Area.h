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
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Area & Customdata(const std::vector<std::string> &customdata ) {
    _area.insert({"customdata", customdata});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Area & Customdata(const json11::Json &customdata ) {
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
*/Area & Hoverinfo(const json11::Json &hoverinfo ) {
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
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Area & Ids(const std::vector<std::string> &ids ) {
    _area.insert({"ids", ids});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Area & Ids(const json11::Json &ids ) {
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
Area traces are deprecated! Please switch to the *barpolar* trace type. Sets the radial coordinates for legacy polar chart only.
*/Area & R(const std::vector<double> &r ) {
    _area.insert({"r", r});
    return *this;
}


/**
Area traces are deprecated! Please switch to the *barpolar* trace type. Sets the radial coordinates for legacy polar chart only.
*/Area & R(const std::vector<std::string> &r ) {
    _area.insert({"r", r});
    return *this;
}


/**
Area traces are deprecated! Please switch to the *barpolar* trace type. Sets the radial coordinates for legacy polar chart only.
*/Area & R(const json11::Json &r ) {
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
*/Area & Selectedpoints(const json11::Json &selectedpoints ) {
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
Area traces are deprecated! Please switch to the *barpolar* trace type. Sets the angular coordinates for legacy polar chart only.
*/Area & T(const std::vector<double> &t ) {
    _area.insert({"t", t});
    return *this;
}


/**
Area traces are deprecated! Please switch to the *barpolar* trace type. Sets the angular coordinates for legacy polar chart only.
*/Area & T(const std::vector<std::string> &t ) {
    _area.insert({"t", t});
    return *this;
}


/**
Area traces are deprecated! Please switch to the *barpolar* trace type. Sets the angular coordinates for legacy polar chart only.
*/Area & T(const json11::Json &t ) {
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


/**
Assign an id to this trace, Use this to provide object constancy between traces during animations and transitions.
*/Area & Uid(const std::string &uid ) {
    _area.insert({"uid", uid});
    return *this;
}


/**
Controls persistence of some user-driven changes to the trace: `constraintrange` in `parcoords` traces, as well as some `editable: true` modifications such as `name` and `colorbar.title`. Defaults to `layout.uirevision`. Note that other user-driven trace attribute changes are controlled by `layout` attributes: `trace.visible` is controlled by `layout.legend.uirevision`, `selectedpoints` is controlled by `layout.selectionrevision`, and `colorbar.(x|y)` (accessible with `config: {editable: true}`) is controlled by `layout.editrevision`. Trace changes are tracked by `uid`, which only falls back on trace index if no `uid` is provided. So if your app can add/remove traces before the end of the `data` array, such that the same trace has a different index, you can still preserve user-driven changes if you give each trace a `uid` that stays with it as it moves.
*/Area & Uirevision(const json11::Json &uirevision ) {
    _area.insert({"uirevision", uirevision});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Area & Visible(const json11::Json &visible ) {
    _area.insert({"visible", visible});
    return *this;
}


 

            virtual json11::Json to_json() const {
                return _area;
            }

        private:
            
            json11::Json::object _area;

        };
    }
}


