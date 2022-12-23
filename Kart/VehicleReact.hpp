#pragma once
#include "VehicleMove.hpp"

namespace Kart
{
	class VehicleReact : public VehicleMove
	{
	public:
		u8 m_0x1214[40];
	};
	static_assert(sizeof(VehicleReact) == 0x123C);
}