#pragma once

#include "../forward.hpp"

#include <container/seadPtrArray.h>

namespace Sequence
{
    class BaseRacePage
    {
    public:
        u8 gap_0x0[0x26C];
        RaceSys::CRaceMode m_race_mode;
        u8 gap_0x278[0x2F20];
        sead::PtrArray<UI::BgRaceMapBombControl> m_bg_race_map_bomb_controls;
        u8 gap_0x31A4[0x58];
    };
    static_assert(sizeof(BaseRacePage) == 0x31FC);
}