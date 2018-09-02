/**
 * @file ImpliedEdits.h
This attribute is part of the possible options for the trace histogram2dcontour.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#histogram2dcontour>

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
    namespace histogram2dcontour {
namespace ybins {

    /**
     * 
     *
     *
     */
    class ImpliedEdits {
    public:

    ImpliedEdits & Autobiny(const json11::Json::object &autobiny ) {
    _impliedEdits.insert({"autobiny", autobiny});
    return *this;
}




    json11::Json to_json() const {
        return _impliededits;
    }

    private:

    json11::Json::object _impliededits;

    };

    }
}

    }
}
