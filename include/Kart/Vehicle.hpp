#pragma once

#include "VehicleReact.hpp"

namespace Kart
{
	class Vehicle : public VehicleReact
	{
	public:
		u8 gap_0x123C[8];
		s32 m_respawn_frames;
		u8 gap_0x1248[1180];
	};
	static_assert(sizeof(Vehicle) == 0x16E4);
}