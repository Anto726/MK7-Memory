#pragma once

#include "VehicleBase.hpp"

namespace Kart
{
	class VehicleControl : public VehicleBase
	{
	public:
		struct Controls
		{
			u32 accelerate_forwards 	: 1; // 0x1
			u32 accelerate_backwards 	: 1; // 0x2
			u32 hop 					: 1; // 0x4
		};
		static_assert(sizeof(Controls) == 0x4);

		u8 gap_0xDC[0x20];
		Controls m_controls;
		u8 gap_0x100[0x1C];
	};
	static_assert(sizeof(VehicleControl) == 0x11C);
}