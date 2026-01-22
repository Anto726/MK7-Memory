#pragma once

#include "../types.hpp"

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
        MAX,
        INVALID = TYPE_MAX(SceneID),
    };
}