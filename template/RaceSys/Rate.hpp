#pragma once

#include "../types.hpp"

namespace RaceSys
{
    struct Rate
    {
        u32 value;
    };
    static_assert(sizeof(Rate) == 0x4);
}