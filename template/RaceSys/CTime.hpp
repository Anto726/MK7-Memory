#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@CTime/SIZE@0xC/VTABLE@True/
    public:
        CTime() : CTime(999, 59, 999) {}
        inline CTime(u16 minutes, u8 seconds, u16 milliseconds) : m_minutes(minutes), m_seconds(seconds), m_milliseconds(milliseconds) {}

        virtual ~CTime() = default;

        /M/u16 m_minutes/0x2/0x4/
        /M/u8 m_seconds/0x2/0x6/
        /M/u16 m_milliseconds/0x4/0x8/
    /END/
}