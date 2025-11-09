#pragma once

#include "VehicleBase.hpp"

BEGIN_NAMESPACE(Kart)
{
	/START_CLASS/NAME@VehicleControl/SIZE@0x11C/BASE@VehicleBase/BSIZE@0xDC/
	public:
		struct Controls
		{
			u32
				accelerate_forwards 	: 1, // 0x1
				accelerate_backwards 	: 1, // 0x2
				hop 					: 1; // 0x4
		};
		static_assert(sizeof(Controls) == 0x4);

		/M/Sound::SndActorKart *m_snd_actor_kart/0x4/0xDC/
		/M/Controls m_controls/0x4/0xFC/
		/M/float m_cpad_x/0x4/0x100/
		/M/float m_cpad_y/0x4/0x108/
	/END/
}