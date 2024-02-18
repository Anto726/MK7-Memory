#pragma once

#include "../types.hpp"

#include <limits>
#include <type_traits>

namespace Item
{
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
		MAX,
		Empty = std::numeric_limits<std::underlying_type_t<eItemSlot>>::max(),
	};
}