#pragma once

#include "../types.hpp"
#include "../forward.hpp"

#include "BaseMenuButtonControl.hpp"
#include "CursorItem.hpp"

#include <prim/seadDelegate.h>
#include <math/seadVector.h>
#include <nw/lyt/TextBox.hpp> //#include <nw/lyt/Bounding.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_STRUCT/NAME@TouchItem/SIZE@0x3C/
        enum ETouchEvent : u8
        {
            TOUCH_HANDLER_DOWN,
            TOUCH_HANDLER_UP,
            TOUCH_HANDLER_SLIDE_IN,
            TOUCH_HANDLER_SLIDE_OUT,
            TOUCH_HANDLER_CAPTURE_OUT,
            TOUCH_HANDLER_MAX
        };

        TouchItem();
        void manipulate();
        void runHandler(ETouchEvent, const sead::Vector2f &);
        void setCapture();
        void releaseCapture();
        void pushBounding(void * /* nw::lyt::Bounding * */);
        void reset();

        /M/bool m_has_capture/0x1/0x1/
        /M/s32 m_0x4/0x4/0x4/
        /M/Manipulator *m_manipulator/0x4/0x8/
        /M/CursorItem *m_cursor_item/0x4/0xc/
        /M/BaseMenuButtonControl *m_button/0x4/0x10/
        /M/sead::Delegate2<BaseMenuButtonControl *, s32, const sead::Vector2f &> *m_handlers[ETouchEvent::TOUCH_HANDLER_MAX]/0x14/0x14/  // See the `ETouchEvent` enum
        /M/sead::FixedPtrArray<nw::lyt::TextBox, 2> m_bounding_array/0x14/0x28/   // nw::lyt::Bounding
    /END/
}