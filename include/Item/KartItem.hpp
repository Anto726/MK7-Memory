#pragma once

#include "../types.hpp"

#include "eItemSlot.hpp"

#include "../Kart/InfoProxy.hpp"
#include "../Kart/Vehicle.hpp"

namespace Item
{
	class KartItem
	{
	public:
		void _setStockItem(eItemSlot item)
		{
			u32 amount;

			m_item = item;

			if (item == eItemSlot::Kinoko3)
				amount = 3;
			else
				amount = 1;

			m_item_amount = amount;
		}

	public:
		inline bool isMaster() const { return m_info_proxy->m_vehicle->m_is_master; }
        inline bool isNetRecv() const { return m_info_proxy->m_vehicle->m_is_net_recv; }
        inline bool isNetSend() const { return m_info_proxy->m_vehicle->m_is_net_send; }

	public:
		u8 gap_0x0[44];
        Kart::InfoProxy *m_info_proxy;
		u8 gap_0x30[4];
		ItemSlot *m_item_slot;
		eItemSlot m_item;
  		u32 m_item_amount;
	};
	static_assert(sizeof(KartItem) == 0x40);
}