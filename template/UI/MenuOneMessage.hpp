#pragma once

#include "../types.hpp"

#include "BaseMenuViewControl.hpp"

#include <prim/seadSafeString.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@MenuOneMessage/SIZE@0xA8/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
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
        virtual ~MenuOneMessage() {}; // 2 (_sub_object), 3 (_deallocating)
        void setMessage(const sead::SafeString &, s32);
    /END/
}