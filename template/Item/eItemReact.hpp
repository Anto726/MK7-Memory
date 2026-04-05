#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Item)
{
	enum class eItemReact : u32
	{
		None,
        Break,
        Reflect,
        ScaleAnim,
        Vanish,
        SelfMove,
	};
}