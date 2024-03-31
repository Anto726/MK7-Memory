#pragma once

#include "ItemObjBase.hpp"

namespace Item
{
    class ItemObjKouraG : public ItemObjBase
    {
    public:
        u8 gap_0x1F8[0x44];
    };
    static_assert(sizeof(ItemObjKouraG) == 0x23C);
}