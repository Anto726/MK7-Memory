#pragma once

#include "VehicleBase.hpp"

namespace Kart
{
	class VehicleControl : public VehicleBase
	{
	public:
		struct Controls
		{
			u32
				accelerate_forwards 	: 1, // 0x1
				accelerate_backwards 	: 1, // 0x2
				hop 					: 1; // 0x4
		};
		static_assert(sizeof(Controls) == 0x4);

		u8 gap_0xDC[0x20];
		Controls m_controls;
		float m_cpad_x;
		u8 gap_0x104[0x4];
		float m_cpad_y;
		u8 gap_0x10C[0x10];
	};
	static_assert(sizeof(VehicleControl) == 0x11C);
}