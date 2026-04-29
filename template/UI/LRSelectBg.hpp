#pragma once

#include "BaseMenuViewControl.hpp"
#include "ControlAnimator.hpp"
#include "VisualControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@LRSelectBg/SIZE@0xA8/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            CreateArg(): VisualControl::CreateArg() {}
        
            const ControlAnimator::AnimationDefine *getAnimationDefine () const; // 3
        /END/

        // TODO
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~LRSelectBg(); // 2 (_sub_object), 3 (_deallocating)
        virtual void onCreate(const Control::CreateArg *); // 19

        LRSelectBg() = default;
    /END/
}