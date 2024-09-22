#pragma once

#include "RaceInfo/CRaceInfo.hpp"

namespace RaceSys
{
    class ModeManagerBase
    {
    public:
        enum RaceState : u8
        {
            RaceState_Race = 2,
        };

        u8 gap_0x0[0x48];
        RaceState m_race_state;
        u8 gap_0x49[0x1B];
        CRaceInfo m_race_info;
        u8 gap_0x1F4[0x324];
    };
    static_assert(sizeof(ModeManagerBase) == 0x518);
}