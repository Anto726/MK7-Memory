#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    struct ERaceModeFlag
    {
        u32 race : 1;
    };
    static_assert(sizeof(ERaceModeFlag) == 0x4);
}