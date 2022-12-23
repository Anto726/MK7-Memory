#pragma once
#include <types.hpp>

namespace Kart
{
	class Rigid
	{
	public:
		u8 m_0x0[116];
	};
	static_assert(sizeof(Rigid) == 0x74);
}