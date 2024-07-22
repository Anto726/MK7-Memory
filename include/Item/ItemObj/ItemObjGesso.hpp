#pragma once

#include "ItemObjBase.hpp"

namespace Item
{
    class ItemObjGesso : public ItemObjBase
    {
    public:
        u8 gap_0x1F8[0x54];
    };
    static_assert(sizeof(ItemObjGesso) == 0x24C);
}