#pragma once

#include "CRaceMode.hpp"
#include "ERaceModeFlag.hpp"

namespace RaceSys
{
    class CRaceInfo
    {
    public:
        u8 gap_0x0[0x164];
        CRaceMode m_race_mode;
        u8 gap_0x170[0x8];
        ERaceModeFlag m_race_mode_flag;
        u8 gap_0x17C[0x14];
    };
    static_assert(sizeof(CRaceInfo) == 0x190);
}