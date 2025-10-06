#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Enemy)
{
    // Note: The name of this enum is made up.
    enum class EAILevel : u32
    {
        AI_Easy,
        AI_Normal,
        AI_Hard
    };
}