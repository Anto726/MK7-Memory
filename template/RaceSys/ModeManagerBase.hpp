#pragma once

#include "../common.hpp"
#include "../types.hpp"

#include "../Util/TStateObserver.hpp"

#include "../Object/TDirectorArray.hpp"
#include "../Object/TLinkSocket.hpp"

#include "RaceInfo/CRaceInfo.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@ModeManagerBase/SIZE@0x518/BASE@Object::TDirectorArray<Object::Actor, Object::TLinkSocket<Object::Actor, Object::Actor>>/BSIZE@0x28/
    public:
        enum RaceState : u8
        {
            RaceState_Sync,
            RaceState_Countdown,
            RaceState_Race,
            RaceState_Goal,
        };

        /M/Util::TStateObserver<ModeManagerBase> m_state_observer/0x20/0x44/
        /M/CRaceInfo m_race_info/0x190/0x64/
        /M/u8 m_rank_to_player_id[KART_MAX + 1]/0x9/0x1F4/
        /M/u8 m_player_id_to_rank[KART_MAX]/0x8/0x1FD/
        /M/u32 m_frame_since_countdown/0x4/0x4D8/
        /M/u32 m_frame_since_sync/0x4/0x4DC/
    /END/
}