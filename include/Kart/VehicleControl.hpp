#pragma once

#include "VehicleBase.hpp"

namespace Kart
{
	class VehicleControl : public VehicleBase
	{
	public:
		u8 gap_0xDC[64];
	};
	static_assert(sizeof(VehicleControl) == 0x11C);
}