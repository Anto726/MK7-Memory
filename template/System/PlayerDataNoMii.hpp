#pragma once

#include "../RaceSys/Rate.hpp"

namespace System
{
    struct PlayerDataNoMii
    {
        RaceSys::Rate rate;
        u8 gap_0x4[0x38];
    };
    static_assert(sizeof(PlayerDataNoMii) == 0x3C);
}