#pragma once

#include "../types.hpp"

#define RATE_MIN     1
#define RATE_DEFAULT 1000
#define RATE_MAX     99999

BEGIN_NAMESPACE(RaceSys)
{
    /START_STRUCT/NAME@Rate/SIZE@0x4/
        f32 winTo(const Rate &, s32) const;
        f32 loseTo(const Rate &, s32) const;
        static f32 calcPointDiff(u32, s32); // Name is made up. 0x00257188 (VERSION_EUR_DLP)

        /M/u32 value/0x4/0x0/
    /END/
}
