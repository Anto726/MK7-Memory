#pragma once

#include "../forward.hpp"

#include <container/seadPtrArray.h>

namespace Sequence
{
    class BaseRacePage
    {
    public:
        u8 gap_0x0[0x3198];
        sead::PtrArray<UI::BgRaceMapBombControl> m_bg_race_map_bomb_controls;
        u8 gap_0x31A4[0x58];
    };
    static_assert(sizeof(BaseRacePage) == 0x31FC);
}