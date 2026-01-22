#pragma once

#include "../types.hpp"

#include <random/seadRandom.h>

BEGIN_NAMESPACE(Utility)
{
    class Random
    {
    public:
        virtual ~Random() = default;

        sead::Random m_random;
        s32 m_tick;
    };
    static_assert(sizeof(Random) == 0x18);
}