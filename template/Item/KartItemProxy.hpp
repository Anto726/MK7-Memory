#pragma once

#include "../types.hpp"

#include "ItemDirector.hpp"

BEGIN_NAMESPACE(Item)
{
    /START_CLASS/NAME@KartItemProxy/SIZE@0x4/
    public:
        KartItemProxy(s32 index) : m_kart_item(GetDirector()->m_kart_items.at(index)) {}

        /M/KartItem *m_kart_item/0x4/0x0/
    /END/
}