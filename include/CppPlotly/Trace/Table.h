/**
 * @file Table.h
This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#table>

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.
 *
 */
#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "../BaseTrace.h"

#include "CppPlotly/Trace/Table/Cells.h"
#include "CppPlotly/Trace/Table/Domain.h"
#include "CppPlotly/Trace/Table/Header.h"
#include "CppPlotly/Trace/Table/Hoverlabel.h"
#include "CppPlotly/Trace/Table/Stream.h"


namespace CppPlotly {
    namespace Trace {
        /**
         * Table view for detailed data viewing. The data are arranged in a grid of rows and columns. Most styling can be specified for columns, rows or individual cells. Table is using a column-major order, ie. the grid is represented as a vector of column vectors.
         *
         *
         */ 
        class Table : public virtual CppPlotly::BaseTrace {
        public:
            Table() :
                            _table({
                                {"type", "table"},
                                    })
                        {}

           Table & Cells(const CppPlotly::Trace::table::Cells &cells ) {
    _table.insert({"cells", cells});
    return *this;
}


/**
Specifies the rendered order of the data columns; for example, a value `2` at position `0` means that column index `0` in the data will be rendered as the third column, as columns have an index base of zero.
*/Table & Columnorder(const std::vector<double> &columnorder ) {
    _table.insert({"columnorder", columnorder});
    return *this;
}


/**
Specifies the rendered order of the data columns; for example, a value `2` at position `0` means that column index `0` in the data will be rendered as the third column, as columns have an index base of zero.
*/Table & Columnorder(const std::vector<std::string> &columnorder ) {
    _table.insert({"columnorder", columnorder});
    return *this;
}


/**
Specifies the rendered order of the data columns; for example, a value `2` at position `0` means that column index `0` in the data will be rendered as the third column, as columns have an index base of zero.
*/Table & Columnorder(const json11::Json &columnorder ) {
    _table.insert({"columnorder", columnorder});
    return *this;
}


/**
Sets the source reference on plot.ly for  columnorder .
*/Table & Columnordersrc(const std::string &columnordersrc ) {
    _table.insert({"columnordersrc", columnordersrc});
    return *this;
}


/**
The width of columns expressed as a ratio. Columns fill the available width in proportion of their specified column widths.
*/Table & Columnwidth(const json11::Json &columnwidth ) {
    _table.insert({"columnwidth", columnwidth});
    return *this;
}


/**
Sets the source reference on plot.ly for  columnwidth .
*/Table & Columnwidthsrc(const std::string &columnwidthsrc ) {
    _table.insert({"columnwidthsrc", columnwidthsrc});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Table & Customdata(const std::vector<double> &customdata ) {
    _table.insert({"customdata", customdata});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Table & Customdata(const std::vector<std::string> &customdata ) {
    _table.insert({"customdata", customdata});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Table & Customdata(const json11::Json &customdata ) {
    _table.insert({"customdata", customdata});
    return *this;
}


/**
Sets the source reference on plot.ly for  customdata .
*/Table & Customdatasrc(const std::string &customdatasrc ) {
    _table.insert({"customdatasrc", customdatasrc});
    return *this;
}


Table & Domain(const CppPlotly::Trace::table::Domain &domain ) {
    _table.insert({"domain", domain});
    return *this;
}


Table & Header(const CppPlotly::Trace::table::Header &header ) {
    _table.insert({"header", header});
    return *this;
}


/**
Determines which trace information appear on hover. If `none` or `skip` are set, no information is displayed upon hovering. But, if `none` is set, click and hover events are still fired.
*/Table & Hoverinfo(const json11::Json &hoverinfo ) {
    _table.insert({"hoverinfo", hoverinfo});
    return *this;
}


/**
Sets the source reference on plot.ly for  hoverinfo .
*/Table & Hoverinfosrc(const std::string &hoverinfosrc ) {
    _table.insert({"hoverinfosrc", hoverinfosrc});
    return *this;
}


Table & Hoverlabel(const CppPlotly::Trace::table::Hoverlabel &hoverlabel ) {
    _table.insert({"hoverlabel", hoverlabel});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Table & Ids(const std::vector<double> &ids ) {
    _table.insert({"ids", ids});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Table & Ids(const std::vector<std::string> &ids ) {
    _table.insert({"ids", ids});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Table & Ids(const json11::Json &ids ) {
    _table.insert({"ids", ids});
    return *this;
}


/**
Sets the source reference on plot.ly for  ids .
*/Table & Idssrc(const std::string &idssrc ) {
    _table.insert({"idssrc", idssrc});
    return *this;
}


/**
Sets the legend group for this trace. Traces part of the same legend group hide/show at the same time when toggling legend items.
*/Table & Legendgroup(const std::string &legendgroup ) {
    _table.insert({"legendgroup", legendgroup});
    return *this;
}


/**
Sets the trace name. The trace name appear as the legend item and on hover.
*/Table & Name(const std::string &name ) {
    _table.insert({"name", name});
    return *this;
}


/**
Sets the opacity of the trace.
*/Table & Opacity(const double &opacity ) {
    _table.insert({"opacity", opacity});
    return *this;
}


/**
Array containing integer indices of selected points. Has an effect only for traces that support selections. Note that an empty array means an empty selection where the `unselected` are turned on for all points, whereas, any other non-array values means no selection all where the `selected` and `unselected` styles have no effect.
*/Table & Selectedpoints(const json11::Json &selectedpoints ) {
    _table.insert({"selectedpoints", selectedpoints});
    return *this;
}


/**
Determines whether or not an item corresponding to this trace is shown in the legend.
*/Table & Showlegend(const bool &showlegend ) {
    _table.insert({"showlegend", showlegend});
    return *this;
}


Table & Stream(const CppPlotly::Trace::table::Stream &stream ) {
    _table.insert({"stream", stream});
    return *this;
}


/**
Assign an id to this trace, Use this to provide object constancy between traces during animations and transitions.
*/Table & Uid(const std::string &uid ) {
    _table.insert({"uid", uid});
    return *this;
}


/**
Controls persistence of some user-driven changes to the trace: `constraintrange` in `parcoords` traces, as well as some `editable: true` modifications such as `name` and `colorbar.title`. Defaults to `layout.uirevision`. Note that other user-driven trace attribute changes are controlled by `layout` attributes: `trace.visible` is controlled by `layout.legend.uirevision`, `selectedpoints` is controlled by `layout.selectionrevision`, and `colorbar.(x|y)` (accessible with `config: {editable: true}`) is controlled by `layout.editrevision`. Trace changes are tracked by `uid`, which only falls back on trace index if no `uid` is provided. So if your app can add/remove traces before the end of the `data` array, such that the same trace has a different index, you can still preserve user-driven changes if you give each trace a `uid` that stays with it as it moves.
*/Table & Uirevision(const json11::Json &uirevision ) {
    _table.insert({"uirevision", uirevision});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Table & Visible(const json11::Json &visible ) {
    _table.insert({"visible", visible});
    return *this;
}


 

            virtual json11::Json to_json() const {
                return _table;
            }

        private:
            
            json11::Json::object _table;

        };
    }
}


