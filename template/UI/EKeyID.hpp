#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(UI)
{
    enum EKeyID: u32 {
                KEY_A          = 0x1,
                KEY_B          = 0x2,
                KEY_0x04      = 0x4,
                KEY_X          = 0x8,
                KEY_Y          = 0x10,
                KEY_0x20      = 0x20,
                _0x40          = 0x40,
                KEY_0x80      = 0x80,
                _0x100          = 0x100,
                _0x200          = 0x200,
                _0x400             = 0x400,
                KEY_START      = 0x800,
                KEY_SELECT      = 0x1000,
                KEY_L          = 0x2000,
                KEY_R          = 0x4000,
                _0x8000      = 0x8000,
                KEY_DPAD_UP  = 0x10000,
                KEY_DPAD_DOWN  = 0x20000,
                KEY_DPAD_LEFT  = 0x40000,
                KEY_DPAD_RIGHT  = 0x80000,
                KEY_CPAD_UP  = 0x100000,
                KEY_CPAD_DOWN  = 0x200000,
                KEY_CPAD_LEFT  = 0x400000,
                KEY_CPAD_RIGHT  = 0x800000,
                _0x1000000      = 0x1000000,
                _0x2000000      = 0x2000000,
                _0x4000000      = 0x4000000,
                _0x8000000      = 0x8000000,
                _0x10000000  = 0x10000000,
                _0x20000000  = 0x20000000,
                _0x40000000  = 0x40000000,
                _0x80000000  = 0x80000000
    };
}