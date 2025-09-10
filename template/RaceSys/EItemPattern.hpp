#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    enum class EItemPattern : u32
    {
        All,
        Kinoko, // Mushrooms
        Koura,  // Shells
        Banana, // Bananas
        Bomhei, // Bob-ombs
        None,   
    };
}