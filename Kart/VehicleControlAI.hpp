#pragma once
#include "VehicleControlNet.hpp"

namespace Kart
{
	class VehicleControlAI : public VehicleControlNet
	{
	public:
		u8 m_0xBE8[64];
	};
	static_assert(sizeof(VehicleControlAI) == 0xC28);
}