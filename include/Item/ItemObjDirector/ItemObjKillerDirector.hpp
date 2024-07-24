#pragma once

#include "ItemObjDirectorBase.hpp"

namespace Item
{
    class ItemObjKillerDirector : public ItemObjDirectorBase
    {
    };
    static_assert(sizeof(ItemObjKillerDirector) == 0xBC);
}