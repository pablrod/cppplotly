/**
 * @file Histogram2d.h
This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#histogram2d>

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.
 *
 */
#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "../BaseTrace.h"

#include "CppPlotly/Trace/Histogram2d/Colorbar.h"
#include "CppPlotly/Trace/Histogram2d/Hoverlabel.h"
#include "CppPlotly/Trace/Histogram2d/Marker.h"
#include "CppPlotly/Trace/Histogram2d/Stream.h"
#include "CppPlotly/Trace/Histogram2d/Transform.h"
#include "CppPlotly/Trace/Histogram2d/Xbins.h"
#include "CppPlotly/Trace/Histogram2d/Ybins.h"


namespace CppPlotly {
    namespace Trace {
        /**
         * The sample data from which statistics are computed is set in `x` and `y` (where `x` and `y` represent marginal distributions, binning is set in `xbins` and `ybins` in this case) or `z` (where `z` represent the 2D distribution and binning set, binning is set by `x` and `y` in this case). The resulting distribution is visualized as a heatmap.
         *
         *
         */ 
        class Histogram2d : public virtual CppPlotly::BaseTrace {
        public:
            Histogram2d() :
                            _histogram2d({
                                {"type", "histogram2d"},
                                    })
                        {}

           /**
Determines whether or not the x axis bin attributes are picked by an algorithm. Note that this should be set to false if you want to manually set the number of bins using the attributes in xbins.
*/Histogram2d & Autobinx(const bool &autobinx ) {
    _histogram2d.insert({"autobinx", autobinx});
    return *this;
}


/**
Determines whether or not the y axis bin attributes are picked by an algorithm. Note that this should be set to false if you want to manually set the number of bins using the attributes in ybins.
*/Histogram2d & Autobiny(const bool &autobiny ) {
    _histogram2d.insert({"autobiny", autobiny});
    return *this;
}


/**
Determines whether or not the colorscale is picked using the sign of the input z values.
*/Histogram2d & Autocolorscale(const bool &autocolorscale ) {
    _histogram2d.insert({"autocolorscale", autocolorscale});
    return *this;
}


Histogram2d & Colorbar(const CppPlotly::Trace::histogram2d::Colorbar &colorbar ) {
    _histogram2d.insert({"colorbar", colorbar});
    return *this;
}


/**
Sets the colorscale. The colorscale must be an array containing arrays mapping a normalized value to an rgb, rgba, hex, hsl, hsv, or named color string. At minimum, a mapping for the lowest (0) and highest (1) values are required. For example, `[[0, 'rgb(0,0,255)', [1, 'rgb(255,0,0)']]`. To control the bounds of the colorscale in z space, use zmin and zmax
*/Histogram2d & Colorscale(const json11::Json::object &colorscale ) {
    _histogram2d.insert({"colorscale", colorscale});
    return *this;
}


/**
Assigns extra data each datum. This may be useful when listening to hover, click and selection events. Note that, *scatter* traces also appends customdata items in the markers DOM elements
*/Histogram2d & Customdata(const std::vector<double> &customdata ) {
    _histogram2d.insert({"customdata", customdata});
    return *this;
}


/**
Sets the source reference on plot.ly for  customdata .
*/Histogram2d & Customdatasrc(const std::string &customdatasrc ) {
    _histogram2d.insert({"customdatasrc", customdatasrc});
    return *this;
}


/**
Specifies the binning function used for this histogram trace. If *count*, the histogram values are computed by counting the number of values lying inside each bin. If *sum*, *avg*, *min*, *max*, the histogram values are computed using the sum, the average, the minimum or the maximum of the values lying inside each bin respectively.
*/Histogram2d & Histfunc(const json11::Json::object &histfunc ) {
    _histogram2d.insert({"histfunc", histfunc});
    return *this;
}


/**
Specifies the type of normalization used for this histogram trace. If **, the span of each bar corresponds to the number of occurrences (i.e. the number of data points lying inside the bins). If *percent* / *probability*, the span of each bar corresponds to the percentage / fraction of occurrences with respect to the total number of sample points (here, the sum of all bin HEIGHTS equals 100% / 1). If *density*, the span of each bar corresponds to the number of occurrences in a bin divided by the size of the bin interval (here, the sum of all bin AREAS equals the total number of sample points). If *probability density*, the area of each bar corresponds to the probability that an event will fall into the corresponding bin (here, the sum of all bin AREAS equals 1).
*/Histogram2d & Histnorm(const json11::Json::object &histnorm ) {
    _histogram2d.insert({"histnorm", histnorm});
    return *this;
}


/**
Determines which trace information appear on hover. If `none` or `skip` are set, no information is displayed upon hovering. But, if `none` is set, click and hover events are still fired.
*/Histogram2d & Hoverinfo(const json11::Json::object &hoverinfo ) {
    _histogram2d.insert({"hoverinfo", hoverinfo});
    return *this;
}


/**
Sets the source reference on plot.ly for  hoverinfo .
*/Histogram2d & Hoverinfosrc(const std::string &hoverinfosrc ) {
    _histogram2d.insert({"hoverinfosrc", hoverinfosrc});
    return *this;
}


Histogram2d & Hoverlabel(const CppPlotly::Trace::histogram2d::Hoverlabel &hoverlabel ) {
    _histogram2d.insert({"hoverlabel", hoverlabel});
    return *this;
}


/**
Assigns id labels to each datum. These ids for object constancy of data points during animation. Should be an array of strings, not numbers or any other type.
*/Histogram2d & Ids(const std::vector<double> &ids ) {
    _histogram2d.insert({"ids", ids});
    return *this;
}


/**
Sets the source reference on plot.ly for  ids .
*/Histogram2d & Idssrc(const std::string &idssrc ) {
    _histogram2d.insert({"idssrc", idssrc});
    return *this;
}


/**
Sets the legend group for this trace. Traces part of the same legend group hide/show at the same time when toggling legend items.
*/Histogram2d & Legendgroup(const std::string &legendgroup ) {
    _histogram2d.insert({"legendgroup", legendgroup});
    return *this;
}


Histogram2d & Marker(const CppPlotly::Trace::histogram2d::Marker &marker ) {
    _histogram2d.insert({"marker", marker});
    return *this;
}


/**
Sets the trace name. The trace name appear as the legend item and on hover.
*/Histogram2d & Name(const std::string &name ) {
    _histogram2d.insert({"name", name});
    return *this;
}


/**
Specifies the maximum number of desired bins. This value will be used in an algorithm that will decide the optimal bin size such that the histogram best visualizes the distribution of the data.
*/Histogram2d & Nbinsx(const int &nbinsx ) {
    _histogram2d.insert({"nbinsx", nbinsx});
    return *this;
}


/**
Specifies the maximum number of desired bins. This value will be used in an algorithm that will decide the optimal bin size such that the histogram best visualizes the distribution of the data.
*/Histogram2d & Nbinsy(const int &nbinsy ) {
    _histogram2d.insert({"nbinsy", nbinsy});
    return *this;
}


/**
Sets the opacity of the trace.
*/Histogram2d & Opacity(const double &opacity ) {
    _histogram2d.insert({"opacity", opacity});
    return *this;
}


/**
Reverses the colorscale.
*/Histogram2d & Reversescale(const bool &reversescale ) {
    _histogram2d.insert({"reversescale", reversescale});
    return *this;
}


/**
Array containing integer indices of selected points. Has an effect only for traces that support selections. Note that an empty array means an empty selection where the `unselected` are turned on for all points, whereas, any other non-array values means no selection all where the `selected` and `unselected` styles have no effect.
*/Histogram2d & Selectedpoints(const json11::Json::object &selectedpoints ) {
    _histogram2d.insert({"selectedpoints", selectedpoints});
    return *this;
}


/**
Determines whether or not an item corresponding to this trace is shown in the legend.
*/Histogram2d & Showlegend(const bool &showlegend ) {
    _histogram2d.insert({"showlegend", showlegend});
    return *this;
}


/**
Determines whether or not a colorbar is displayed for this trace.
*/Histogram2d & Showscale(const bool &showscale ) {
    _histogram2d.insert({"showscale", showscale});
    return *this;
}


Histogram2d & Stream(const CppPlotly::Trace::histogram2d::Stream &stream ) {
    _histogram2d.insert({"stream", stream});
    return *this;
}


Histogram2d & Transforms(const std::vector<CppPlotly::Trace::histogram2d::Transform> &transforms ) {
    _histogram2d.insert({"transforms", transforms});
    return *this;
}


Histogram2d & Uid(const std::string &uid ) {
    _histogram2d.insert({"uid", uid});
    return *this;
}


/**
Determines whether or not this trace is visible. If *legendonly*, the trace is not drawn, but can appear as a legend item (provided that the legend itself is visible).
*/Histogram2d & Visible(const json11::Json::object &visible ) {
    _histogram2d.insert({"visible", visible});
    return *this;
}


/**
Sets the sample data to be binned on the x axis.
*/Histogram2d & X(const std::vector<double> &x ) {
    _histogram2d.insert({"x", x});
    return *this;
}


/**
Sets a reference between this trace's x coordinates and a 2D cartesian x axis. If *x* (the default value), the x coordinates refer to `layout.xaxis`. If *x2*, the x coordinates refer to `layout.xaxis2`, and so on.
*/Histogram2d & Xaxis(const json11::Json::object &xaxis ) {
    _histogram2d.insert({"xaxis", xaxis});
    return *this;
}


Histogram2d & Xbins(const CppPlotly::Trace::histogram2d::Xbins &xbins ) {
    _histogram2d.insert({"xbins", xbins});
    return *this;
}


/**
Sets the calendar system to use with `x` date data.
*/Histogram2d & Xcalendar(const json11::Json::object &xcalendar ) {
    _histogram2d.insert({"xcalendar", xcalendar});
    return *this;
}


/**
Sets the horizontal gap (in pixels) between bricks.
*/Histogram2d & Xgap(const double &xgap ) {
    _histogram2d.insert({"xgap", xgap});
    return *this;
}


/**
Sets the source reference on plot.ly for  x .
*/Histogram2d & Xsrc(const std::string &xsrc ) {
    _histogram2d.insert({"xsrc", xsrc});
    return *this;
}


/**
Sets the sample data to be binned on the y axis.
*/Histogram2d & Y(const std::vector<double> &y ) {
    _histogram2d.insert({"y", y});
    return *this;
}


/**
Sets a reference between this trace's y coordinates and a 2D cartesian y axis. If *y* (the default value), the y coordinates refer to `layout.yaxis`. If *y2*, the y coordinates refer to `layout.yaxis2`, and so on.
*/Histogram2d & Yaxis(const json11::Json::object &yaxis ) {
    _histogram2d.insert({"yaxis", yaxis});
    return *this;
}


Histogram2d & Ybins(const CppPlotly::Trace::histogram2d::Ybins &ybins ) {
    _histogram2d.insert({"ybins", ybins});
    return *this;
}


/**
Sets the calendar system to use with `y` date data.
*/Histogram2d & Ycalendar(const json11::Json::object &ycalendar ) {
    _histogram2d.insert({"ycalendar", ycalendar});
    return *this;
}


/**
Sets the vertical gap (in pixels) between bricks.
*/Histogram2d & Ygap(const double &ygap ) {
    _histogram2d.insert({"ygap", ygap});
    return *this;
}


/**
Sets the source reference on plot.ly for  y .
*/Histogram2d & Ysrc(const std::string &ysrc ) {
    _histogram2d.insert({"ysrc", ysrc});
    return *this;
}


/**
Sets the aggregation data.
*/Histogram2d & Z(const std::vector<double> &z ) {
    _histogram2d.insert({"z", z});
    return *this;
}


/**
Determines the whether or not the color domain is computed with respect to the input data.
*/Histogram2d & Zauto(const bool &zauto ) {
    _histogram2d.insert({"zauto", zauto});
    return *this;
}


/**
Sets the hover text formatting rule using d3 formatting mini-languages which are very similar to those in Python. See: https://github.com/d3/d3-format/blob/master/README.md#locale_format
*/Histogram2d & Zhoverformat(const std::string &zhoverformat ) {
    _histogram2d.insert({"zhoverformat", zhoverformat});
    return *this;
}


/**
Sets the upper bound of color domain.
*/Histogram2d & Zmax(const double &zmax ) {
    _histogram2d.insert({"zmax", zmax});
    return *this;
}


/**
Sets the lower bound of color domain.
*/Histogram2d & Zmin(const double &zmin ) {
    _histogram2d.insert({"zmin", zmin});
    return *this;
}


/**
Picks a smoothing algorithm use to smooth `z` data.
*/Histogram2d & Zsmooth(const json11::Json::object &zsmooth ) {
    _histogram2d.insert({"zsmooth", zsmooth});
    return *this;
}


/**
Sets the source reference on plot.ly for  z .
*/Histogram2d & Zsrc(const std::string &zsrc ) {
    _histogram2d.insert({"zsrc", zsrc});
    return *this;
}


 

            json11::Json to_json() const {
                return _histogram2d;
            }

        private:
            
            json11::Json::object _histogram2d;

        };
    }
}


