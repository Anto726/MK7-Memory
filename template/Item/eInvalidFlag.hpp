#pragma once

#include "../types.hpp"

#include "eItemSlot.hpp"

BEGIN_NAMESPACE(Item)
{
    enum class eInvalidFlag : u32
    {
        Banana = ENUM_BIT(eItemSlot::Banana),
        KouraG = ENUM_BIT(eItemSlot::KouraG),
        KouraR = ENUM_BIT(eItemSlot::KouraR),
        Kinoko = ENUM_BIT(eItemSlot::Kinoko),
        Bomhei = ENUM_BIT(eItemSlot::Bomhei),
        Gesso = ENUM_BIT(eItemSlot::Gesso),
        KouraB = ENUM_BIT(eItemSlot::KouraB),
        Kinoko3 = ENUM_BIT(eItemSlot::Kinoko3),
        Star = ENUM_BIT(eItemSlot::Star),
        Killer = ENUM_BIT(eItemSlot::Killer),
        Thunder = ENUM_BIT(eItemSlot::Thunder),
        KinokoP = ENUM_BIT(eItemSlot::KinokoP),
        Flower = ENUM_BIT(eItemSlot::Flower),
        Tail = ENUM_BIT(eItemSlot::Tail),
        Seven = ENUM_BIT(eItemSlot::Seven),
        Test3 = ENUM_BIT(eItemSlot::Test3),
        Test4 = ENUM_BIT(eItemSlot::Test4),
        Banana3 = ENUM_BIT(eItemSlot::Banana3),
        KouraG3 = ENUM_BIT(eItemSlot::KouraG3),
        KouraR3 = ENUM_BIT(eItemSlot::KouraR3),
    };
}