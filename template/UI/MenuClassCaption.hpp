#pragma once

#include "../types.hpp"

#include "BaseMenuViewControl.hpp"
#include "ControlAnimator.hpp"
#include "VisualControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@MenuClassCaption/SIZE@0xB0/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            CreateArg(): VisualControl::CreateArg() {}
        
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine () const; // 3
        /END/

        // TODO
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~MenuClassCaption(); // 2 (_sub_object), 3 (_deallocating)
        virtual void onCreate(const Control::CreateArg *); // 19
        virtual void onReset(); // 28
        virtual void onCalc(); // 29

        void setCC(s32, bool);
        
        /M/s32 m_cc/0x4/0xA8/
        /M/bool m_cc_not_changed/0x1/0xAC/
    /END/
}