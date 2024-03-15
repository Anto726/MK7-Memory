#pragma once

#include "VehicleControlAI.hpp"

namespace Kart
{
	class VehicleMove : public VehicleControlAI
	{
	public:
		u8 gap_0xC28[736];
		float m_miniturbo_charge;
		u8 gap_0xF0C[0x20];
		float m_forward_speed;
		u8 gap_0xF30[0xC4];
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