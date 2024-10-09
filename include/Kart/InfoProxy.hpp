#pragma once

#include "Director.hpp"
#include "../System/RootSystem.hpp"

namespace Kart
{
	class InfoProxy
	{
	public:
		InfoProxy(s32 index) : m_vehicle(System::g_root_system->get_kart_director()->getKart(index)) {}

		Vehicle *m_vehicle;
	};
	static_assert(sizeof(InfoProxy) == 0x4);
}