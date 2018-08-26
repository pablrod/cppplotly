cmake_minimum_required(VERSION 3.11)

project(CppPlotly VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cppplotly_samples samples/scatter.cpp)

target_include_directories(cppplotly_samples PUBLIC include)
target_link_libraries(cppplotly_samples json11)
target_compile_options(cppplotly_samples
  PRIVATE -Wall)


