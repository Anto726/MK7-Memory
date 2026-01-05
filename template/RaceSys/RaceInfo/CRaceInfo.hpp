#pragma once

#include "../../types.hpp"

#include "../CRaceMode.hpp"
#include "../EBodyID.hpp"
#include "../ECourseID.hpp"
#include "../EDriverID.hpp"
#include "../EEngineLevel.hpp"
#include "../EItemPattern.hpp"
#include "../EPlayerType.hpp"
#include "../ERaceModeFlag.hpp"
#include "../EScrewID.hpp"
#include "../ETeamType.hpp"
#include "../ETireID.hpp"
#include "../ETitleType.hpp"
#include "../EWingID.hpp"
#include "../Rate.hpp"

#define KART_MAX 8

BEGIN_NAMESPACE(RaceSys)
{
    class CRaceInfo
    {
    public:
        /START_CLASS/NAME@CKartInfo/SIZE@0x2C/
        public:
            /M/EBodyID m_body_id/0x4/0x0/
            /M/ETireID m_tire_id/0x4/0x4/
            /M/EWingID m_wing_id/0x4/0x8/
            /M/EScrewID m_screw_id/0x4/0xC/
            /M/EDriverID m_driver_id/0x4/0x10/
            /M/EPlayerType m_player_type/0x4/0x14/
            /M/ETeamType m_team_type/0x4/0x18/
            /M/ETitleType m_title_type/0x4/0x1C/
            /M/u16 m_race_point/0x2/0x20/
            /M/u16 m_race_rank/0x2/0x22/
            /M/u16 m_total_rank/0x2/0x24/
            /M/u16 m_unique_total_rank/0x2/0x26/
            /M/Rate m_rate/0x4/0x28/
        /END/

        CKartInfo m_kart_infos[KART_MAX];
        ECourseID m_course_id;
        CRaceMode m_race_mode;
        EEngineLevel m_engine_level;
        bool m_is_mirror_mode;
        bool m_is_team_mode;
        u8 m_lap_num;
        ERaceModeFlag m_race_mode_flag;
        EItemPattern m_item_pattern;
        u32 m_kart_num;
        s16 m_detail_kart_id;
        u16 m_camera_target_player_id;
        u32 m_fixed_random_seed;
        u32 m_half_fixed_random_seed;
    };
    static_assert(sizeof(CRaceInfo) == 0x190);
}