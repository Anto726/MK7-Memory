#pragma once

#include "../types.hpp"

#include "Page.hpp"
#include "../UI/BaseFastControl.hpp"
#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@BasePage/SIZE@0x26C/BASE@Page/BSIZE@0x5C/VTABLE@True/
    public:
        BasePage();

        enum BasePageState {
            STATE_CLOSED,   // Menu is already closed
            STATE_OPEN,
            STATE_ENTER,    // Calls onMenuEnter()
            STATE_START,    // Or `STATE_CALC`. Calls onMenuStart()
            STATE_EXIT,     // Calls onMenuExit()
            STATE_COMPLETE  // Calls onMenuComplete()
        }; 

        /M/s32 m_on_back_return_code/0x4/0x5C/
        /M/u32 m_timer/0x4/0x60/
        /M/void *m_manipulator/0x4/0x64/ // UI::Manipulator *
        /M/bool m_set_item_to_all_manipulators/0x1/0x68/ // See `Sequence::BasePage::setCursorItem`
        /M/void *m_control_initializer/0x4/0x6C/ // UI::ControlInitializer *
        /M/u32 m_0x70/0x4/0x70/
        /M/u32 m_0x74/0x4/0x74/
        /M/s32 m_0x78/0x4/0x78/
        /M/s32 m_0x7C/0x4/0x7C/
        /M/u8 m_0x80/0x1/0x80/
        /M/u32 m_num_manipulators/0x4/0x84/
        /M/void **m_manipulators/0x4/0x88/  // UI::Manipulator **
        /M/u8 m_0x8C/0x1/0x8C/
        /M/bool m_0x8D/0x1/0x8D/
        /M/u8 m_0x8E/0x1/0x8E/
        /M/u8 m_menu_state/0x1/0x8F/    // See the `BasePageState` enum
        /M/s32 m_0x90/0x4/0x90/
        /M/s32 m_0x94/0x4/0x94/
        /M/s32 m_0x98/0x4/0x98/
        /M/s32 m_0x9C/0x4/0x9C/
        /M/s32 m_0xA0/0x4/0xA0/
        /M/s32 m_0xA4/0x4/0xA4/
        /M/s32 m_0xA8/0x4/0xA8/
        /M/sead::FixedPtrArray<UI::BaseFastControl *, 100> m_controls/0x19C/0xAC/
        // Controls that are common to most menus, such as the B button and others.
        // Controls created in the `Sequence::BasePage::setupMenuControl_*` functions are appended to this array
        /M/s32 m_num_menu_controls/0x4/0x248/
        /M/sead::FixedPtrArray<UI::BaseFastControl *, 15> *m_menu_controls/0x4/0x24C/
        // Controls are only put in here if `m_set_item_to_all_manipulators` is false?
        /M/sead::FixedPtrArray<UI::BaseFastControl *, 3> m_controls_outside_manipulator_array/0x18/0x250/
        /M/u8 m_0x268/0x1/0x268/
        /M/bool m_0x269/0x1/0x269/
    /END/
}