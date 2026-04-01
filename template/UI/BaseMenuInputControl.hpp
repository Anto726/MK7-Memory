#pragma once

#include "../forward.hpp"
#include "BaseFastControl.hpp"
#include "KeyItem.hpp"
#include "ControlSight.hpp"
#include "CursorItem.hpp"
#include "TouchItem.hpp"

#include <prim/seadDelegate.h>
#include <prim/seadSafeString.hpp>
#include <math/seadVector.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@BaseMenuInputControl/SIZE@0x40C/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
    public:
        // Name is made up
        enum class ActiveHandlersInput : u32
        {
            DPAD_LEFT_RIGHT = 0x01,
            DPAD_UP_DOWN = 0x04,
            R = 0x08,
            X = 0x10,
            A_B = 0x20
        };

        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            CreateArg(): VisualControl::CreateArg() {}
        
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine () const; // 3
        /END/

        virtual ~BaseMenuInputControl(); // 2 (_sub_object), 3 (_deallocating)
        virtual void create(const Object::ArgumentObj *);
        virtual void reset();
        virtual void initTouchHandler();
        virtual void keyHandler(s32, EKeyID);
        virtual void keyHandlerCursor(s32, s32);
        virtual void touchHandlerDown(s32, const sead::Vector2f &);
        virtual void touchHandlerSlideOut(s32, const sead::Vector2f &);
        virtual void touchHandlerSlideIn(s32, const sead::Vector2f &);
        virtual void touchHandlerCaptureOut(s32, const sead::Vector2f &);
        virtual void touchHandlerUp(s32, const sead::Vector2f &);
        virtual void selectHandlerOn(s32, s32);
        virtual void selectHandlerOff(s32, s32);

        void changeAnim(s32, s32);
        void setValText(s32, u32);
        void initHandler();
        void updateValText();
        void setTouchHandler(s32, const sead::SafeString &);
        void selectHandlerBaseOn(s32, s32);
        void selectHandlerBaseOff(s32, s32);
        void touchHandlerBaseDown(s32, const sead::Vector2f &);
        void touchHandlerBaseSlideIn(s32, const sead::Vector2f &);
        void touchHandlerBaseSlideOut(s32, const sead::Vector2f &);
        void touchHandlerBaseCaptureOut(s32, const sead::Vector2f &);
        void up();
        void down();
        void setVal(s32, s32, s32);
        s32 mod(s32) const;
        BaseMenuInputControl();

        /M/s32 m_option/0x4/0x7c/
        /M/s32 m_0x80/0x4/0x80/
        /M/s32 m_num_options/0x4/0x84/
        /M/ControlSight::ElementHandle m_0x88[3]/0xc/0x88/
        /M/void *m_0x9c/0x4/0x9c/
        /M/ActiveHandlersInput m_active_handlers/0x4/0x120/
        /M/CursorItem m_cursor_item/0x30/0x124/
        /M/TouchItem m_capture/0x3c/0x154/
        /M/TouchItem m_0x190/0x3c/0x190/
        /M/KeyItem m_key_handler_front/0x1c/0x334/
        /M/KeyItem m_key_handler_back/0x1c/0x350/
        /M/sead::Delegate2<BaseMenuInputControl, s32, EKeyID> m_key_handler/0x10/0x36c/
        /M/sead::Delegate2<BaseMenuInputControl, s32, s32> m_key_handler_cursor/0x10/0x37c/
        /M/sead::Delegate2<BaseMenuInputControl, s32, const sead::Vector2f &> m_touch_handler_base_down/0x10/0x38c/
        /M/sead::Delegate2<BaseMenuInputControl, s32, const sead::Vector2f &> m_touch_handler_base_slide_out/0x10/0x39c/
        /M/sead::Delegate2<BaseMenuInputControl, s32, const sead::Vector2f &> m_touch_handler_base_slide_in/0x10/0x3ac/
        /M/sead::Delegate2<BaseMenuInputControl, s32, const sead::Vector2f &> m_touch_handler_base_capture_out/0x10/0x3bc/
        /M/sead::Delegate2<BaseMenuInputControl, s32, const sead::Vector2f &> m_touch_handler_up/0x10/0x3cc/
        /M/sead::Delegate2<BaseMenuInputControl, s32, s32> m_select_handler_base_on/0x10/0x3dc/
        /M/sead::Delegate2<BaseMenuInputControl, s32, s32> m_select_handler_base_off/0x10/0x3ec/
        /M/s32 m_0x3fc/0x4/0x3fc/
        /M/Sequence::BasePage *m_page/0x4/0x408/
    /END/
}