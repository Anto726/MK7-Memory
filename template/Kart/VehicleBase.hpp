#pragma once

#include "Rigid.hpp"

#include "../RaceSys/EBodyID.hpp"
#include "../RaceSys/ECourseID.hpp"
#include "../RaceSys/EDriverID.hpp"
#include "../RaceSys/ETeamType.hpp"
#include "../RaceSys/ETireID.hpp"
#include "../RaceSys/EWingID.hpp"

BEGIN_NAMESPACE(Kart)
{
	/START_CLASS/NAME@VehicleBase/SIZE@0xE0/BASE@Rigid/BSIZE@0x74/
	public:
		/START_STRUCT/NAME@CreateArg/SIZE@0x24/
			/M/s32 player_id/0x4/0x0/
			/M/RaceSys::EDriverID driver_id/0x4/0x4/
			/M/RaceSys::EBodyID body_id/0x4/0x8/
			/M/RaceSys::ETireID tire_id/0x4/0xC/
			/M/RaceSys::EWingID wing_id/0x4/0x10/
			/M/KartPartsCustomedParam *kart_parts_customed_param/0x4/0x14/
			/M/bool is_cpu/0x1/0x18/
			/M/bool is_player/0x1/0x19/
			/M/bool is_detail/0x1/0x1A/
			/M/bool is_master/0x1/0x1B/
			/M/bool is_ghost/0x1/0x1C/
			/M/Render::RaceLight::LightObj *light_obj/0x4/0x20/
		/END/

		/M/Vehicle *m_vehicle/0x4/0x74/
		/M/Director *m_director/0x4/0x78/
		/M/Driver *m_driver/0x4/0x7C/
		/M/Camera *m_camera/0x4/0x80/
		/M/s32 m_player_id/0x4/0x84/
		/M/RaceSys::EDriverID m_driver_id/0x4/0x88/
		/M/RaceSys::EBodyID m_body_id/0x4/0x8C/
		/M/RaceSys::ETireID m_tire_id/0x4/0x90/
		/M/RaceSys::EWingID m_wing_id/0x4/0x94/
		/M/bool m_is_master/0x1/0x98/
		/M/u8 m_0x99/0x1/0x99/ // ai_id? weird usage
		/M/bool m_is_ai_path_controlled/0x1/0x9A/
		/M/bool m_is_ai_pad_controlled/0x1/0x9B/
		/M/bool m_is_net_object/0x1/0x9C/
		/M/bool m_is_net_send/0x1/0x9D/
		/M/bool m_is_net_recv/0x1/0x9E/
		/M/bool m_0x9F/0x1/0x9F/ // is_player_or_takeover?
		/M/bool m_is_live_view/0x1/0xA0/
		/M/bool m_is_detail/0x1/0xA1/
		/M/bool m_is_ghost/0x1/0xA2/
		/M/bool m_is_intangible/0x1/0xA3/
		/M/bool m_is_battle_mode/0x1/0xA4/
		/M/bool m_is_game_mode_award/0x1/0xA5/
		/M/bool m_is_fake_goal/0x1/0xA6/
		/M/bool m_is_real_goal/0x1/0xA7/
		/M/bool m_is_need_big_shaft/0x1/0xA8/
		/M/RaceSys::ETeamType m_team_type/0x4/0xAC/
		/M/RaceSys::KartInfo *m_kart_info/0x4/0xB0/
		/M/RaceSys::ECourseID m_course_id/0x4/0xB4/
		/M/RaceSys::LapRankChecker *m_lap_rank_checker/0x4/0xB8/
		/M/RaceSys::RaceDirector *m_race_director/0x4/0xBC/
		/M/u32 *m_frame/0x4/0xC0/
		/M/s32 m_calc_move_count/0x4/0xC4/
		/M/KartPartsCustomedParam *m_kart_parts_customed_param/0x4/0xC8/
		/M/f32 m_wing_offset_y/0x4/0xCC/
		/M/f32 m_ground_offset_y/0x4/0xD0/
		/M/f32 m_0xD4/0x4/0xD4/ // shaft_rotation?
		/M/f32 m_body_scale_y/0x4/0xD8/
		/M/Sound::SndActorKart *m_snd_actor_kart/0x4/0xDC/
	/END/
}