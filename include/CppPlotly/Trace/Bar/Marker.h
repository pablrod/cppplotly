/**
 * @file Marker.h
This attribute is part of the possible options for the trace bar.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#bar>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Bar/Marker/Colorbar.h"
#include "CppPlotly/Trace/Bar/Marker/Line.h"



namespace CppPlotly {
    namespace Trace {
    namespace bar {

    /**
     * 
     *
     *
     */
    class Marker {
    public:

    /**
Determines whether the colorscale is a default palette (`autocolorscale: true`) or the palette determined by `marker.colorscale`. Has an effect only if in `marker.color`is set to a numerical array. In case `colorscale` is unspecified or `autocolorscale` is true, the default  palette will be chosen according to whether numbers in the `color` array are all positive, all negative or mixed.
*/Marker & Autocolorscale(const bool &autocolorscale ) {
    _marker.insert({"autocolorscale", autocolorscale});
    return *this;
}


/**
Determines whether or not the color domain is computed with respect to the input data (here in `marker.color`) or the bounds set in `marker.cmin` and `marker.cmax`  Has an effect only if in `marker.color`is set to a numerical array. Defaults to `false` when `marker.cmin` and `marker.cmax` are set by the user.
*/Marker & Cauto(const bool &cauto ) {
    _marker.insert({"cauto", cauto});
    return *this;
}


/**
Sets the upper bound of the color domain. Has an effect only if in `marker.color`is set to a numerical array. Value should have the same units as in `marker.color` and if set, `marker.cmin` must be set as well.
*/Marker & Cmax(const double &cmax ) {
    _marker.insert({"cmax", cmax});
    return *this;
}


/**
Sets the mid-point of the color domain by scaling `marker.cmin` and/or `marker.cmax` to be equidistant to this point. Has an effect only if in `marker.color`is set to a numerical array. Value should have the same units as in `marker.color`. Has no effect when `marker.cauto` is `false`.
*/Marker & Cmid(const double &cmid ) {
    _marker.insert({"cmid", cmid});
    return *this;
}


/**
Sets the lower bound of the color domain. Has an effect only if in `marker.color`is set to a numerical array. Value should have the same units as in `marker.color` and if set, `marker.cmax` must be set as well.
*/Marker & Cmin(const double &cmin ) {
    _marker.insert({"cmin", cmin});
    return *this;
}


/**
Sets themarkercolor. It accepts either a specific color or an array of numbers that are mapped to the colorscale relative to the max and min values of the array or relative to `marker.cmin` and `marker.cmax` if set.
*/Marker & Color(const json11::Json &color ) {
    _marker.insert({"color", color});
    return *this;
}


Marker & Colorbar(const CppPlotly::Trace::bar::marker::Colorbar &colorbar ) {
    _marker.insert({"colorbar", colorbar});
    return *this;
}


/**
Sets the colorscale. Has an effect only if in `marker.color`is set to a numerical array. The colorscale must be an array containing arrays mapping a normalized value to an rgb, rgba, hex, hsl, hsv, or named color string. At minimum, a mapping for the lowest (0) and highest (1) values are required. For example, `[[0, 'rgb(0,0,255)', [1, 'rgb(255,0,0)']]`. To control the bounds of the colorscale in color space, use`marker.cmin` and `marker.cmax`. Alternatively, `colorscale` may be a palette name string of the following list: Greys,YlGnBu,Greens,YlOrRd,Bluered,RdBu,Reds,Blues,Picnic,Rainbow,Portland,Jet,Hot,Blackbody,Earth,Electric,Viridis,Cividis.
*/Marker & Colorscale(const json11::Json &colorscale ) {
    _marker.insert({"colorscale", colorscale});
    return *this;
}


/**
Sets the source reference on plot.ly for  color .
*/Marker & Colorsrc(const std::string &colorsrc ) {
    _marker.insert({"colorsrc", colorsrc});
    return *this;
}


Marker & Line(const CppPlotly::Trace::bar::marker::Line &line ) {
    _marker.insert({"line", line});
    return *this;
}


/**
Sets the opacity of the bars.
*/Marker & Opacity(const json11::Json &opacity ) {
    _marker.insert({"opacity", opacity});
    return *this;
}


/**
Sets the source reference on plot.ly for  opacity .
*/Marker & Opacitysrc(const std::string &opacitysrc ) {
    _marker.insert({"opacitysrc", opacitysrc});
    return *this;
}


/**
Reverses the color mapping if true. Has an effect only if in `marker.color`is set to a numerical array. If true, `marker.cmin` will correspond to the last color in the array and `marker.cmax` will correspond to the first color.
*/Marker & Reversescale(const bool &reversescale ) {
    _marker.insert({"reversescale", reversescale});
    return *this;
}


/**
Determines whether or not a colorbar is displayed for this trace. Has an effect only if in `marker.color`is set to a numerical array.
*/Marker & Showscale(const bool &showscale ) {
    _marker.insert({"showscale", showscale});
    return *this;
}




    json11::Json to_json() const {
        return _marker;
    }

    private:

    json11::Json::object _marker;

    };

    }

    }
}
