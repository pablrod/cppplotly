/**
 * @file Marker.h
This attribute is part of the possible options for the trace scattercarpet.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scattercarpet>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Scattercarpet/Marker/Colorbar.h"
#include "CppPlotly/Trace/Scattercarpet/Marker/Gradient.h"
#include "CppPlotly/Trace/Scattercarpet/Marker/Line.h"



namespace CppPlotly {
    namespace Trace {
    namespace scattercarpet {

    /**
     * 
     *
     *
     */
    class Marker {
    public:

    /**
Has an effect only if `marker.color` is set to a numerical array. Determines whether the colorscale is a default palette (`autocolorscale: true`) or the palette determined by `marker.colorscale`. In case `colorscale` is unspecified or `autocolorscale` is true, the default  palette will be chosen according to whether numbers in the `color` array are all positive, all negative or mixed.
*/Marker & Autocolorscale(const bool &autocolorscale ) {
    _marker.insert({"autocolorscale", autocolorscale});
    return *this;
}


/**
Has an effect only if `marker.color` is set to a numerical array and `cmin`, `cmax` are set by the user. In this case, it controls whether the range of colors in `colorscale` is mapped to the range of values in the `color` array (`cauto: true`), or the `cmin`/`cmax` values (`cauto: false`). Defaults to `false` when `cmin`, `cmax` are set by the user.
*/Marker & Cauto(const bool &cauto ) {
    _marker.insert({"cauto", cauto});
    return *this;
}


/**
Has an effect only if `marker.color` is set to a numerical array. Sets the upper bound of the color domain. Value should be associated to the `marker.color` array index, and if set, `marker.cmin` must be set as well.
*/Marker & Cmax(const double &cmax ) {
    _marker.insert({"cmax", cmax});
    return *this;
}


/**
Has an effect only if `marker.color` is set to a numerical array. Sets the lower bound of the color domain. Value should be associated to the `marker.color` array index, and if set, `marker.cmax` must be set as well.
*/Marker & Cmin(const double &cmin ) {
    _marker.insert({"cmin", cmin});
    return *this;
}


/**
Sets the marker color. It accepts either a specific color or an array of numbers that are mapped to the colorscale relative to the max and min values of the array or relative to `cmin` and `cmax` if set.
*/Marker & Color(const json11::Json::object &color ) {
    _marker.insert({"color", color});
    return *this;
}


Marker & Colorbar(const CppPlotly::Trace::scattercarpet::marker::Colorbar &colorbar ) {
    _marker.insert({"colorbar", colorbar});
    return *this;
}


/**
Sets the colorscale and only has an effect if `marker.color` is set to a numerical array. The colorscale must be an array containing arrays mapping a normalized value to an rgb, rgba, hex, hsl, hsv, or named color string. At minimum, a mapping for the lowest (0) and highest (1) values are required. For example, `[[0, 'rgb(0,0,255)', [1, 'rgb(255,0,0)']]`. To control the bounds of the colorscale in color space, use `marker.cmin` and `marker.cmax`. Alternatively, `colorscale` may be a palette name string of the following list: Greys, YlGnBu, Greens, YlOrRd, Bluered, RdBu, Reds, Blues, Picnic, Rainbow, Portland, Jet, Hot, Blackbody, Earth, Electric, Viridis, Cividis
*/Marker & Colorscale(const json11::Json::object &colorscale ) {
    _marker.insert({"colorscale", colorscale});
    return *this;
}


/**
Sets the source reference on plot.ly for  color .
*/Marker & Colorsrc(const std::string &colorsrc ) {
    _marker.insert({"colorsrc", colorsrc});
    return *this;
}


Marker & Gradient(const CppPlotly::Trace::scattercarpet::marker::Gradient &gradient ) {
    _marker.insert({"gradient", gradient});
    return *this;
}


Marker & Line(const CppPlotly::Trace::scattercarpet::marker::Line &line ) {
    _marker.insert({"line", line});
    return *this;
}


/**
Sets a maximum number of points to be drawn on the graph. *0* corresponds to no limit.
*/Marker & Maxdisplayed(const double &maxdisplayed ) {
    _marker.insert({"maxdisplayed", maxdisplayed});
    return *this;
}


/**
Sets the marker opacity.
*/Marker & Opacity(const json11::Json::object &opacity ) {
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
Has an effect only if `marker.color` is set to a numerical array. Reverses the color mapping if true (`cmin` will correspond to the last color in the array and `cmax` will correspond to the first color).
*/Marker & Reversescale(const bool &reversescale ) {
    _marker.insert({"reversescale", reversescale});
    return *this;
}


/**
Has an effect only if `marker.color` is set to a numerical array. Determines whether or not a colorbar is displayed.
*/Marker & Showscale(const bool &showscale ) {
    _marker.insert({"showscale", showscale});
    return *this;
}


/**
Sets the marker size (in px).
*/Marker & Size(const json11::Json::object &size ) {
    _marker.insert({"size", size});
    return *this;
}


/**
Has an effect only if `marker.size` is set to a numerical array. Sets the minimum size (in px) of the rendered marker points.
*/Marker & Sizemin(const double &sizemin ) {
    _marker.insert({"sizemin", sizemin});
    return *this;
}


/**
Has an effect only if `marker.size` is set to a numerical array. Sets the rule for which the data in `size` is converted to pixels.
*/Marker & Sizemode(const json11::Json::object &sizemode ) {
    _marker.insert({"sizemode", sizemode});
    return *this;
}


/**
Has an effect only if `marker.size` is set to a numerical array. Sets the scale factor used to determine the rendered size of marker points. Use with `sizemin` and `sizemode`.
*/Marker & Sizeref(const double &sizeref ) {
    _marker.insert({"sizeref", sizeref});
    return *this;
}


/**
Sets the source reference on plot.ly for  size .
*/Marker & Sizesrc(const std::string &sizesrc ) {
    _marker.insert({"sizesrc", sizesrc});
    return *this;
}


/**
Sets the marker symbol type. Adding 100 is equivalent to appending *-open* to a symbol name. Adding 200 is equivalent to appending *-dot* to a symbol name. Adding 300 is equivalent to appending *-open-dot* or *dot-open* to a symbol name.
*/Marker & Symbol(const json11::Json::object &symbol ) {
    _marker.insert({"symbol", symbol});
    return *this;
}


/**
Sets the source reference on plot.ly for  symbol .
*/Marker & Symbolsrc(const std::string &symbolsrc ) {
    _marker.insert({"symbolsrc", symbolsrc});
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