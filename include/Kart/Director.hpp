#pragma once

#include "../forward.hpp"

#include <container/seadPtrArray.h>

namespace Kart
{
    class Director
    {
    public:
        u8 gap_0x0[0x24];
        sead::PtrArray<Unit> m_units;
        u8 gap_0x30[0x170];
    };
    static_assert(sizeof(Director) == 0x1A0);
}