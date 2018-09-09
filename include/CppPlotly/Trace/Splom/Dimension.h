/**
 * @file Dimension.h
This attribute is part of the possible options for the trace splom.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#splom>

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
    namespace splom {

    /**
     * 
     *
     *
     */
    class Dimension {
    public:

    /**
Sets the label corresponding to this splom dimension.
*/Dimension & Label(const std::string &label ) {
    _dimension.insert({"label", label});
    return *this;
}


/**
Sets the dimension values to be plotted.
*/Dimension & Values(const std::vector<double> &values ) {
    _dimension.insert({"values", values});
    return *this;
}


/**
Sets the dimension values to be plotted.
*/Dimension & Values(const std::vector<std::string> &values ) {
    _dimension.insert({"values", values});
    return *this;
}


/**
Sets the dimension values to be plotted.
*/Dimension & Values(const json11::Json::object &values ) {
    _dimension.insert({"values", values});
    return *this;
}


/**
Sets the source reference on plot.ly for  values .
*/Dimension & Valuessrc(const std::string &valuessrc ) {
    _dimension.insert({"valuessrc", valuessrc});
    return *this;
}


/**
Determines whether or not this dimension is shown on the graph. Note that even visible false dimension contribute to the default grid generate by this splom trace.
*/Dimension & Visible(const bool &visible ) {
    _dimension.insert({"visible", visible});
    return *this;
}




    json11::Json to_json() const {
        return _dimension;
    }

    private:

    json11::Json::object _dimension;

    };

    }

    }
}
