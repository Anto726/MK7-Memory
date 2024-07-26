#pragma once

#include "ItemObjBase.hpp"

namespace Item
{
    class ItemObjKiller : public ItemObjBase {};
    static_assert(sizeof(ItemObjKiller) == 0x1F8);
}