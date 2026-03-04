#pragma once

#include "../Object/Actor.hpp"
#include "../types.hpp"

#include <math/seadVector.h>

namespace sead {
    using Vector2s = Vector2<s16>;
}

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@ControllerBase/SIZE@0x6C/BASE@Object::Actor/BSIZE@0x8/
    public:
        /M/bool m_touch_screen_held/0x1/0x10/
        /M/bool m_touch_screen_pressed/0x1/0x11/
        /M/sead::Vector2s m_touch_input/0x4/0x14/
    /END/
}
