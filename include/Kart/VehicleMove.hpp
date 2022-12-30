#pragma once
#include "VehicleControlAI.hpp"

namespace Kart
{
	class VehicleMove : public VehicleControlAI
	{
	public:
		u8 m_0xC28[1028];
		s32 m_invincibility_frames;
		u8 m_0x1030[484];
	};
	static_assert(sizeof(VehicleMove) == 0x1214);
}