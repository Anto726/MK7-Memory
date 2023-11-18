#pragma once

#include "../types.hpp"

namespace Item
{
    class ItemObjBase
    {
    public:
        u8 m_0x0[344];
        Kart::InfoProxy *m_info_proxy;
        u8 m_0x15C[82];
        bool m_is_dropped;
    };
    static_assert(sizeof(ItemObjBase) == 0x1B0);
}