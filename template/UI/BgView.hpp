#pragma once

#include "../types.hpp"

#include "BaseMenuViewControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@BgView/SIZE@0xA8/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        Object::DTIClassInfo *getDTIClassInfo() const;
        Object::DTIClassInfo *getDTIClass() const;
        virtual ~BgView();
    /END/
}