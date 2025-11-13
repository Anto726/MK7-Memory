#pragma once

#include "../types.hpp"
#include "../forward.hpp"

#include "eEquipType.hpp"
#include "eItemSlot.hpp"

#include "../Kart/InfoProxy.hpp"
#include "../Kart/Vehicle.hpp"

BEGIN_NAMESPACE(Item)
{
	/START_CLASS/NAME@KartItem/SIZE@0x60/
	public:
		void decreaseEquipNum()
		{
			if (--m_equip_item_amount == 0)
			{
				m_equip_item = eItemSlot::Empty;
				m_equip_type = eEquipType::None;
			}
		}

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
			m_stock_item = item;
			m_stock_item_amount = (item == eItemSlot::Kinoko3 ? 3 : 1);
		}

		inline bool isMaster() const { return m_info_proxy->isMaster(); }
        inline bool isNetRecv() const { return m_info_proxy->isNetRecv(); }
        inline bool isNetSend() const { return m_info_proxy->isNetSend(); }

		/M/ItemDirector* m_item_director/0x4/0x4/
		/M/s32 m_player_id/0x4/0x28/
		/M/Kart::InfoProxy *m_info_proxy/0x4/0x2C/
		/M/bool m_was_cleared/0x1/0x30/
		/M/ItemSlot *m_item_slot/0x4/0x34/
		/M/eItemSlot m_stock_item/0x1/0x38/
		/M/u32 m_stock_item_amount/0x4/0x3C/
		/M/eItemSlot m_equip_item/0x1/0x40/
		/M/eEquipType m_equip_type/0x1/0x41/
		/M/u32 m_equip_item_amount/0x4/0x44/
		/M/u32 m_equip_items_used/0x4/0x48/
		/M/s32 m_fire_flower_count/0x4/0x4C/
		/M/s32 m_fire_flower_timer/0x4/0x50/
		/M/s32 m_golden_mushroom_timer/0x4/0x54/
		/M/bool m_is_use_star_icon/0x1/0x58/
		/M/bool m_is_use_bullet_bill_icon/0x1/0x59/
		/M/bool m_is_stock_fire_flower/0x1/0x5A/
		/M/bool m_is_use_star/0x1/0x5B/
		/M/bool m_is_use_bullet_bill/0x1/0x5C/
		/M/bool m_is_have_kinoko3/0x1/0x5D/
		/M/bool m_is_have_kinoko2/0x1/0x5E/
 	/END/
}