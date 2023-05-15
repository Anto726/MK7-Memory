#pragma once
#include "Actor.hpp"

namespace Object
{
    class ActorEngine : public Actor
    {
    };
    static_assert(sizeof(ActorEngine) == 0x8);
}