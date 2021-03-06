/**
 * @file Cells.h
This attribute is part of the possible options for the trace table.

This file has been autogenerated from the official plotly.js source.

If you like Plotly, please support them: L<https://plot.ly/> 
Open source announcement: L<https://plot.ly/javascript/open-source-announcement/>

Full reference: L<https://plot.ly/javascript/reference/#table>

DISCLAIMER

This is an unofficial Plotly Perl module. Currently I'm not affiliated in any way with Plotly. 
But I think plotly.js is a great library and I want to use it with C++.

*/

#include <vector>
#include <string>
#include <sstream>

#include <json11.hpp>

#include "CppPlotly/Trace/Table/Cells/Fill.h"
#include "CppPlotly/Trace/Table/Cells/Font.h"
#include "CppPlotly/Trace/Table/Cells/Line.h"



namespace CppPlotly {
    namespace Trace {
    namespace table {

    /**
     * 
     *
     *
     */
    class Cells {
    public:

    /**
Sets the horizontal alignment of the `text` within the box. Has an effect only if `text` spans more two or more lines (i.e. `text` contains one or more <br> HTML tags) or if an explicit width is set to override the text width.
*/Cells & Align(const json11::Json &align ) {
    _cells.insert({"align", align});
    return *this;
}


/**
Sets the source reference on plot.ly for  align .
*/Cells & Alignsrc(const std::string &alignsrc ) {
    _cells.insert({"alignsrc", alignsrc});
    return *this;
}


Cells & Fill(const CppPlotly::Trace::table::cells::Fill &fill ) {
    _cells.insert({"fill", fill});
    return *this;
}


Cells & Font(const CppPlotly::Trace::table::cells::Font &font ) {
    _cells.insert({"font", font});
    return *this;
}


/**
Sets the cell value formatting rule using d3 formatting mini-language which is similar to those of Python. See https://github.com/d3/d3-format/blob/master/README.md#locale_format
*/Cells & Format(const std::vector<double> &format ) {
    _cells.insert({"format", format});
    return *this;
}


/**
Sets the cell value formatting rule using d3 formatting mini-language which is similar to those of Python. See https://github.com/d3/d3-format/blob/master/README.md#locale_format
*/Cells & Format(const std::vector<std::string> &format ) {
    _cells.insert({"format", format});
    return *this;
}


/**
Sets the cell value formatting rule using d3 formatting mini-language which is similar to those of Python. See https://github.com/d3/d3-format/blob/master/README.md#locale_format
*/Cells & Format(const json11::Json &format ) {
    _cells.insert({"format", format});
    return *this;
}


/**
Sets the source reference on plot.ly for  format .
*/Cells & Formatsrc(const std::string &formatsrc ) {
    _cells.insert({"formatsrc", formatsrc});
    return *this;
}


/**
The height of cells.
*/Cells & Height(const double &height ) {
    _cells.insert({"height", height});
    return *this;
}


Cells & Line(const CppPlotly::Trace::table::cells::Line &line ) {
    _cells.insert({"line", line});
    return *this;
}


/**
Prefix for cell values.
*/Cells & Prefix(const json11::Json &prefix ) {
    _cells.insert({"prefix", prefix});
    return *this;
}


/**
Sets the source reference on plot.ly for  prefix .
*/Cells & Prefixsrc(const std::string &prefixsrc ) {
    _cells.insert({"prefixsrc", prefixsrc});
    return *this;
}


/**
Suffix for cell values.
*/Cells & Suffix(const json11::Json &suffix ) {
    _cells.insert({"suffix", suffix});
    return *this;
}


/**
Sets the source reference on plot.ly for  suffix .
*/Cells & Suffixsrc(const std::string &suffixsrc ) {
    _cells.insert({"suffixsrc", suffixsrc});
    return *this;
}


/**
Cell values. `values[m][n]` represents the value of the `n`th point in column `m`, therefore the `values[m]` vector length for all columns must be the same (longer vectors will be truncated). Each value must be a finite number or a string.
*/Cells & Values(const std::vector<double> &values ) {
    _cells.insert({"values", values});
    return *this;
}


/**
Cell values. `values[m][n]` represents the value of the `n`th point in column `m`, therefore the `values[m]` vector length for all columns must be the same (longer vectors will be truncated). Each value must be a finite number or a string.
*/Cells & Values(const std::vector<std::string> &values ) {
    _cells.insert({"values", values});
    return *this;
}


/**
Cell values. `values[m][n]` represents the value of the `n`th point in column `m`, therefore the `values[m]` vector length for all columns must be the same (longer vectors will be truncated). Each value must be a finite number or a string.
*/Cells & Values(const json11::Json &values ) {
    _cells.insert({"values", values});
    return *this;
}


/**
Sets the source reference on plot.ly for  values .
*/Cells & Valuessrc(const std::string &valuessrc ) {
    _cells.insert({"valuessrc", valuessrc});
    return *this;
}




    json11::Json to_json() const {
        return _cells;
    }

    private:

    json11::Json::object _cells;

    };

    }

    }
}
