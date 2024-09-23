#pragma once

#include "../CRaceMode.hpp"
#include "../EItemPattern.hpp"
#include "../ERaceModeFlag.hpp"

namespace RaceSys
{
    class CRaceInfo
    {
    public:
        u8 gap_0x0[0x164];
        CRaceMode m_race_mode;
        u8 gap_0x170[0x8];
        ERaceModeFlag m_race_mode_flag;
        EItemPattern m_item_pattern;
        u8 gap_0x180[0x10];
    };
    static_assert(sizeof(CRaceInfo) == 0x190);
}