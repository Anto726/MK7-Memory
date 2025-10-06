#pragma once

#include "../types.hpp"

#include <limits>
#include <type_traits>

BEGIN_NAMESPACE(System)
{
    enum class SceneID : u8
    {
        Root,
        Boot,
        Menu,
        Race,
        Trophy,
        Thankyou,
        Ending,
        Demo,
        INVALID = std::numeric_limits<std::underlying_type_t<SceneID>>::max(),
    };
}