#pragma once

#include "../types.hpp"
#include "../forward.hpp"
#include "../versions.h"

#include "BaseMenuViewControl.hpp"

BEGIN_NAMESPACE(UI)
{
#if GAME_VERSION != ALL_DLP
    // NOTE: The name is made up
    /START_CLASS/NAME@ScrollListBarBase/SIZE@0xB0/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /M/ScrollListFrame *m_frame/0x4/0xa8/
        /M/s32 m_option/0x4/0xac/
    /END/
#endif
}