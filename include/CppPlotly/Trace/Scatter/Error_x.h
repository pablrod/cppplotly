/**
 * @file Error_x.h
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

    /**
     * 
     *
     *
     */
    class Error_x {
    public:

    /**
Sets the data corresponding the length of each error bar. Values are plotted relative to the underlying data.
*/Error_x & Array(const std::vector<double> &array ) {
    _error_x.insert({"array", array});
    return *this;
}


/**
Sets the data corresponding the length of each error bar. Values are plotted relative to the underlying data.
*/Error_x & Array(const std::vector<std::string> &array ) {
    _error_x.insert({"array", array});
    return *this;
}


/**
Sets the data corresponding the length of each error bar. Values are plotted relative to the underlying data.
*/Error_x & Array(const json11::Json &array ) {
    _error_x.insert({"array", array});
    return *this;
}


/**
Sets the data corresponding the length of each error bar in the bottom (left) direction for vertical (horizontal) bars Values are plotted relative to the underlying data.
*/Error_x & Arrayminus(const std::vector<double> &arrayminus ) {
    _error_x.insert({"arrayminus", arrayminus});
    return *this;
}


/**
Sets the data corresponding the length of each error bar in the bottom (left) direction for vertical (horizontal) bars Values are plotted relative to the underlying data.
*/Error_x & Arrayminus(const std::vector<std::string> &arrayminus ) {
    _error_x.insert({"arrayminus", arrayminus});
    return *this;
}


/**
Sets the data corresponding the length of each error bar in the bottom (left) direction for vertical (horizontal) bars Values are plotted relative to the underlying data.
*/Error_x & Arrayminus(const json11::Json &arrayminus ) {
    _error_x.insert({"arrayminus", arrayminus});
    return *this;
}


/**
Sets the source reference on plot.ly for  arrayminus .
*/Error_x & Arrayminussrc(const std::string &arrayminussrc ) {
    _error_x.insert({"arrayminussrc", arrayminussrc});
    return *this;
}


/**
Sets the source reference on plot.ly for  array .
*/Error_x & Arraysrc(const std::string &arraysrc ) {
    _error_x.insert({"arraysrc", arraysrc});
    return *this;
}


/**
Sets the stoke color of the error bars.
*/Error_x & Color(const json11::Json &color ) {
    _error_x.insert({"color", color});
    return *this;
}


Error_x & Copy_ystyle(const bool &copy_ystyle ) {
    _error_x.insert({"copy_ystyle", copy_ystyle});
    return *this;
}


/**
Determines whether or not the error bars have the same length in both direction (top/bottom for vertical bars, left/right for horizontal bars.
*/Error_x & Symmetric(const bool &symmetric ) {
    _error_x.insert({"symmetric", symmetric});
    return *this;
}


/**
Sets the thickness (in px) of the error bars.
*/Error_x & Thickness(const double &thickness ) {
    _error_x.insert({"thickness", thickness});
    return *this;
}


Error_x & Traceref(const int &traceref ) {
    _error_x.insert({"traceref", traceref});
    return *this;
}


Error_x & Tracerefminus(const int &tracerefminus ) {
    _error_x.insert({"tracerefminus", tracerefminus});
    return *this;
}


/**
Sets the value of either the percentage (if `type` is set to *percent*) or the constant (if `type` is set to *constant*) corresponding to the lengths of the error bars.
*/Error_x & Value(const double &value ) {
    _error_x.insert({"value", value});
    return *this;
}


/**
Sets the value of either the percentage (if `type` is set to *percent*) or the constant (if `type` is set to *constant*) corresponding to the lengths of the error bars in the bottom (left) direction for vertical (horizontal) bars
*/Error_x & Valueminus(const double &valueminus ) {
    _error_x.insert({"valueminus", valueminus});
    return *this;
}


/**
Determines whether or not this set of error bars is visible.
*/Error_x & Visible(const bool &visible ) {
    _error_x.insert({"visible", visible});
    return *this;
}


/**
Sets the width (in px) of the cross-bar at both ends of the error bars.
*/Error_x & Width(const double &width ) {
    _error_x.insert({"width", width});
    return *this;
}




    json11::Json to_json() const {
        return _error_x;
    }

    private:

    json11::Json::object _error_x;

    };

    }

    }
}
