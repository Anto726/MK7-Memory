#pragma once

#include "CRaceMode.hpp"

namespace RaceSys
{
    class CRaceInfo
    {
    public:
        u8 gap_0x0[0x164];
        CRaceMode m_race_mode;
        u8 gap_0x170[0x20];
    };
    static_assert(sizeof(CRaceInfo) == 0x190);
}