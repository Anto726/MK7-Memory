#pragma once

#include "ItemObjDirectorBase.hpp"

namespace Item
{
    class ItemObjStarDirector : public ItemObjDirectorBase
    {
    };
    static_assert(sizeof(ItemObjStarDirector) == 0xBC);
}