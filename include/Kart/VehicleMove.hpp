#pragma once
#include "VehicleControlAI.hpp"

namespace Kart
{
	class VehicleMove : public VehicleControlAI
	{
	public:
		u8 m_0xC28[1516];
	};
	static_assert(sizeof(VehicleMove) == 0x1214);
}