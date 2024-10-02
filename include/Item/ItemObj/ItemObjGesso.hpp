#pragma once

#include "ItemObjBanana.hpp"

#include <container/seadBuffer.h>

namespace Item
{
    class ItemObjGesso : public ItemObjBanana
    {
    public:
        u8 gap_0x20C[0x30];
        sead::Buffer<bool> m_other;
        u8 gap_0x244[0x8];
    };
    static_assert(sizeof(ItemObjGesso) == 0x24C);
}