#pragma once

#include "VehicleControlAI.hpp"

namespace Kart
{
	class VehicleMove : public VehicleControlAI
	{
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

		u8 gap_0xC28[0x8];
		StatusFlags m_status_flags;
		u8 gap_0xC34[0x138];
		sead::Vector3f m_front_pitch;
		u8 gap_0xD78[0x30];
		s32 m_dokan_warp;
		u8 gap_0xDAC[0x15C];
		float m_miniturbo_charge;
		u8 gap_0xF0C[0x18];
		float m_yaw_strength;
		u8 gap_0xF28[0x4];
		float m_forward_speed;
		u8 gap_0xF30[0x6C];
		s32 m_boost_frames;
		u8 gap_0xFA0[0x38];
		s32 m_draft_frames;
		u8 gap_0xFDC[0x14];
		s32 m_trick_frames;
		s32 m_star_frames;
		s32 m_ink_frames;
		s32 m_stun_frames;
		s32 m_thunder_frames;
		s32 m_press_frames;
		u8 gap_0x1008[12];
		float m_press_size;
		u8 gap_0x1018[20];
		s32 m_invincibility_frames;
		u8 gap_0x1030[0x24];
		float m_speed_max_forward_land_base;
		u8 gap_0x1058[0x1BC];
	};
	static_assert(sizeof(VehicleMove) == 0x1214);
}