/**
 * @file Colorbar.h
This attribute is part of the possible options for the trace contourcarpet.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#contourcarpet>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Contourcarpet/Colorbar/Tickfont.h"
#include "CppPlotly/Trace/Contourcarpet/Colorbar/Tickformatstop.h"
#include "CppPlotly/Trace/Contourcarpet/Colorbar/Titlefont.h"



namespace CppPlotly {
    namespace Trace {
    namespace contourcarpet {

    /**
     * 
     *
     *
     */
    class Colorbar {
    public:

    /**
Sets the color of padded area.
*/Colorbar & Bgcolor(const json11::Json::object &bgcolor ) {
    _colorbar.insert({"bgcolor", bgcolor});
    return *this;
}


/**
Sets the axis line color.
*/Colorbar & Bordercolor(const json11::Json::object &bordercolor ) {
    _colorbar.insert({"bordercolor", bordercolor});
    return *this;
}


/**
Sets the width (in px) or the border enclosing this color bar.
*/Colorbar & Borderwidth(const double &borderwidth ) {
    _colorbar.insert({"borderwidth", borderwidth});
    return *this;
}


/**
Sets the step in-between ticks on this axis. Use with `tick0`. Must be a positive number, or special strings available to *log* and *date* axes. If the axis `type` is *log*, then ticks are set every 10^(n*dtick) where n is the tick number. For example, to set a tick mark at 1, 10, 100, 1000, ... set dtick to 1. To set tick marks at 1, 100, 10000, ... set dtick to 2. To set tick marks at 1, 5, 25, 125, 625, 3125, ... set dtick to log_10(5), or 0.69897000433. *log* has several special values; *L<f>*, where `f` is a positive number, gives ticks linearly spaced in value (but not position). For example `tick0` = 0.1, `dtick` = *L0.5* will put ticks at 0.1, 0.6, 1.1, 1.6 etc. To show powers of 10 plus small digits between, use *D1* (all digits) or *D2* (only 2 and 5). `tick0` is ignored for *D1* and *D2*. If the axis `type` is *date*, then you must convert the time to milliseconds. For example, to set the interval between ticks to one day, set `dtick` to 86400000.0. *date* also has special values *M<n>* gives ticks spaced by a number of months. `n` must be a positive integer. To set ticks on the 15th of every third month, set `tick0` to *2000-01-15* and `dtick` to *M3*. To set ticks every 4 years, set `dtick` to *M48*
*/Colorbar & Dtick(const json11::Json::object &dtick ) {
    _colorbar.insert({"dtick", dtick});
    return *this;
}


/**
Determines a formatting rule for the tick exponents. For example, consider the number 1,000,000,000. If *none*, it appears as 1,000,000,000. If *e*, 1e+9. If *E*, 1E+9. If *power*, 1x10^9 (with 9 in a super script). If *SI*, 1G. If *B*, 1B.
*/Colorbar & Exponentformat(const json11::Json::object &exponentformat ) {
    _colorbar.insert({"exponentformat", exponentformat});
    return *this;
}


/**
Sets the length of the color bar This measure excludes the padding of both ends. That is, the color bar length is this length minus the padding on both ends.
*/Colorbar & Len(const double &len ) {
    _colorbar.insert({"len", len});
    return *this;
}


/**
Determines whether this color bar's length (i.e. the measure in the color variation direction) is set in units of plot *fraction* or in *pixels. Use `len` to set the value.
*/Colorbar & Lenmode(const json11::Json::object &lenmode ) {
    _colorbar.insert({"lenmode", lenmode});
    return *this;
}


/**
Specifies the maximum number of ticks for the particular axis. The actual number of ticks will be chosen automatically to be less than or equal to `nticks`. Has an effect only if `tickmode` is set to *auto*.
*/Colorbar & Nticks(const int &nticks ) {
    _colorbar.insert({"nticks", nticks});
    return *this;
}


/**
Sets the axis line color.
*/Colorbar & Outlinecolor(const json11::Json::object &outlinecolor ) {
    _colorbar.insert({"outlinecolor", outlinecolor});
    return *this;
}


/**
Sets the width (in px) of the axis line.
*/Colorbar & Outlinewidth(const double &outlinewidth ) {
    _colorbar.insert({"outlinewidth", outlinewidth});
    return *this;
}


/**
If "true", even 4-digit integers are separated
*/Colorbar & Separatethousands(const bool &separatethousands ) {
    _colorbar.insert({"separatethousands", separatethousands});
    return *this;
}


/**
If *all*, all exponents are shown besides their significands. If *first*, only the exponent of the first tick is shown. If *last*, only the exponent of the last tick is shown. If *none*, no exponents appear.
*/Colorbar & Showexponent(const json11::Json::object &showexponent ) {
    _colorbar.insert({"showexponent", showexponent});
    return *this;
}


/**
Determines whether or not the tick labels are drawn.
*/Colorbar & Showticklabels(const bool &showticklabels ) {
    _colorbar.insert({"showticklabels", showticklabels});
    return *this;
}


/**
If *all*, all tick labels are displayed with a prefix. If *first*, only the first tick is displayed with a prefix. If *last*, only the last tick is displayed with a suffix. If *none*, tick prefixes are hidden.
*/Colorbar & Showtickprefix(const json11::Json::object &showtickprefix ) {
    _colorbar.insert({"showtickprefix", showtickprefix});
    return *this;
}


/**
Same as `showtickprefix` but for tick suffixes.
*/Colorbar & Showticksuffix(const json11::Json::object &showticksuffix ) {
    _colorbar.insert({"showticksuffix", showticksuffix});
    return *this;
}


/**
Sets the thickness of the color bar This measure excludes the size of the padding, ticks and labels.
*/Colorbar & Thickness(const double &thickness ) {
    _colorbar.insert({"thickness", thickness});
    return *this;
}


/**
Determines whether this color bar's thickness (i.e. the measure in the constant color direction) is set in units of plot *fraction* or in *pixels*. Use `thickness` to set the value.
*/Colorbar & Thicknessmode(const json11::Json::object &thicknessmode ) {
    _colorbar.insert({"thicknessmode", thicknessmode});
    return *this;
}


/**
Sets the placement of the first tick on this axis. Use with `dtick`. If the axis `type` is *log*, then you must take the log of your starting tick (e.g. to set the starting tick to 100, set the `tick0` to 2) except when `dtick`=*L<f>* (see `dtick` for more info). If the axis `type` is *date*, it should be a date string, like date data. If the axis `type` is *category*, it should be a number, using the scale where each category is assigned a serial number from zero in the order it appears.
*/Colorbar & Tick0(const json11::Json::object &tick0 ) {
    _colorbar.insert({"tick0", tick0});
    return *this;
}


/**
Sets the angle of the tick labels with respect to the horizontal. For example, a `tickangle` of -90 draws the tick labels vertically.
*/Colorbar & Tickangle(const json11::Json::object &tickangle ) {
    _colorbar.insert({"tickangle", tickangle});
    return *this;
}


/**
Sets the tick color.
*/Colorbar & Tickcolor(const json11::Json::object &tickcolor ) {
    _colorbar.insert({"tickcolor", tickcolor});
    return *this;
}


Colorbar & Tickfont(const CppPlotly::Trace::contourcarpet::colorbar::Tickfont &tickfont ) {
    _colorbar.insert({"tickfont", tickfont});
    return *this;
}


/**
Sets the tick label formatting rule using d3 formatting mini-languages which are very similar to those in Python. For numbers, see: https://github.com/d3/d3-format/blob/master/README.md#locale_format And for dates see: https://github.com/d3/d3-time-format/blob/master/README.md#locale_format We add one item to d3's date formatter: *%{n}f* for fractional seconds with n digits. For example, *2016-10-13 09:15:23.456* with tickformat *%H~%M~%S.%2f* would display *09~15~23.46*
*/Colorbar & Tickformat(const std::string &tickformat ) {
    _colorbar.insert({"tickformat", tickformat});
    return *this;
}


Colorbar & Tickformatstops(const std::vector<CppPlotly::Trace::contourcarpet::colorbar::Tickformatstop> &tickformatstops ) {
    _colorbar.insert({"tickformatstops", tickformatstops});
    return *this;
}


/**
Sets the tick length (in px).
*/Colorbar & Ticklen(const double &ticklen ) {
    _colorbar.insert({"ticklen", ticklen});
    return *this;
}


/**
Sets the tick mode for this axis. If *auto*, the number of ticks is set via `nticks`. If *linear*, the placement of the ticks is determined by a starting position `tick0` and a tick step `dtick` (*linear* is the default value if `tick0` and `dtick` are provided). If *array*, the placement of the ticks is set via `tickvals` and the tick text is `ticktext`. (*array* is the default value if `tickvals` is provided).
*/Colorbar & Tickmode(const json11::Json::object &tickmode ) {
    _colorbar.insert({"tickmode", tickmode});
    return *this;
}


/**
Sets a tick label prefix.
*/Colorbar & Tickprefix(const std::string &tickprefix ) {
    _colorbar.insert({"tickprefix", tickprefix});
    return *this;
}


/**
Determines whether ticks are drawn or not. If **, this axis' ticks are not drawn. If *outside* (*inside*), this axis' are drawn outside (inside) the axis lines.
*/Colorbar & Ticks(const json11::Json::object &ticks ) {
    _colorbar.insert({"ticks", ticks});
    return *this;
}


/**
Sets a tick label suffix.
*/Colorbar & Ticksuffix(const std::string &ticksuffix ) {
    _colorbar.insert({"ticksuffix", ticksuffix});
    return *this;
}


/**
Sets the text displayed at the ticks position via `tickvals`. Only has an effect if `tickmode` is set to *array*. Used with `tickvals`.
*/Colorbar & Ticktext(const std::vector<double> &ticktext ) {
    _colorbar.insert({"ticktext", ticktext});
    return *this;
}


/**
Sets the source reference on plot.ly for  ticktext .
*/Colorbar & Ticktextsrc(const std::string &ticktextsrc ) {
    _colorbar.insert({"ticktextsrc", ticktextsrc});
    return *this;
}


/**
Sets the values at which ticks on this axis appear. Only has an effect if `tickmode` is set to *array*. Used with `ticktext`.
*/Colorbar & Tickvals(const std::vector<double> &tickvals ) {
    _colorbar.insert({"tickvals", tickvals});
    return *this;
}


/**
Sets the source reference on plot.ly for  tickvals .
*/Colorbar & Tickvalssrc(const std::string &tickvalssrc ) {
    _colorbar.insert({"tickvalssrc", tickvalssrc});
    return *this;
}


/**
Sets the tick width (in px).
*/Colorbar & Tickwidth(const double &tickwidth ) {
    _colorbar.insert({"tickwidth", tickwidth});
    return *this;
}


/**
Sets the title of the color bar.
*/Colorbar & Title(const std::string &title ) {
    _colorbar.insert({"title", title});
    return *this;
}


Colorbar & Titlefont(const CppPlotly::Trace::contourcarpet::colorbar::Titlefont &titlefont ) {
    _colorbar.insert({"titlefont", titlefont});
    return *this;
}


/**
Determines the location of the colorbar title with respect to the color bar.
*/Colorbar & Titleside(const json11::Json::object &titleside ) {
    _colorbar.insert({"titleside", titleside});
    return *this;
}


/**
Sets the x position of the color bar (in plot fraction).
*/Colorbar & X(const double &x ) {
    _colorbar.insert({"x", x});
    return *this;
}


/**
Sets this color bar's horizontal position anchor. This anchor binds the `x` position to the *left*, *center* or *right* of the color bar.
*/Colorbar & Xanchor(const json11::Json::object &xanchor ) {
    _colorbar.insert({"xanchor", xanchor});
    return *this;
}


/**
Sets the amount of padding (in px) along the x direction.
*/Colorbar & Xpad(const double &xpad ) {
    _colorbar.insert({"xpad", xpad});
    return *this;
}


/**
Sets the y position of the color bar (in plot fraction).
*/Colorbar & Y(const double &y ) {
    _colorbar.insert({"y", y});
    return *this;
}


/**
Sets this color bar's vertical position anchor This anchor binds the `y` position to the *top*, *middle* or *bottom* of the color bar.
*/Colorbar & Yanchor(const json11::Json::object &yanchor ) {
    _colorbar.insert({"yanchor", yanchor});
    return *this;
}


/**
Sets the amount of padding (in px) along the y direction.
*/Colorbar & Ypad(const double &ypad ) {
    _colorbar.insert({"ypad", ypad});
    return *this;
}




    json11::Json to_json() const {
        return _colorbar;
    }

    private:

    json11::Json::object _colorbar;

    };

    }

    }
}
