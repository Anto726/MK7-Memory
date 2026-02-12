#pragma once

#include "../types.hpp"

#include "ItemDirector.hpp"
#include "ItemSlot.hpp"
#include "KartItem.hpp"

BEGIN_NAMESPACE(Item)
{
    /START_CLASS/NAME@KartItemProxy/SIZE@0x4/
    public:
        KartItemProxy(s32 index) : m_kart_item(GetDirector()->m_kart_items.at(index)) {}

        auto getCurrentID_Slot() const { return m_kart_item->m_item_slot->m_current_id; }
        auto getEquipItem() const { return m_kart_item->m_equip_item; }
        auto getEquipNum() const { return m_kart_item->m_equip_item_amount; }
        auto getNextID_Slot() const { return m_kart_item->m_item_slot->m_next_id; }
        auto getRatio_Slot() const { return m_kart_item->m_item_slot->m_ratio; }
        auto getStockItem() const { return m_kart_item->m_stock_item; }
        auto isEmptyTrig_Slot() const { return m_kart_item->m_item_slot->isEmptyTrig(); }
        auto isEquip() const { return m_kart_item->m_equip_type == Item::eEquipType::Hang || m_kart_item->m_equip_type == Item::eEquipType::Multi; }
        auto isEquip_Hang() const { return m_kart_item->m_equip_type == Item::eEquipType::Hang; }
        auto isEquip_Multi() const { return m_kart_item->m_equip_type == Item::eEquipType::Multi; }
        auto isSpin_Slot() const { return m_kart_item->m_item_slot->m_spinning_frames >= 0; }
        auto isStock() const { return m_kart_item->m_item_slot->isStock(); }
        auto isStopTrig_Slot() const { return m_kart_item->m_item_slot->isStopTrig(); }
        auto isValidQuickStop_Slot() const { return m_kart_item->m_item_slot->isValidQuickStop(); }

        /M/KartItem *m_kart_item/0x4/0x0/
    /END/
}