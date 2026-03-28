#pragma once

#include "../types.hpp"

#include <random/seadRandom.h>

BEGIN_NAMESPACE(Utility)
{
    /START_CLASS/NAME@Random/SIZE@0x18/VTABLE@True/
    public:
        virtual ~Random() = default;
        Random();

        /M/sead::Random m_random/0x10/0x4/
        /M/s32 m_tick/0x4/0x14/
    /END/
}