#pragma once

#include "Rigid.hpp"

#include "../RaceSys/EBodyID.hpp"
#include "../RaceSys/EDriverID.hpp"
#include "../RaceSys/ETireID.hpp"
#include "../RaceSys/EWingID.hpp"

#include "../forward.hpp"

BEGIN_NAMESPACE(Kart)
{
	/START_CLASS/NAME@VehicleBase/SIZE@0xE0/BASE@Rigid/BSIZE@0x74/
	public:
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
		/M/bool m_is_net_send/0x1/0x9D/
		/M/bool m_is_net_recv/0x1/0x9E/
		/M/bool m_is_intangible/0x1/0xA3/
		/M/bool m_is_fake_goal/0x1/0xA6/
		/M/RaceSys::LapRankChecker *m_lap_rank_checker/0x4/0xB8/
		/M/Sound::SndActorKart *m_snd_actor_kart/0x4/0xDC/
	/END/
}