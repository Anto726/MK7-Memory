#pragma once

#include "../types.hpp"

#include "BaseFastControl.hpp"
#include "BaseMenuButtonControl.hpp"

#include <prim/seadDelegate.h>

BEGIN_NAMESPACE(UI)
{
    /START_STRUCT/NAME@CursorItem/SIZE@0x30/
        enum class ECursorEvent : u32
        {
            EVENT_SELECT_HANDLER_BASE_ON,   // selectHandlerBaseOn
            EVENT_SELECT_HANDLER_BASE_OFF,  // selectHandlerBaseOff
            EVENT_KEY_HANDLER_CURSOR_A,     // keyHandlerA
            EVENT_KEY_HANDLER_CURSOR        // keyHandlerCursor
        };

        CursorItem(BaseFastControl *);
        bool isSelect();
        void manipulate();
        void runHandler(ECursorEvent, s32);
        void setCursor();
        void setCursorOff(bool);

        /M/CursorItem **m_0x0/0x4/0x0/
        /M/void *m_manipulator/0x4/0x4/
        /M/CursorItem *m_0x8/0x4/0x8/
        /M/BaseFastControl *m_control/0x4/0xc/
        /M/u32 m_invoke_button/0x4/0x10/    // When this button is pressed, perform the action
        /M/bool m_is_enabled/0x4/0x14/      // If `true`, the user can select the item
        /M/f32 m_0x18/0x4/0x18/
        /M/f32 m_0x1c/0x4/0x1c/
        // TODO:
        // The first argument can also be `BaseMenuInputControl`
        // Perhaps both `BaseMenuButtonControl` and `BaseMenuInputControl` inherit from a common base?
        /M/sead::Delegate2<BaseMenuButtonControl *, s32, s32> *m_handlers[4]/0x10/0x20/  // See the `ECursorEvent` enum
    /END/
}