cmake_minimum_required(VERSION 3.11)

project(CppPlotly VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(cppplotly_sample PUBLIC include)

add_executable(cppplotly_sample samples/scatter.cpp)
target_link_libraries(cppplotly_sample json11)
target_compile_options(cppplotly_sample PRIVATE -Wall)


find_package(wxWidgets REQUIRED webview, net, core, base)
if (wxWidgets_FOUND)
    include(${wxWidgets_USE_FILE})

    add_executable(cppplotly_sample_wxwidgets samples/wxwidgets/cppplotly_wxwidgets.cpp)

    target_compile_options(cppplotly_sample_wxwidgets PRIVATE -Wall)
    target_link_libraries(cppplotly_sample_wxwidgets ${wxWidgets_LIBRARIES} json11)
endif ()

