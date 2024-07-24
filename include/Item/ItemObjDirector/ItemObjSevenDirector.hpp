#pragma once

#include "ItemObjDirectorBase.hpp"

namespace Item
{
    class ItemObjSevenDirector : public ItemObjDirectorBase
    {
    public:
        u8 gap_0xBC[0x28];
    };
    static_assert(sizeof(ItemObjSevenDirector) == 0xE4);
}