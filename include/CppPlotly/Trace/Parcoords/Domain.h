/**
 * @file Domain.h
This attribute is part of the possible options for the trace parcoords.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#parcoords>

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
    namespace parcoords {

    /**
     * 
     *
     *
     */
    class Domain {
    public:

    /**
If there is a layout grid, use the domain for this column in the grid for this parcoords trace .
*/Domain & Column(const int &column ) {
    _domain.insert({"column", column});
    return *this;
}


/**
If there is a layout grid, use the domain for this row in the grid for this parcoords trace .
*/Domain & Row(const int &row ) {
    _domain.insert({"row", row});
    return *this;
}


/**
Sets the horizontal domain of this parcoords trace (in plot fraction).
*/Domain & X(const std::vector<std::string> &x ) {
    _domain.insert({"x", x});
    return *this;
}


/**
Sets the vertical domain of this parcoords trace (in plot fraction).
*/Domain & Y(const std::vector<std::string> &y ) {
    _domain.insert({"y", y});
    return *this;
}




    json11::Json to_json() const {
        return _domain;
    }

    private:

    json11::Json::object _domain;

    };

    }

    }
}
