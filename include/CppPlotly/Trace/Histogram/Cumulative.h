/**
 * @file Cumulative.h
This attribute is part of the possible options for the trace histogram.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#histogram>

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
    namespace histogram {

    /**
     * 
     *
     *
     */
    class Cumulative {
    public:

    /**
Only applies if cumulative is enabled. Sets whether the current bin is included, excluded, or has half of its value included in the current cumulative value. *include* is the default for compatibility with various other tools, however it introduces a half-bin bias to the results. *exclude* makes the opposite half-bin bias, and *half* removes it.
*/Cumulative & Currentbin(const json11::Json &currentbin ) {
    _cumulative.insert({"currentbin", currentbin});
    return *this;
}


/**
Only applies if cumulative is enabled. If *increasing* (default) we sum all prior bins, so the result increases from left to right. If *decreasing* we sum later bins so the result decreases from left to right.
*/Cumulative & Direction(const json11::Json &direction ) {
    _cumulative.insert({"direction", direction});
    return *this;
}


/**
If true, display the cumulative distribution by summing the binned values. Use the `direction` and `centralbin` attributes to tune the accumulation method. Note: in this mode, the *density* `histnorm` settings behave the same as their equivalents without *density*: ** and *density* both rise to the number of data points, and *probability* and *probability density* both rise to the number of sample points.
*/Cumulative & Enabled(const bool &enabled ) {
    _cumulative.insert({"enabled", enabled});
    return *this;
}




    json11::Json to_json() const {
        return _cumulative;
    }

    private:

    json11::Json::object _cumulative;

    };

    }

    }
}
