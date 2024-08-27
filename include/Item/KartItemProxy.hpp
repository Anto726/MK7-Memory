#pragma once

#include "../forward.hpp"

namespace Item
{
    class KartItemProxy
    {
    public:
        KartItem *m_kart_item;
    };
    static_assert(sizeof(KartItemProxy) == 0x4);
}