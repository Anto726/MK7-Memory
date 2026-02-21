#pragma once

#include "../types.hpp"

#include <prim/seadDelegate.h>

BEGIN_NAMESPACE(UI)
{
    // TODO: I'm not sure if this belongs here
    enum class EKeyID : u32
    {
    };

    /START_STRUCT/NAME@KeyItem/SIZE@0x1C/
        KeyItem();
        void manipulate();
        void reset();

        /M/bool m_0x0/0x1/0x0/
        /M/s32 m_0x4/0x4/0x4/
        /M/s32 m_0x8/0x4/0x8/
        /M/u32 m_button/0x4/0xc/
        /M/sead::Delegate<void *> *m_handler/0x4/0x10/
        /M/sead::Delegate<void *> *m_key_handler/0x4/0x14/
        /M/bool m_0x18/0x1/0x18/
    /END/
}