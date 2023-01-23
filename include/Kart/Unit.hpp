#pragma once
#include "../fwddec.hpp"

namespace Kart
{
	class Unit
	{
	public:
		u8 m_0x0[44];
		Vehicle *m_vehicle;
	};
	static_assert(sizeof(Unit) == 0x30);
}