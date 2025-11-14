#pragma once

#include "../types.hpp"

#include "NetworkDataManager.hpp"

#include "../Item/eItemSlot.hpp"
#include "../Item/eItemType.hpp"

#include "../Object/Actor.hpp"

BEGIN_NAMESPACE(Net)
{
    /START_CLASS/NAME@NetworkItemSlotMgr/SIZE@0x264/BASE@Object::Actor/BSIZE@0x8/
    public:
        enum class EEquipItemState : u32
        {
            
        };

        enum class EStockItemState : u32
        {
            
        };

        /START_STRUCT/NAME@Node/SIZE@0x24/
            /M/u8 m_tick/0x1/0x0/
            /M/Item::eItemSlot m_stock_item/0x1/0x1/
            /M/Item::eItemSlot m_equip_item/0x1/0x2/
            /M/u8 m_stock_item_state/0x1/0x3/
            /M/u8 m_equip_item_state/0x1/0x4/
            /M/u8 m_player_bit/0x1/0x5/
            /M/u8 m_equip_items_used/0x1/0x6/
            /M/u8 m_0x7[8]/0x8/0x7/ // takeover frames related?
        /END/

        /START_STRUCT/NAME@Buffer/SIZE@0x254/BASE@NetworkDataManager<Node>/BSIZE@0x71/
            /M/Node m_nodes[8]/0x120/0x71/
        /END/

        /M/Buffer m_buffer/0x254/0x8/
    /END/
}