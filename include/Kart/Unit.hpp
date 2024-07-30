#pragma once

#include "../forward.hpp"
#include "../types.hpp"

namespace Kart
{
	class Unit
	{
	public:
		u8 gap_0x0[0x2C];
		Vehicle *m_vehicle;
		u8 gap_0x30[0x3D0];
	};
	static_assert(sizeof(Unit) == 0x400);
}