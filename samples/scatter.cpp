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

        template <typename JSON = json11::Json, typename JSON_OBJECT = json11::Json::object >
        class Scatter : public virtual CppPlotly::BaseTrace {
        public:
            Scatter() :
                _scatter({
                    {"type", "scatter"},
                        })
            {}

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

            template <typename Data> 
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
            html << "Plotly.plot(data: [";
            for (const auto &trace : traces) {
                html << trace->to_json().dump();
                // TODO missing comma
            }
            html << "], layout: ";
            html << layout.to_json().dump(); 
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
        x({1, 2,3,4,5}).
        //y({1, 3, 5, 7, 8});
        y({"uno", "dos", "tres", "cuatro", "cinco"})));

    std::cout << scatter.to_json().dump() << std::endl;
    std::cout << otro_scatter->to_json().dump() << std::endl;

    auto plot = CppPlotly::Plot().AddTrace(scatter);

    std::cout << plot.render_html() << std::endl;

    return 0;
}
