/**
 * @file Tickformatstop.h
This attribute is part of the possible options for the trace scatter.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scatter>

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
    namespace scatter {
namespace marker {
namespace colorbar {

    /**
     * 
     *
     *
     */
    class Tickformatstop {
    public:

    /**
range [*min*, *max*], where *min*, *max* - dtick values which describe some zoom level, it is possible to omit *min* or *max* value by passing *null*
*/Tickformatstop & Dtickrange(const std::vector<std::string> &dtickrange ) {
    _tickformatstop.insert({"dtickrange", dtickrange});
    return *this;
}


/**
string - dtickformat for described zoom level, the same as *tickformat*
*/Tickformatstop & Value(const std::string &value ) {
    _tickformatstop.insert({"value", value});
    return *this;
}




    json11::Json to_json() const {
        return _tickformatstop;
    }

    private:

    json11::Json::object _tickformatstop;

    };

    }
}
}

    }
}
