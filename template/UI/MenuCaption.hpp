#pragma once

#include "../types.hpp"

#include "BaseMenuViewControl.hpp"
#include "ControlAnimator.hpp"
#include "VisualControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@MenuCaption/SIZE@0xB0/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual ControlAnimator::AnimationDefine *getAnimationDefine(); // 3
        /END/

        // TODO
        // virtual ??? getDTIClassInfo() const;
        // virtual ??? getDTIClass() const;
        virtual ~MenuCaption() {}; // 2 (_sub_object), 3 (_deallocating)
        virtual void onCreate(const Control::CreateArg *) {}; // 19
        virtual void onReset() {}; // 28
        virtual void onCalc() {}; // 29

        void animIn();
        void animKeep();
        void animOut();
        bool isAnimStable();
        
        /M/s32 m_active_time/0x4/0xA8/
        /M/s32 m_max_active_time/0x4/0xAC/
    /END/
}