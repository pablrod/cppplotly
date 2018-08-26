#include <iostream>
#include <vector>
#include <memory>
#include <sstream>

#include <json11.hpp>

namespace CppPlotly {
    class BaseTrace {
    public:
        typedef std::shared_ptr<BaseTrace> Pointer;

        virtual json11::Json to_json() const = 0;
    };
    namespace Trace {

        template<typename JSON = json11::Json, typename JSON_OBJECT = json11::Json::object>
        class Scatter : public virtual CppPlotly::BaseTrace {
        public:
            Scatter() :
                    _scatter({
                                     {"type", "scatter"},
                             }) {}

            Scatter(const Scatter &other_scatter) :
                    _scatter(other_scatter._scatter) {
            }

            Scatter &x(const std::vector<double> &x) {
                _scatter.insert({"x", x});
                return *this;
            }

            Scatter &y(const std::vector<double> &y) {
                return this->y(JSON(y));
            }

            Scatter &y(const std::vector<std::string> &y) {
                return this->y(JSON(y));
            }

            template<typename Data>
            Scatter &y(const Data &y) {
                _scatter.insert({"y", y});
                return *this;
            }

            JSON to_json() const {
                return _scatter;
            }

        private:
            JSON_OBJECT _scatter;
        };

        class Bar : public virtual CppPlotly::BaseTrace {
        public:
            Bar() :
                    _bar({
                                 {"type", "bar"},
                         }) {}

            Bar(const Bar &other_bar) :
                    _bar(other_bar._bar) {
            }

            Bar &x(const std::vector<double> &x) {
                return this->x(json11::Json(x));
            }

            Bar &x(const std::vector<std::string> &x) {
                return this->x(json11::Json(x));
            }

            template<typename Data>
            Bar &x(const Data &x) {
                _bar.insert({"x", x});
                return *this;
            }

            Bar &y(const std::vector<double> &y) {
                return this->y(json11::Json(y));
            }

            Bar &y(const std::vector<std::string> &y) {
                return this->y(json11::Json(y));
            }

            template<typename Data>
            Bar &y(const Data &y) {
                _bar.insert({"y", y});
                return *this;
            }

            json11::Json to_json() const {
                return _bar;
            }

        private:
            json11::Json::object _bar;
        };
    }


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
            for (const auto &trace : traces) {
                html << trace->to_json().dump();
                // TODO missing comma
            }
            html << "], ";
            html << layout.to_json().dump();
            html << "); \n";
            html << "</script> \n </body> \n </html> \n";
            return html.str();
        }

    private:
        std::vector<CppPlotly::BaseTrace::Pointer> traces;
        Layout layout;
    };
}

int main(void) {

    auto scatter = CppPlotly::Trace::Scatter<>().
            x({1, 2, 3, 4, 5}).
            y({2, 4, 8, 16, 32});

    auto otro_scatter = CppPlotly::BaseTrace::Pointer(&((new CppPlotly::Trace::Scatter<>())->
            x({1, 2, 3, 4, 5}).
            //y({1, 3, 5, 7, 8});
            y({"uno", "dos", "tres", "cuatro", "cinco"})));

    //std::cout << scatter.to_json().dump() << std::endl;
    //std::cout << otro_scatter->to_json().dump() << std::endl;

    auto plot = CppPlotly::Plot().AddTrace(scatter);

    std::cout << plot.render_html() << std::endl;

    return 0;
}
