#pragma once

#include "../forward.hpp"

#include <container/seadBuffer.h>

namespace Kart
{
    class Director
    {
    public:
        u8 gap_0x0[40];
        sead::Buffer<Unit *> m_units;
    };
    static_assert(sizeof(Director) == 0x30);
}