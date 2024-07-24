#pragma once

#include "ItemObjDirectorBase.hpp"

namespace Item
{
    class ItemObjBananaDirector : public ItemObjDirectorBase
    {
    public:
        u8 gap_0xBC[0x80];
    };
    static_assert(sizeof(ItemObjBananaDirector) == 0x13C);
}