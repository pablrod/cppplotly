#include <iostream>
#include <vector>
#include <memory>
#include <sstream>

#include "CppPlotly/Plot.h"
#include "CppPlotly/Trace/Scatter.h"
#include "CppPlotly/Trace/Bar.h"
#include "CppPlotly/Trace/Scatter3d.h"

int main(void) {

    auto scatter = CppPlotly::Trace::Scatter().
            X({1, 2, 3, 4, 5}).
            Y({2, 4, 8, 16, 32});

    auto scatter3d = CppPlotly::Trace::Scatter3d().X({1, 2, 3}).Y({1, 2, 3}).Z({1, 2, 3});

    auto another_scatter = CppPlotly::BaseTrace::Pointer(&((new CppPlotly::Trace::Bar())->
            Y({1, 2, 3, 4, 5}).
            //y({1, 3, 5, 7, 8});
            X({"1", "2", "3", "4", "5"})));

    auto plot = CppPlotly::Plot()
            .AddTrace(scatter)
            .AddTrace(another_scatter);

    std::cout << plot.render_html() << std::endl;

    return 0;
}
