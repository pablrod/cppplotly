/**
 * @file Line.h
This attribute is part of the possible options for the trace scatterternary.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scatterternary>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>




namespace CppPlotly {
    namespace Trace {
    namespace scatterternary {
namespace marker {

    /**
     * 
     *
     *
     */
    class Line {
    public:

    /**
Determines whether the colorscale is a default palette (`autocolorscale: true`) or the palette determined by `marker.line.colorscale`. Has an effect only if in `marker.line.color`is set to a numerical array. In case `colorscale` is unspecified or `autocolorscale` is true, the default  palette will be chosen according to whether numbers in the `color` array are all positive, all negative or mixed.
*/Line & Autocolorscale(const bool &autocolorscale ) {
    _line.insert({"autocolorscale", autocolorscale});
    return *this;
}


/**
Determines whether or not the color domain is computed with respect to the input data (here in `marker.line.color`) or the bounds set in `marker.line.cmin` and `marker.line.cmax`  Has an effect only if in `marker.line.color`is set to a numerical array. Defaults to `false` when `marker.line.cmin` and `marker.line.cmax` are set by the user.
*/Line & Cauto(const bool &cauto ) {
    _line.insert({"cauto", cauto});
    return *this;
}


/**
Sets the upper bound of the color domain. Has an effect only if in `marker.line.color`is set to a numerical array. Value should have the same units as in `marker.line.color` and if set, `marker.line.cmin` must be set as well.
*/Line & Cmax(const double &cmax ) {
    _line.insert({"cmax", cmax});
    return *this;
}


/**
Sets the mid-point of the color domain by scaling `marker.line.cmin` and/or `marker.line.cmax` to be equidistant to this point. Has an effect only if in `marker.line.color`is set to a numerical array. Value should have the same units as in `marker.line.color`. Has no effect when `marker.line.cauto` is `false`.
*/Line & Cmid(const double &cmid ) {
    _line.insert({"cmid", cmid});
    return *this;
}


/**
Sets the lower bound of the color domain. Has an effect only if in `marker.line.color`is set to a numerical array. Value should have the same units as in `marker.line.color` and if set, `marker.line.cmax` must be set as well.
*/Line & Cmin(const double &cmin ) {
    _line.insert({"cmin", cmin});
    return *this;
}


/**
Sets themarker.linecolor. It accepts either a specific color or an array of numbers that are mapped to the colorscale relative to the max and min values of the array or relative to `marker.line.cmin` and `marker.line.cmax` if set.
*/Line & Color(const json11::Json &color ) {
    _line.insert({"color", color});
    return *this;
}


/**
Sets the colorscale. Has an effect only if in `marker.line.color`is set to a numerical array. The colorscale must be an array containing arrays mapping a normalized value to an rgb, rgba, hex, hsl, hsv, or named color string. At minimum, a mapping for the lowest (0) and highest (1) values are required. For example, `[[0, 'rgb(0,0,255)', [1, 'rgb(255,0,0)']]`. To control the bounds of the colorscale in color space, use`marker.line.cmin` and `marker.line.cmax`. Alternatively, `colorscale` may be a palette name string of the following list: Greys,YlGnBu,Greens,YlOrRd,Bluered,RdBu,Reds,Blues,Picnic,Rainbow,Portland,Jet,Hot,Blackbody,Earth,Electric,Viridis,Cividis.
*/Line & Colorscale(const json11::Json &colorscale ) {
    _line.insert({"colorscale", colorscale});
    return *this;
}


/**
Sets the source reference on plot.ly for  color .
*/Line & Colorsrc(const std::string &colorsrc ) {
    _line.insert({"colorsrc", colorsrc});
    return *this;
}


/**
Reverses the color mapping if true. Has an effect only if in `marker.line.color`is set to a numerical array. If true, `marker.line.cmin` will correspond to the last color in the array and `marker.line.cmax` will correspond to the first color.
*/Line & Reversescale(const bool &reversescale ) {
    _line.insert({"reversescale", reversescale});
    return *this;
}


/**
Sets the width (in px) of the lines bounding the marker points.
*/Line & Width(const json11::Json &width ) {
    _line.insert({"width", width});
    return *this;
}


/**
Sets the source reference on plot.ly for  width .
*/Line & Widthsrc(const std::string &widthsrc ) {
    _line.insert({"widthsrc", widthsrc});
    return *this;
}




    json11::Json to_json() const {
        return _line;
    }

    private:

    json11::Json::object _line;

    };

    }
}

    }
}
