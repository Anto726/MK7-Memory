#pragma once

#include "../Object/Actor.hpp"

namespace Effect
{
    class KartEffect : public Object::Actor
    {
    };
    static_assert(sizeof(KartEffect) == 0x8);
}