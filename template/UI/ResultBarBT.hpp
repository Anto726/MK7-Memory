#pragma once

#include "../forward.hpp"

#include "BaseResultBar.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@ResultBarBT/SIZE@0x130/BASE@BaseResultBar/BSIZE@0x130/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            CreateArg(): VisualControl::CreateArg() {}
        
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine () const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~ResultBarBT();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
    /END/
}