#pragma once

#include "Director.hpp"
#include "Vehicle.hpp"

namespace Kart
{
	class InfoProxy
	{
	public:
		InfoProxy(s32 index) : m_vehicle(GetDirector()->getKart(index)) {}

		inline auto isMaster() const { return m_vehicle->m_is_master; }
        inline auto isNetRecv() const { return m_vehicle->m_is_net_recv; }
        inline auto isNetSend() const { return m_vehicle->m_is_net_send; }

		Vehicle *m_vehicle;
	};
	static_assert(sizeof(InfoProxy) == 0x4);
}