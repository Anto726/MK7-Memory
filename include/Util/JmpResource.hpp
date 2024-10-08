#pragma once

#include "../types.hpp"

namespace Util
{
    class JmpResource
    {
    public:
        u8 gap_0x0[0x8];
        u32 m_magic;
        size_t m_accessor_num;
    };
    static_assert(sizeof(JmpResource) == 0x10);
}