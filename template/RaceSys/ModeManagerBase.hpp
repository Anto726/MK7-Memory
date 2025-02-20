#pragma once

#include "RaceInfo/CRaceInfo.hpp"

namespace RaceSys
{
    /START_CLASS/NAME@ModeManagerBase/SIZE@0x518/
    public:
        enum RaceState : u8
        {
            RaceState_Race = 2,
        };

        /M/RaceState m_race_state/0x1/0x48/
        /M/CRaceInfo m_race_info/0x190/0x64/
    /END/
}