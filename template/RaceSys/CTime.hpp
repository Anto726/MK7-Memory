#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@CTime/SIZE@0xC/VTABLE@True/
    public:
        virtual ~CTime() = default;

        /M/u16 m_minutes/0x2/0x4/
        /M/u8 m_seconds/0x1/0x6/
        /M/u16 m_milliseconds/0x2/0x8/
    /END/
}