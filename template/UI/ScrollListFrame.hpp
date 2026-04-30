#pragma once

#include "../types.hpp"
#include "../forward.hpp"
#include "../versions.h"

#include "BaseMenuInputControl.hpp"
#include "KeyItem.hpp"
#include "ScrollListBarBase.hpp"

#include <prim/seadDelegate.h>
#include <container/seadPtrArray.h>
#include <nw/lyt/Pane.hpp>
#include <nw/lyt/Bounding.hpp>

BEGIN_NAMESPACE(UI)
{
#if GAME_VERSION != ALL_DLP
    /START_CLASS/NAME@ScrollListFrame/SIZE@0x5F0/BASE@BaseMenuInputControl/BSIZE@0x40C/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~ScrollListFrame();
        virtual void onCreate(const Control::CreateArg *);
        virtual void keyHandler(s32, EKeyID);
        virtual void touchHandlerSlideOut(s32, const sead::Vector2f &);
        virtual void touchHandlerSlideIn(s32, const sead::Vector2f &);
        virtual void touchHandlerCaptureOut(s32, const sead::Vector2f &);

        ScrollListFrame();                                      // 0x00162f84 (VERSION_USA_REV1)
        void update();                                          // 0x0016175c (VERSION_USA_REV1)
        void attachControl(s32, const VisualControl &, f32);    // 0x00161514 (VERSION_USA_REV1)
        void onScroll(s32);                                     // 0x00161b08 (VERSION_USA_REV1)

        /M/s32 m_option/0x4/0x410/
        /M/s32 m_num_items/0x4/0x430/
        /M/sead::PtrArray<ScrollListBarBase> *m_bars/0x4/0x500/
        /M/nw::lyt::Pane *m_P_scroll_bar_00/0x4/0x504/
        /M/nw::lyt::Bounding *m_B_scroll/0x4/0x508/
        /M/nw::lyt::Pane *m_P_scroll_btn/0x4/0x50c/
        /M/nw::lyt::Pane *m_B_btn/0x4/0x510/
        /M/KeyItem m_on_scroll_up_key_item/0x1c/0x514/
        /M/KeyItem m_on_scroll_down_key_item/0x1c/0x530/
        /M/sead::Delegate1<ScrollListFrame, s32> m_on_scroll_delegate/0x10/0x54c/
    /END/
#endif
}