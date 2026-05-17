#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    enum GrandPrixRecord : u32
    {
        NO_RECORD,
        RECORD_1,   // Unused. Maybe unused rank "C"?
        RECORD_2,   // Unused. Maybe unused rank "B"?
        RECORD_3,   // Unused. Maybe unused rank "A"?
        RECORD_1_STAR,
        RECORD_2_STAR,
        RECORD_3_STAR
    };

    /START_STRUCT/NAME@EGrandPrixRecord/SIZE@0x4/
        /M/s32 m_record/0x4/0x0/
    /END/
}