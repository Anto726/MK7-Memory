#pragma once

#include "VehicleControlAI.hpp"

namespace Kart
{
	/START_CLASS/NAME@VehicleMove/SIZE@0x1214/BASE@VehicleControlAI/BSIZE@0xC28/
	public:
		struct StatusFlags
		{
			u32
				_0x1 				: 1,
				_0x2 				: 1,
			 	_0x4 				: 1,
			    _0x8 				: 1,
			    _0x10 				: 1,
			    jugem_recover 		: 1, // 0x20
			    jugem_recover_ai 	: 1, // 0x40
			    _0x80 				: 1,
			    _0x100 				: 1,
			    _0x200 				: 1,
			    _0x400 				: 1,
			    _0x800 				: 1,
			    _0x1000 			: 1,
			    _0x2000 			: 1,
			    _0x4000 			: 1,
			    _0x8000 			: 1,
			    accident_1 			: 1, // 0x10000
			    accident_2 			: 1, // 0x20000
			    _0x40000 			: 1,
			    _0x80000 			: 1,
			    _0x100000 			: 1,
			    _0x200000 			: 1,
			    killer 				: 1, // 0x400000
			    hang 				: 1, // 0x800000
			    tail 				: 1, // 0x1000000
			    battle_restart 		: 1, // 0x2000000
			    ground_camera 		: 1, // 0x4000000
			    vanish_start 		: 1, // 0x8000000
			    _0x10000000 		: 1,
			    _0x20000000 		: 1,
			    _0x40000000 		: 1,
			    _0x80000000 		: 1;
		};
		static_assert(sizeof(StatusFlags) == 0x4);

		/M/StatusFlags m_status_flags/0x4/0xC30/
		/M/sead::Vector3f m_front_pitch/0xC/0xD6C/
		/M/s32 m_dokan_warp/0x4/0xDA8/
		/M/float m_miniturbo_charge/0x4/0xF08/
		/M/float m_yaw_strength/0x4/0xF24/
		/M/float m_forward_speed/0x4/0xF2C/
		/M/s32 m_boost_frames/0x4/0xF9C/
		/M/s32 m_draft_frames/0x4/0xFD8/
		/M/s32 m_trick_frames/0x4/0xFF0/
		/M/s32 m_star_frames/0x4/0xFF4/
		/M/s32 m_ink_frames/0x4/0xFF8/
		/M/s32 m_stun_frames/0x4/0xFFC/
		/M/s32 m_thunder_frames/0x4/0x1000/
		/M/s32 m_press_frames/0x4/0x1004/
		/M/float m_press_size/0x4/0x1014/
		/M/s32 m_invincibility_frames/0x4/0x102C/
		/M/float m_speed_max_forward_land_base/0x4/0x1054/
	/END/
}