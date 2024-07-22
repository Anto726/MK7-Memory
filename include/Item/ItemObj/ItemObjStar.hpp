#pragma once

#include "ItemObjBase.hpp"

namespace Item
{
    class ItemObjStar : public ItemObjBase {};
    static_assert(sizeof(ItemObjStar) == 0x1F8);
}