/**
 * @file Pie.h
This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#pie>

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.
 *
 */
#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "../BaseTrace.h"

#include "CppPlotly/Trace/Pie/Domain.h"
#include "CppPlotly/Trace/Pie/Hoverlabel.h"
#include "CppPlotly/Trace/Pie/Insidetextfont.h"
#include "CppPlotly/Trace/Pie/Marker.h"
#include "CppPlotly/Trace/Pie/Outsidetextfont.h"
#include "CppPlotly/Trace/Pie/Stream.h"
#include "CppPlotly/Trace/Pie/Textfont.h"
#include "CppPlotly/Trace/Pie/Title.h"
#include "CppPlotly/Trace/Pie/Transform.h"


namespace CppPlotly {
    namespace Trace {
        /**
         * A data visualized by the sectors of the pie is set in `values`. The sector labels are set in `labels`. The sector colors are set in `marker.colors`
         *
         *
         */ 
        class Pie : public virtual CppPlotly::BaseTrace {
        public:
            Pie() :
                            _pie({
                                {"type", "pie"},
                                    })
                        {}

           /**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Pie & Customdata(const std::vector<double> &customdata ) {
    _pie.insert({"customdata", customdata});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Pie & Customdata(const std::vector<std::string> &customdata ) {
    _pie.insert({"customdata", customdata});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Pie & Customdata(const json11::Json &customdata ) {
    _pie.insert({"customdata", customdata});
    return *this;
}


/**
Sets the source reference on plot.ly for  customdata .
*/Pie & Customdatasrc(const std::string &customdatasrc ) {
    _pie.insert({"customdatasrc", customdatasrc});
    return *this;
}


/**
Specifies the direction at which succeeding sectors follow one another.
*/Pie & Direction(const json11::Json &direction ) {
    _pie.insert({"direction", direction});
    return *this;
}


/**
Sets the label step. See `label0` for more info.
*/Pie & Dlabel(const double &dlabel ) {
    _pie.insert({"dlabel", dlabel});
    return *this;
}


Pie & Domain(const CppPlotly::Trace::pie::Domain &domain ) {
    _pie.insert({"domain", domain});
    return *this;
}


/**
Sets the fraction of the radius to cut out of the pie. Use this to make a donut chart.
*/Pie & Hole(const double &hole ) {
    _pie.insert({"hole", hole});
    return *this;
}


/**
Determines which trace information appear on hover. If `none` or `skip` are set, no information is displayed upon hovering. But, if `none` is set, click and hover events are still fired.
*/Pie & Hoverinfo(const json11::Json &hoverinfo ) {
    _pie.insert({"hoverinfo", hoverinfo});
    return *this;
}


/**
Sets the source reference on plot.ly for  hoverinfo .
*/Pie & Hoverinfosrc(const std::string &hoverinfosrc ) {
    _pie.insert({"hoverinfosrc", hoverinfosrc});
    return *this;
}


Pie & Hoverlabel(const CppPlotly::Trace::pie::Hoverlabel &hoverlabel ) {
    _pie.insert({"hoverlabel", hoverlabel});
    return *this;
}


/**
Template string used for rendering the information that appear on hover box. Note that this will override `hoverinfo`. Variables are inserted using %{variable}, for example "y: %{y}". Numbers are formatted using d3-format's syntax %{variable:d3-format}, for example "Price: %{y:$.2f}". See https://github.com/d3/d3-format/blob/master/README.md#locale_format for details on the formatting syntax. The variables available in `hovertemplate` are the ones emitted as event data described at this link https://plot.ly/javascript/plotlyjs-events/#event-data. Additionally, every attributes that can be specified per-point (the ones that are `arrayOk: true`) are available. variables `label`, `color`, `value`, `percent` and `text`. Anything contained in tag `<extra>` is displayed in the secondary box, for example "<extra>{fullData.name}</extra>". To hide the secondary box completely, use an empty tag `<extra></extra>`.
*/Pie & Hovertemplate(const json11::Json &hovertemplate ) {
    _pie.insert({"hovertemplate", hovertemplate});
    return *this;
}


/**
Sets the source reference on plot.ly for  hovertemplate .
*/Pie & Hovertemplatesrc(const std::string &hovertemplatesrc ) {
    _pie.insert({"hovertemplatesrc", hovertemplatesrc});
    return *this;
}


/**
Sets hover text elements associated with each sector. If a single string, the same string appears for all data points. If an array of string, the items are mapped in order of this trace's sectors. To be seen, trace `hoverinfo` must contain a *text* flag.
*/Pie & Hovertext(const json11::Json &hovertext ) {
    _pie.insert({"hovertext", hovertext});
    return *this;
}


/**
Sets the source reference on plot.ly for  hovertext .
*/Pie & Hovertextsrc(const std::string &hovertextsrc ) {
    _pie.insert({"hovertextsrc", hovertextsrc});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Pie & Ids(const std::vector<double> &ids ) {
    _pie.insert({"ids", ids});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Pie & Ids(const std::vector<std::string> &ids ) {
    _pie.insert({"ids", ids});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Pie & Ids(const json11::Json &ids ) {
    _pie.insert({"ids", ids});
    return *this;
}


/**
Sets the source reference on plot.ly for  ids .
*/Pie & Idssrc(const std::string &idssrc ) {
    _pie.insert({"idssrc", idssrc});
    return *this;
}


Pie & Insidetextfont(const CppPlotly::Trace::pie::Insidetextfont &insidetextfont ) {
    _pie.insert({"insidetextfont", insidetextfont});
    return *this;
}


/**
Alternate to `labels`. Builds a numeric set of labels. Use with `dlabel` where `label0` is the starting label and `dlabel` the step.
*/Pie & Label0(const double &label0 ) {
    _pie.insert({"label0", label0});
    return *this;
}


/**
Sets the sector labels. If `labels` entries are duplicated, we sum associated `values` or simply count occurrences if `values` is not provided. For other array attributes (including color) we use the first non-empty entry among all occurrences of the label.
*/Pie & Labels(const std::vector<double> &labels ) {
    _pie.insert({"labels", labels});
    return *this;
}


/**
Sets the sector labels. If `labels` entries are duplicated, we sum associated `values` or simply count occurrences if `values` is not provided. For other array attributes (including color) we use the first non-empty entry among all occurrences of the label.
*/Pie & Labels(const std::vector<std::string> &labels ) {
    _pie.insert({"labels", labels});
    return *this;
}


/**
Sets the sector labels. If `labels` entries are duplicated, we sum associated `values` or simply count occurrences if `values` is not provided. For other array attributes (including color) we use the first non-empty entry among all occurrences of the label.
*/Pie & Labels(const json11::Json &labels ) {
    _pie.insert({"labels", labels});
    return *this;
}


/**
Sets the source reference on plot.ly for  labels .
*/Pie & Labelssrc(const std::string &labelssrc ) {
    _pie.insert({"labelssrc", labelssrc});
    return *this;
}


/**
Sets the legend group for this trace. Traces part of the same legend group hide/show at the same time when toggling legend items.
*/Pie & Legendgroup(const std::string &legendgroup ) {
    _pie.insert({"legendgroup", legendgroup});
    return *this;
}


Pie & Marker(const CppPlotly::Trace::pie::Marker &marker ) {
    _pie.insert({"marker", marker});
    return *this;
}


/**
Sets the trace name. The trace name appear as the legend item and on hover.
*/Pie & Name(const std::string &name ) {
    _pie.insert({"name", name});
    return *this;
}


/**
Sets the opacity of the trace.
*/Pie & Opacity(const double &opacity ) {
    _pie.insert({"opacity", opacity});
    return *this;
}


Pie & Outsidetextfont(const CppPlotly::Trace::pie::Outsidetextfont &outsidetextfont ) {
    _pie.insert({"outsidetextfont", outsidetextfont});
    return *this;
}


/**
Sets the fraction of larger radius to pull the sectors out from the center. This can be a constant to pull all slices apart from each other equally or an array to highlight one or more slices.
*/Pie & Pull(const json11::Json &pull ) {
    _pie.insert({"pull", pull});
    return *this;
}


/**
Sets the source reference on plot.ly for  pull .
*/Pie & Pullsrc(const std::string &pullsrc ) {
    _pie.insert({"pullsrc", pullsrc});
    return *this;
}


/**
Instead of the first slice starting at 12 o'clock, rotate to some other angle.
*/Pie & Rotation(const double &rotation ) {
    _pie.insert({"rotation", rotation});
    return *this;
}


/**
If there are multiple pies that should be sized according to their totals, link them by providing a non-empty group id here shared by every trace in the same group.
*/Pie & Scalegroup(const std::string &scalegroup ) {
    _pie.insert({"scalegroup", scalegroup});
    return *this;
}


/**
Array containing integer indices of selected points. Has an effect only for traces that support selections. Note that an empty array means an empty selection where the `unselected` are turned on for all points, whereas, any other non-array values means no selection all where the `selected` and `unselected` styles have no effect.
*/Pie & Selectedpoints(const json11::Json &selectedpoints ) {
    _pie.insert({"selectedpoints", selectedpoints});
    return *this;
}


/**
Determines whether or not an item corresponding to this trace is shown in the legend.
*/Pie & Showlegend(const bool &showlegend ) {
    _pie.insert({"showlegend", showlegend});
    return *this;
}


/**
Determines whether or not the sectors are reordered from largest to smallest.
*/Pie & Sort(const bool &sort ) {
    _pie.insert({"sort", sort});
    return *this;
}


Pie & Stream(const CppPlotly::Trace::pie::Stream &stream ) {
    _pie.insert({"stream", stream});
    return *this;
}


/**
Sets text elements associated with each sector. If trace `textinfo` contains a *text* flag, these elements will be seen on the chart. If trace `hoverinfo` contains a *text* flag and *hovertext* is not set, these elements will be seen in the hover labels.
*/Pie & Text(const std::vector<double> &text ) {
    _pie.insert({"text", text});
    return *this;
}


/**
Sets text elements associated with each sector. If trace `textinfo` contains a *text* flag, these elements will be seen on the chart. If trace `hoverinfo` contains a *text* flag and *hovertext* is not set, these elements will be seen in the hover labels.
*/Pie & Text(const std::vector<std::string> &text ) {
    _pie.insert({"text", text});
    return *this;
}


/**
Sets text elements associated with each sector. If trace `textinfo` contains a *text* flag, these elements will be seen on the chart. If trace `hoverinfo` contains a *text* flag and *hovertext* is not set, these elements will be seen in the hover labels.
*/Pie & Text(const json11::Json &text ) {
    _pie.insert({"text", text});
    return *this;
}


Pie & Textfont(const CppPlotly::Trace::pie::Textfont &textfont ) {
    _pie.insert({"textfont", textfont});
    return *this;
}


/**
Determines which trace information appear on the graph.
*/Pie & Textinfo(const json11::Json &textinfo ) {
    _pie.insert({"textinfo", textinfo});
    return *this;
}


/**
Specifies the location of the `textinfo`.
*/Pie & Textposition(const json11::Json &textposition ) {
    _pie.insert({"textposition", textposition});
    return *this;
}


/**
Sets the source reference on plot.ly for  textposition .
*/Pie & Textpositionsrc(const std::string &textpositionsrc ) {
    _pie.insert({"textpositionsrc", textpositionsrc});
    return *this;
}


/**
Sets the source reference on plot.ly for  text .
*/Pie & Textsrc(const std::string &textsrc ) {
    _pie.insert({"textsrc", textsrc});
    return *this;
}


Pie & Title(const CppPlotly::Trace::pie::Title &title ) {
    _pie.insert({"title", title});
    return *this;
}


Pie & Transforms(const std::vector<CppPlotly::Trace::pie::Transform> &transforms ) {
    _pie.insert({"transforms", transforms});
    return *this;
}


/**
Assign an id to this trace, Use this to provide object constancy between traces during animations and transitions.
*/Pie & Uid(const std::string &uid ) {
    _pie.insert({"uid", uid});
    return *this;
}


/**
Controls persistence of some user-driven changes to the trace: `constraintrange` in `parcoords` traces, as well as some `editable: true` modifications such as `name` and `colorbar.title`. Defaults to `layout.uirevision`. Note that other user-driven trace attribute changes are controlled by `layout` attributes: `trace.visible` is controlled by `layout.legend.uirevision`, `selectedpoints` is controlled by `layout.selectionrevision`, and `colorbar.(x|y)` (accessible with `config: {editable: true}`) is controlled by `layout.editrevision`. Trace changes are tracked by `uid`, which only falls back on trace index if no `uid` is provided. So if your app can add/remove traces before the end of the `data` array, such that the same trace has a different index, you can still preserve user-driven changes if you give each trace a `uid` that stays with it as it moves.
*/Pie & Uirevision(const json11::Json &uirevision ) {
    _pie.insert({"uirevision", uirevision});
    return *this;
}


/**
Sets the values of the sectors of this pie chart. If omitted, we count occurrences of each label.
*/Pie & Values(const std::vector<double> &values ) {
    _pie.insert({"values", values});
    return *this;
}


/**
Sets the values of the sectors of this pie chart. If omitted, we count occurrences of each label.
*/Pie & Values(const std::vector<std::string> &values ) {
    _pie.insert({"values", values});
    return *this;
}


/**
Sets the values of the sectors of this pie chart. If omitted, we count occurrences of each label.
*/Pie & Values(const json11::Json &values ) {
    _pie.insert({"values", values});
    return *this;
}


/**
Sets the source reference on plot.ly for  values .
*/Pie & Valuessrc(const std::string &valuessrc ) {
    _pie.insert({"valuessrc", valuessrc});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Pie & Visible(const json11::Json &visible ) {
    _pie.insert({"visible", visible});
    return *this;
}


 

            virtual json11::Json to_json() const {
                return _pie;
            }

        private:
            
            json11::Json::object _pie;

        };
    }
}


