#pragma once

#include "../types.hpp"

#include "eEquipType.hpp"
#include "eItemSlot.hpp"

#include "../Kart/InfoProxy.hpp"
#include "../Kart/Vehicle.hpp"

namespace Item
{
	class KartItem
	{
	public:
		void setEquipInfo(eItemSlot item, eEquipType type, int amount, bool increment)
		{
			m_equip_item = item;
			m_equip_type = type;
			m_equip_item_amount = amount;

			if (increment)
				++m_equip_items_used;
		}

		void _setStockItem(eItemSlot item)
		{
			u32 amount;

			m_stock_item = item;

			if (item == eItemSlot::Kinoko3)
				amount = 3;
			else
				amount = 1;

			m_stock_item_amount = amount;
		}

		inline bool isMaster() const { return m_info_proxy->m_vehicle->m_is_master; }
        inline bool isNetRecv() const { return m_info_proxy->m_vehicle->m_is_net_recv; }
        inline bool isNetSend() const { return m_info_proxy->m_vehicle->m_is_net_send; }

		u8 gap_0x0[0x28];
		s32 m_player_id;
        Kart::InfoProxy *m_info_proxy;
		u8 gap_0x30[0x4];
 		ItemSlot *m_item_slot;
		eItemSlot m_stock_item;
  		u32 m_stock_item_amount;
		eItemSlot m_equip_item;
		eEquipType m_equip_type;
		u32 m_equip_item_amount;
		u32 m_equip_items_used;
		u8 gap_0x4C[0x14];
 	};
	static_assert(sizeof(KartItem) == 0x60);
}