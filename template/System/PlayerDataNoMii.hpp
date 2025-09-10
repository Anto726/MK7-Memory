#pragma once

#include "../types.hpp"

#include "../RaceSys/Rate.hpp"

BEGIN_NAMESPACE(System)
{
    struct PlayerDataNoMii
    {
        RaceSys::Rate rate;
        u8 gap_0x4[0x38];
    };
    static_assert(sizeof(PlayerDataNoMii) == 0x3C);
}