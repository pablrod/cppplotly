//
// Created by Nabu on 9/2/18.
//

#ifndef CPPPLOTLY_BASETRACE_H
#define CPPPLOTLY_BASETRACE_H

#include <memory>

#include <json11.hpp>

namespace CppPlotly {
    class BaseTrace {
    public:
        typedef std::shared_ptr <BaseTrace> Pointer;

        virtual json11::Json to_json() const = 0;
    };
}

#endif //CPPPLOTLY_BASETRACE_H
