#pragma once

#include "BaseFastControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@RaceTimeupControl/SIZE@0x7C/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
    public:
         /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~RaceTimeupControl();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        virtual void onCalc();

        void animTimeup();
        void animOut();
    /END/
}