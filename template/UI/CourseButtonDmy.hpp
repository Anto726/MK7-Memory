#pragma once

#include "BaseMenuViewControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@CourseButtonDmy/SIZE@0xA8/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~CourseButtonDmy();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();

        void selectOn();
        void selectOff();
    /END/
}