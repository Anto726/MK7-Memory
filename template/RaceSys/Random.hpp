#pragma once

#include "../types.hpp"

#include "../Utility/Random.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    class Random
    {
        Utility::Random m_randoms[5];
        u32 m_seed;
    };
    static_assert(sizeof(Random) == 0x7C);
}