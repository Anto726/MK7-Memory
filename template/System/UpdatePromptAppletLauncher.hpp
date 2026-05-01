#pragma once

#include "AppletLauncher.hpp"

BEGIN_NAMESPACE(System)
{
#if GAME_VERSION == ALL_V11 || GAME_VERSION == ALL_V12
    // NOTE: Name is made up
    /START_CLASS/NAME@UpdatePromptAppletLauncher/SIZE@0x44/BASE@AppletLauncher/BSIZE@0x44/VTABLE@True/
    public:
        // NOTE: Name is made up
        /START_STRUCT/NAME@Parameter/SIZE@0x1/
            /U/u8/0x1/0x0/
        /END/

        // NOTE: Name is made up
        /START_STRUCT/NAME@Result/SIZE@0x8/
            /U/u32/0x4/0x0/
            /U/s32/0x4/0x4/
        /END/

        void launch(Parameter *);
    /END/
#endif
}