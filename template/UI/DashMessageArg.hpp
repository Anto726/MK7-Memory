#pragma once

#include "MessageString.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_STRUCT/NAME@MessageArg/SIZE@0x128/VTABLE@True/
        virtual void _0x0() = 0;

        /M/MessageString m_message/0x8/0x4/
        /M/s32 m_message_char_count/0x4/0xC/
        /M/char16 m_message_buffer[128]/0x100/0x10/
        /M/s32 m_numbers[2]/0x8/0x110/
    /END/

    /START_STRUCT/NAME@DashMessageArg/SIZE@0x128/BASE@MessageArg/BSIZE@0x128/VTABLE@True/
    /END/
}