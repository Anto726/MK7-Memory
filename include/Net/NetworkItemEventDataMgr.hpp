#pragma once

#include "../Item/eItemType.hpp"

namespace Net
{
    class NetworkItemEventDataMgr
    {
    public:
        enum class EEventType : u8
        {
            SelfMove = 2,
            InitUse = 9,
        };

        struct SlotData
        {
            u8 gap_0x0[0x4];
            Item::eItemType item_type;
            EEventType event_type;
            u8 gap_0x6[0x2];
            u8 player_id;
        };
        static_assert(sizeof(SlotData) == 0x9);
    };
    static_assert(sizeof(NetworkItemEventDataMgr) == 0x1);
}