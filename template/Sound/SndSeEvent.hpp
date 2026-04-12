#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Sound)
{
    /START_CLASS/NAME@SndSeEvent/SIZE@0x2c/
    public:
        enum class EEvent : u8
        {
            SE_SYS_CANCEL_L = 0x09,
            SE_SYS_DECIDE_M_8A = 0x8A
        };
    /END/
}