#pragma once

#include "../types.hpp"

#include "BaseMenuViewControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@SelectTimer/SIZE@0xC4/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        // TODO
        virtual void *getDTIClassInfo() const;
        virtual void *getDTIClass() const;
        virtual ~SelectTimer(); // 2 (_sub_object), 3 (_deallocating)
        virtual void onCreate(const Control::CreateArg *); // 19
        virtual void onReset(); // 28
        virtual void onCalc(); // 29

        SelectTimer();
        void startCount(u32);
        void setSec(u32);

        /M/u8 m_state/0x1/0xa8/
        /M/u32 m_current_time/0x4/0xac/
        /M/u32 m_time_before_countdown/0x4/0xb0/
        /M/u32 m_delay_time_before_disable/0x4/0xb4/
        /M/u32 m_current_second/0x4/0xb8/
        /M/u32 m_seconds/0x4/0xbc/
        /M/bool m_disable_select_timer/0x1/0xc0/
    /END/
}