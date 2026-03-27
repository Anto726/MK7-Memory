#pragma once

#include "../types.hpp"

#include <prim/seadSafeString.h>

BEGIN_NAMESPACE(UI)
{
    /START_STRUCT/NAME@MessageString/SIZE@0x4/
        /M/char16_t *m_string/0x4/0x0/

        MessageString() : m_string(nullptr) {}
        MessageString(char16_t *str) : m_string(str) {}
    /END/
}