/**
 * @file Z.h
This attribute is part of the possible options for the trace isosurface.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#isosurface>

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
    namespace isosurface {
namespace slices {

    /**
     * 
     *
     *
     */
    class Z {
    public:

    /**
Sets the fill ratio of the `slices`. The default fill value of the `slices` is 1 meaning that they are entirely shaded. On the other hand Applying a `fill` ratio less than one would allow the creation of openings parallel to the edges.
*/Z & Fill(const double &fill ) {
    _z.insert({"fill", fill});
    return *this;
}


/**
Specifies the location(s) of slices on the axis. When not locations specified slices would be created for all points of the axis z except start and end.
*/Z & Locations(const std::vector<double> &locations ) {
    _z.insert({"locations", locations});
    return *this;
}


/**
Specifies the location(s) of slices on the axis. When not locations specified slices would be created for all points of the axis z except start and end.
*/Z & Locations(const std::vector<std::string> &locations ) {
    _z.insert({"locations", locations});
    return *this;
}


/**
Specifies the location(s) of slices on the axis. When not locations specified slices would be created for all points of the axis z except start and end.
*/Z & Locations(const json11::Json &locations ) {
    _z.insert({"locations", locations});
    return *this;
}


/**
Sets the source reference on plot.ly for  locations .
*/Z & Locationssrc(const std::string &locationssrc ) {
    _z.insert({"locationssrc", locationssrc});
    return *this;
}


/**
Determines whether or not slice planes about the z dimension are drawn.
*/Z & Show(const bool &show ) {
    _z.insert({"show", show});
    return *this;
}




    json11::Json to_json() const {
        return _z;
    }

    private:

    json11::Json::object _z;

    };

    }
}

    }
}
