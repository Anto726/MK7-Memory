#pragma once

#include "types.hpp"

BEGIN_GLOBAL_NAMESPACE
    struct callback
    {
        void *function;
        void *gap;
    };
    static_assert(sizeof(callback) == 0x8);
END_GLOBAL_NAMESPACE

