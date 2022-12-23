#pragma once
#include "VehicleControl.hpp"

namespace Kart
{
	class VehicleControlNet : public VehicleControl
	{
	public:
		u8 m_0x11C[2764];
	};
	static_assert(sizeof(VehicleControlNet) == 0xBE8);
}