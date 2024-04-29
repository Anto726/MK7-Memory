#pragma once

#include "VehicleControlAI.hpp"

namespace Kart
{
	class VehicleMove : public VehicleControlAI
	{
	public:
		struct StatusFlags
		{
			u32 gap_0 : 22;
			u32 killer : 1;
			u32 gap_24 : 1;
			u32 tail : 1;
		};
		static_assert(sizeof(StatusFlags) == 0x4);

		u8 gap_0xC28[0x8];
		StatusFlags m_status_flags;
		u8 gap_0xC34[0x2D4];
		float m_miniturbo_charge;
		u8 gap_0xF0C[0x20];
		float m_forward_speed;
		u8 gap_0xF30[0xA8];
		s32 m_draft_frames;
		u8 gap_0xFDC[0x18];
		s32 m_star_frames;
		s32 m_ink_frames;
		s32 m_anim_frames;
		s32 m_thunder_frames;
		s32 m_press_frames;
		u8 gap_0x1008[12];
		float m_press_size;
		u8 gap_0x1018[20];
		s32 m_invincibility_frames;
		u8 gap_0x1030[484];
	};
	static_assert(sizeof(VehicleMove) == 0x1214);
}