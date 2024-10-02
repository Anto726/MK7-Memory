#pragma once

#include "ItemObjBase.hpp"

namespace Item
{
    class ItemObjBanana : public ItemObjBase
    {
    public:
        u8 gap_0x1F8[0x14];
    };
    static_assert(sizeof(ItemObjBanana) == 0x20C);
}