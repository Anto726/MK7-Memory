#pragma once

#include "ItemObjKouraR.hpp"

namespace Item
{
    class ItemObjKouraB : public ItemObjKouraR
    {
    public:
        u8 gap_0x2C4[0x44];
    };
    static_assert(sizeof(ItemObjKouraB) == 0x308);
}