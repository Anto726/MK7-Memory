#pragma once

#include "../types.hpp"

namespace RaceSys
{
    struct ERaceModeFlag
    {
        u32 race : 1;
    };
    static_assert(sizeof(ERaceModeFlag) == 0x4);
}