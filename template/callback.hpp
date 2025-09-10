#pragma once

#include "types.hpp"

namespace MK7MEMORY_NAMESPACE {
    struct callback
    {
        void *function;
        void *gap;
    };
    static_assert(sizeof(callback) == 0x8);
}

