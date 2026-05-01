#pragma once

#include "../types.hpp"
#include "../versions.h"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@AppletLauncher/SIZE@0x44/VTABLE@True/
    public:
        using CriticalSection = u8 [0x1C]; // TODO: sead::CriticalSection CTR version in openEAD

        // Note: The name of this enum is made up.
        enum class EType : u32
        {
            HOME_BUTTON,
            POWER_BUTTON,
            MII_SELECT,
            KEYBOARD,
            EULA_ERROR,
#if GAME_VERSION == ALL_V11 || GAME_VERSION == ALL_V12
            UPDATE_PROMPT,
#endif

            TYPE_MAX
        };

        // Note: The name of this enum is made up.
        enum class EState : u8
        {
            NO_APPLET_OPENED,
            APPLET_LAUNCH,
            STATE_2,
            APPLET_STARTED
        };

        /START_STRUCT/NAME@LaunchParam/SIZE@0x18/
            /M/void *m_parameter/0x4/0x0/
            /M/u32 m_parameter_size/0x4/0x4/
            /M/void *m_result/0x4/0x8/
            /M/u32 m_result_size/0x4/0xc/
            /M/EType m_type/0x4/0x10/
            /M/void *m_out/0x4/0x14/    // For example, the keyboard applet stores the input text here.
        /END/

        virtual ~AppletLauncher();

        AppletLauncher();
        void calc();
        void calcStart();
        bool launchImpl(LaunchParam &);

        /M/LaunchParam m_launch_param/0x18/0x4/
        /M/EState m_state/0x1/0x1c/
        /U/void */0x4/0x20/
        /U/bool/0x1/0x24/
        /M/CriticalSection m_critical_section/0x1c/0x28/
    /END/
}
