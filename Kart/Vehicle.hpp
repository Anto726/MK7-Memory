#pragma once
#include "VehicleReact.hpp"

namespace Kart
{
	class Vehicle : public VehicleReact
	{
	public:
		u8 m_0x123C[1192];
	};
	static_assert(sizeof(Vehicle) == 0x16E4);
}