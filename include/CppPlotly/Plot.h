//
// Created by Nabu on 9/2/18.
//

#ifndef CPPPLOTLY_PLOT_H
#define CPPPLOTLY_PLOT_H

#include <vector>
#include <sstream>
#include <numeric>

#include <json11.hpp>

#include "BaseTrace.h"

namespace CppPlotly {

    class Layout {
    public:
        Layout() {}

        Layout(const json11::Json::object &layout) :
                _layout(layout) {
        }

        json11::Json to_json() const {
            return _layout;
        }
    private:
        json11::Json::object _layout;
    };

    class Plot {
    public:

        template <typename TraceObject>
        Plot &AddTrace(const TraceObject &trace) {
            traces.push_back(CppPlotly::BaseTrace::Pointer(
                    new TraceObject(trace)
            ));
            return *this;
        }

        Plot &AddTrace(CppPlotly::BaseTrace::Pointer trace) {
            traces.push_back(trace);
            return *this;
        }

        std::string render_html() const {
            if (traces.empty()) {
                return "Please add at least one trace";
            }
            std::ostringstream html;
            html << "<!DOCTYPE html> \n"
                    "<head> \n"
                    "<meta charset=\"utf-8\" /> \n"
                    "<script src=\"https://cdnjs.cloudflare.com/ajax/libs/jquery/2.2.0/jquery.min.js\"></script>"

                    "</head> \n"
                    "<body> \n"
                    "<div id=\"d2ad872f-61d6-11e8-836b-96e4cd0da1b2\"></div> \n"
                    "<script src=\"https://cdn.plot.ly/plotly-1.38.0.min.js\"></script> \n"
                    "<script> \n"
                    "function maximizar(){"
                    "Plotly.relayout(document.getElementById('d2ad872f-61d6-11e8-836b-96e4cd0da1b2'), {height: window.innerHeight * 0.92 });"
                    "};"
                    "window.onresize = function() {"
                    "$('.js-plotly-plot').each(function(index, gd) {"
                    "Plotly.Plots.resize(gd).then(function(){maximizar()});"
                    "});"
                    "};"
                    "Plotly.plot(document.getElementById('d2ad872f-61d6-11e8-836b-96e4cd0da1b2'), \n[";

            html << std::accumulate(traces.cbegin() + 1, traces.cend(), (*(traces.cbegin()))->to_json().dump(), [](const std::string &html, const CppPlotly::BaseTrace::Pointer &trace) {
                return html + ", " + trace->to_json().dump();
            });
            html << "], ";
            html << layout.to_json().dump();
            html << "); \nmaximizar();";
            html << "</script> \n </body> \n </html> \n";
            return html.str();
        }

    private:
        std::vector<CppPlotly::BaseTrace::Pointer> traces;
        Layout layout;
    };
}

#endif //CPPPLOTLY_PLOT_H
