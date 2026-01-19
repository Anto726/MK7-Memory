#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Item)
{
    // https://tcrf.net/Notes:Mario_Kart_7#Item_Type_.28eItemType.29
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
        INVALID = TYPE_MAX(eItemType),
    };
}