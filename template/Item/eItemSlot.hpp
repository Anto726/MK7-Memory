#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Item)
{
	// https://tcrf.net/Notes:Mario_Kart_7#Item_Slot_.28eItemSlot.29
	enum class eItemSlot : u8
	{
		Banana,  // Banana
		KouraG,  // Green Shell
		KouraR,  // Red Shell
		Kinoko,  // Mushroom
		Bomhei,  // Bob-omb
		Gesso,   // Blooper
		KouraB,  // Blue Shell
		Kinoko3, // Triple Mushrooms
		Star,    // Star
		Killer,  // Bullet Bill
		Thunder, // Lightning
		KinokoP, // Golden Mushroom
		Flower,  // Fire Flower
		Tail,    // Super Leaf
		Seven,   // Lucky Seven
		Test3,   // Test3
		Test4,   // Test4
		Banana3, // Triple Bananas
		KouraG3, // Triple Green Shells
		KouraR3, // Triple Red Shells

		// NOTE: hidden, used for item spy icons
		Kinoko2, // Double Mushrooms
		Box,     // Item Box
		Flag,    // Checkered Flag

		Empty = TYPE_MAX(eItemSlot),

		MAX = KouraR3 + 1,
		EXTRA = Flag + 1,
	};
}