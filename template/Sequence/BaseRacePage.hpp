#pragma once

#include "../types.hpp"
#include "../forward.hpp"
#include "RaceSys/CRaceMode.hpp"
#include "BasePage.hpp"

#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@BaseRacePage/SIZE@0x31FC/BASE@BasePage/BSIZE@0x26C/VTABLE@True/
    public:
        BaseRacePage();

        /M/RaceSys::CRaceMode m_race_mode/0xC/0x26C/
        /M/UI::BgRaceMapControl *m_bg_race_map_control_1/0x4/0x29C/
        /M/UI::BgRaceMapControl *m_bg_race_map_control_2/0x4/0x2A0/
        /M/UI::BgRaceMapControl *m_bg_race_zoom_map_control/0x4/0x2A4/
        /M/UI::BgRaceMapCharaControl *m_bg_race_map_chara_control[8]/0x20/0x2A8/
        /M/u32 m_result_bar_point_timer/0x4/0x2E34/
        /M/u32 m_result_bar_point_sound_timer/0x4/0x2E38/
        /M/u32 m_result_bar_point_increment/0x4/0x2E48/
        /M/u32 m_result_bar_point_interval/0x4/0x2E4C/
        /M/u32 m_result_bar_point_sound_interval/0x4/0x2E50/
        /M/sead::PtrArray<UI::BgRaceMapBombControl> m_bg_race_map_bomb_controls/0xC/0x3198/
    /END/
}