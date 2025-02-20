#pragma once

#include "../Item/eItemType.hpp"

namespace Net
{
    /START_CLASS/NAME@NetworkItemEventDataMgr/SIZE@0x1/
    public:
        enum class EEventType : u8
        {
            SelfMove = 2,
            InitUse = 9,
        };

        /START_STRUCT/NAME@SlotData/SIZE@0x9/
            /M/Item::eItemType item_type/0x1/0x4/
            /M/EEventType event_type/0x1/0x5/
            /M/u8 player_id/0x1/0x8/
        /END/
    /END/
}