#pragma once

#include "../types.hpp"

#include <limits>
#include <type_traits>

BEGIN_NAMESPACE(Item)
{
    enum class eItemType : u8
	{
        KouraG,    // Green Shell
        KouraR,    // Red Shell
        Banana,    // Banana
        Kinoko,    // Mushroom
        Star,      // Star
        KouraB,    // Blue Shell
        Thunder,   // Lightning
        FakeBox,   // Test3
        KinokoP,   // Golden Mushroom
        Bomhei,    // Bob-omb
        Gesso,     // Blooper
        BigKinoko, // Test4
        Killer,    // Bullet Bill
        Flower,    // Fire Flower
        Tail,      // Super Leaf
        Seven,     // Lucky Seven
        MAX,
        INVALID = std::numeric_limits<std::underlying_type_t<eItemType>>::max(),
    };
}