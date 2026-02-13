#pragma once

#include "../types.hpp"

#include "RaceInfo/CRaceInfo.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@ModeManagerBase/SIZE@0x518/
    public:
        enum RaceState : u8
        {
            RaceState_Sync,
            RaceState_Countdown,
            RaceState_Race,
            RaceState_Goal,
        };

        /M/RaceState m_race_state/0x1/0x48/
        /M/CRaceInfo m_race_info/0x190/0x64/
        /M/u8 m_rank_to_player_id[9]/0x9/0x1F4/
        /M/u8 m_player_id_to_rank[8]/0x8/0x1FD/
        /M/u32 m_frame_since_countdown/0x4/0x4D8/
        /M/u32 m_frame_since_sync/0x4/0x4DC/
    /END/
}