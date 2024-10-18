#pragma once

#include "ItemDirector.hpp"

namespace Item
{
    class KartItemProxy
    {
    public:
        KartItemProxy(s32 index) : m_kart_item(GetDirector()->m_kart_items.at(index)) {}

        KartItem *m_kart_item;
    };
    static_assert(sizeof(KartItemProxy) == 0x4);
}