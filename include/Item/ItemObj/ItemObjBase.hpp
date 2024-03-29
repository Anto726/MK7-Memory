#pragma once

#include "../../forward.hpp"

namespace Item
{
    class ItemObjBase
    {
    public:
        u8 gap_0x0[344];
        Kart::InfoProxy *m_info_proxy;
        u8 gap_0x15C[82];
        bool m_is_dropped;
        u8 gap_0x1AF[73];
    };
    static_assert(sizeof(ItemObjBase) == 0x1F8);
}