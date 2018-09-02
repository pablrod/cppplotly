/**
 * @file Error_z.h
This attribute is part of the possible options for the trace scatter3d.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#scatter3d>

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
    namespace scatter3d {

    /**
     * 
     *
     *
     */
    class Error_z {
    public:

    /**
Sets the data corresponding the length of each error bar. Values are plotted relative to the underlying data.
*/Error_z & Array(const std::vector<double> &array ) {
    _error_z.insert({"array", array});
    return *this;
}


/**
Sets the data corresponding the length of each error bar in the bottom (left) direction for vertical (horizontal) bars Values are plotted relative to the underlying data.
*/Error_z & Arrayminus(const std::vector<double> &arrayminus ) {
    _error_z.insert({"arrayminus", arrayminus});
    return *this;
}


/**
Sets the source reference on plot.ly for  arrayminus .
*/Error_z & Arrayminussrc(const std::string &arrayminussrc ) {
    _error_z.insert({"arrayminussrc", arrayminussrc});
    return *this;
}


/**
Sets the source reference on plot.ly for  array .
*/Error_z & Arraysrc(const std::string &arraysrc ) {
    _error_z.insert({"arraysrc", arraysrc});
    return *this;
}


/**
Sets the stoke color of the error bars.
*/Error_z & Color(const json11::Json::object &color ) {
    _error_z.insert({"color", color});
    return *this;
}


/**
Determines whether or not the error bars have the same length in both direction (top/bottom for vertical bars, left/right for horizontal bars.
*/Error_z & Symmetric(const bool &symmetric ) {
    _error_z.insert({"symmetric", symmetric});
    return *this;
}


/**
Sets the thickness (in px) of the error bars.
*/Error_z & Thickness(const double &thickness ) {
    _error_z.insert({"thickness", thickness});
    return *this;
}


Error_z & Traceref(const int &traceref ) {
    _error_z.insert({"traceref", traceref});
    return *this;
}


Error_z & Tracerefminus(const int &tracerefminus ) {
    _error_z.insert({"tracerefminus", tracerefminus});
    return *this;
}


/**
Sets the value of either the percentage (if `type` is set to *percent*) or the constant (if `type` is set to *constant*) corresponding to the lengths of the error bars.
*/Error_z & Value(const double &value ) {
    _error_z.insert({"value", value});
    return *this;
}


/**
Sets the value of either the percentage (if `type` is set to *percent*) or the constant (if `type` is set to *constant*) corresponding to the lengths of the error bars in the bottom (left) direction for vertical (horizontal) bars
*/Error_z & Valueminus(const double &valueminus ) {
    _error_z.insert({"valueminus", valueminus});
    return *this;
}


/**
Determines whether or not this set of error bars is visible.
*/Error_z & Visible(const bool &visible ) {
    _error_z.insert({"visible", visible});
    return *this;
}


/**
Sets the width (in px) of the cross-bar at both ends of the error bars.
*/Error_z & Width(const double &width ) {
    _error_z.insert({"width", width});
    return *this;
}




    json11::Json to_json() const {
        return _error_z;
    }

    private:

    json11::Json::object _error_z;

    };

    }

    }
}