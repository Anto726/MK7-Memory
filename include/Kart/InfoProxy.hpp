#pragma once

#include "../forward.hpp"

namespace Kart
{
	class InfoProxy
	{
	public:
		Vehicle *m_vehicle;
	};
	static_assert(sizeof(InfoProxy) == 0x4);
}