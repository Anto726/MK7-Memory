#pragma once

#include "ItemObjDirectorBase.hpp"

namespace Item
{
    class ItemObjKinokoDirector : public ItemObjDirectorBase
    {
    };
    static_assert(sizeof(ItemObjKinokoDirector) == 0xBC);
}