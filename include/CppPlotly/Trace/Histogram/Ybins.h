/**
 * @file Ybins.h
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
    class Ybins {
    public:

    /**
Sets the end value for the y axis bins. The last bin may not end exactly at this value, we increment the bin edge by `size` from `start` until we reach or exceed `end`. Defaults to the maximum data value. Like `start`, for dates use a date string, and for category data `end` is based on the category serial numbers.
*/Ybins & End(const json11::Json &end ) {
    _ybins.insert({"end", end});
    return *this;
}


/**
Sets the size of each y axis bin. Default behavior: If `nbinsy` is 0 or omitted, we choose a nice round bin size such that the number of bins is about the same as the typical number of samples in each bin. If `nbinsy` is provided, we choose a nice round bin size giving no more than that many bins. For date data, use milliseconds or *M<n>* for months, as in `axis.dtick`. For category data, the number of categories to bin together (always defaults to 1). If multiple non-overlaying histograms share a subplot, the first explicit `size` is used and all others discarded. If no `size` is provided,the sample data from all traces is combined to determine `size` as described above.
*/Ybins & Size(const json11::Json &size ) {
    _ybins.insert({"size", size});
    return *this;
}


/**
Sets the starting value for the y axis bins. Defaults to the minimum data value, shifted down if necessary to make nice round values and to remove ambiguous bin edges. For example, if most of the data is integers we shift the bin edges 0.5 down, so a `size` of 5 would have a default `start` of -0.5, so it is clear that 0-4 are in the first bin, 5-9 in the second, but continuous data gets a start of 0 and bins [0,5), [5,10) etc. Dates behave similarly, and `start` should be a date string. For category data, `start` is based on the category serial numbers, and defaults to -0.5. If multiple non-overlaying histograms share a subplot, the first explicit `start` is used exactly and all others are shifted down (if necessary) to differ from that one by an integer number of bins.
*/Ybins & Start(const json11::Json &start ) {
    _ybins.insert({"start", start});
    return *this;
}




    json11::Json to_json() const {
        return _ybins;
    }

    private:

    json11::Json::object _ybins;

    };

    }

    }
}
