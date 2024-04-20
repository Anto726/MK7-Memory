#pragma once

#include "ItemObjBase.hpp"

namespace Item
{
    class ItemObjFlower : public ItemObjBase
    {
    public:
        u8 gap_0x1F8[0x18];
    };
    static_assert(sizeof(ItemObjFlower) == 0x210);
}