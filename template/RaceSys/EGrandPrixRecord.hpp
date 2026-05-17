#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    enum class EGrandPrixRecord : u8
    {
        NO_RECORD,
        RECORD_1,   // Unused. Likely record "A"
        RECORD_2,   // Unused. Likely record "B"
        RECORD_3,   // Unused. Likely record "C"
        RECORD_1_STAR,
        RECORD_2_STAR,
        RECORD_3_STAR
    };
}