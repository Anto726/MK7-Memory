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
    /START_CLASS/NAME@CRaceInfo/SIZE@0x190/
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

        /M/CKartInfo m_kart_infos[KART_MAX]/0x160/0x0/
        /M/ECourseID m_course_id/0x4/0x160/
        /M/CRaceMode m_race_mode/0xC/0x164/
        /M/EEngineLevel m_engine_level/0x4/0x170/
        /M/bool m_is_mirror_mode/0x1/0x174/
        /M/bool m_is_team_mode/0x1/0x175/
        /M/u8 m_lap_num/0x1/0x176/
        /M/ERaceModeFlag m_race_mode_flag/0x4/0x178/
        /M/EItemPattern m_item_pattern/0x4/0x17C/
        /M/u32 m_kart_num/0x4/0x180/
        /M/s16 m_detail_kart_id/0x2/0x184/
        /M/u16 m_camera_target_player_id/0x2/0x186/
        /M/u32 m_fixed_random_seed/0x4/0x188/
        /M/u32 m_half_fixed_random_seed/0x4/0x18C/
    /END/
}