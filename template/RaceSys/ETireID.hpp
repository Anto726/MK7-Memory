#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    enum class ETireID : u32
    {
        Standard,
        Monster,
        Roller,
        Slick,
        Slim,
        Sponge,
        GoldTires,
        Wood,
        RedMonster,
        Mushroom,
        MAX,
        INVALID,
    };
}