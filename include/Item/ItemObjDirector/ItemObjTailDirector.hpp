#pragma once

#include "ItemObjDirectorBase.hpp"

namespace Item
{
    class ItemObjTailDirector : public ItemObjDirectorBase
    {
    };
    static_assert(sizeof(ItemObjTailDirector) == 0xBC);
}