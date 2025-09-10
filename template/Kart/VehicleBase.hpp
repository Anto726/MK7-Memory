#pragma once

#include "Rigid.hpp"

namespace Sound {
	class SndActorKart;
}

namespace Kart
{
	/START_CLASS/NAME@VehicleBase/SIZE@0xE0/BASE@Rigid/BSIZE@0x74/
	public:
		/M/Director *m_director/0x4/0x78/
		/M/void* m_driver/0x4/0x7C/
		/M/s32 m_player_id/0x4/0x84/
		/M/s32 m_driver_id/0x4/0x88/
		/M/s32 m_body_id/0x4/0x8C/
		/M/s32 m_tire_id/0x4/0x90/
		/M/s32 m_wing_id/0x4/0x94/
		/M/bool m_is_master/0x1/0x98/
		/M/bool m_is_net_send/0x1/0x9D/
		/M/bool m_is_net_recv/0x1/0x9E/
		/M/bool m_is_intangible/0x1/0xA3/
		/M/bool m_is_fake_goal/0x1/0xA6/
		/M/Sound::SndActorKart* m_snd_actor_kart/0x4/0xDC/
	/END/
}