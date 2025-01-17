#pragma once

#include "../Object/Actor.hpp"

#include "../types.hpp"

namespace Effect
{
    class KartEffect : public Object::Actor
    {
    public:
        u8 gap_0x8[0x82C];
    };
    static_assert(sizeof(KartEffect) == 0x834);
}