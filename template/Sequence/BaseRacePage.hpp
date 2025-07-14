#pragma once

#include "../forward.hpp"
#include "RaceSys/CRaceMode.hpp"

#include <container/seadPtrArray.h>

namespace Sequence
{
    /START_CLASS/NAME@BaseRacePage/SIZE@0x31FC/
    public:
        /M/RaceSys::CRaceMode m_race_mode/0xC/0x26C/
        /M/u32 m_result_bar_point_timer/0x4/0x2E34/
        /M/u32 m_result_bar_point_sound_timer/0x4/0x2E38/
        /M/u32 m_result_bar_point_increment/0x4/0x2E48/
        /M/u32 m_result_bar_point_interval/0x4/0x2E4C/
        /M/u32 m_result_bar_point_sound_interval/0x4/0x2E50/
        /M/sead::PtrArray<UI::BgRaceMapBombControl> m_bg_race_map_bomb_controls/0xC/0x3198/
    /END/
}