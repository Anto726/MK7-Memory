#pragma once

#include "../types.hpp"

#include "Director.hpp"
#include "Vehicle/Vehicle.hpp"

BEGIN_NAMESPACE(Kart)
{
	/START_CLASS/NAME@InfoProxy/SIZE@0x4/
	public:
		InfoProxy(s32 index) : m_vehicle(GetDirector()->getKart(index)) {}

		inline auto isMaster() const { return m_vehicle->m_is_master; }
        inline auto isNetRecv() const { return m_vehicle->m_is_net_recv; }
        inline auto isNetSend() const { return m_vehicle->m_is_net_send; }

		/M/Vehicle *m_vehicle/0x4/0x0/
	/END/
}