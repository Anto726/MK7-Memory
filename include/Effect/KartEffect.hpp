#pragma once
#include "../Object/Actor.hpp"

namespace Effect
{
    class KartEffect : Object::Actor
    {
    };
    static_assert(sizeof(KartEffect) == 0x8);
}