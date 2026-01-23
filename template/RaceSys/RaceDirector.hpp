#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "RaceInfo/CRaceInfo.hpp"
#include "Random.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@RaceDirector/SIZE@0x338/
    public:
        /M/RaceTimer *m_race_timer/0x4/0x28/
        /M/CRaceInfo m_race_info/0x190/0x2C/
        /M/ModeManagerBase *m_mode_manager/0x4/0x1BC/
        /M/LogRecorder *m_log_recorder/0x4/0x1C0/
        /M/Random m_fixed_random/0x7C/0x1C4/
        /M/Random m_unfixed_random/0x7C/0x240/
        /M/Random m_half_fixed_random/0x7C/0x2BC/
    /END/
}