#pragma once

#include "../CRaceMode.hpp"
#include "../EBodyID.hpp"
#include "../ECourseID.hpp"
#include "../EDriverID.hpp"
#include "../EEngineLevel.hpp"
#include "../EPlayerType.hpp"
#include "../EScrewID.hpp"
#include "../ETeamType.hpp"
#include "../ETireID.hpp"
#include "../EWingID.hpp"
#include "../EItemPattern.hpp"
#include "../ERaceModeFlag.hpp"
#include "../Rate.hpp"

#define KART_MAX 8

namespace RaceSys
{
    class CRaceInfo
    {
    public:
        class CKartInfo
        {
        public:
            EBodyID m_body_id;
            ETireID m_tire_id;
            EWingID m_wing_id;
            EScrewID m_screw_id;
            EDriverID m_driver_id;
            EPlayerType m_player_type;
            ETeamType m_team_type;
            u32 m_0x1C;
            u16 m_race_point;
            u16 m_race_rank;
            u16 m_total_rank;
            u16 m_unique_total_rank;
            Rate m_rate;
        };
        static_assert(sizeof(CKartInfo) == 0x2C);

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