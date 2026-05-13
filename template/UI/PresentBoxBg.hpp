#pragma once

#include "../versions.h"
#include "BaseMenuViewControl.hpp"

#include <math/seadVector.hpp>

BEGIN_NAMESPACE(UI)
{
#if GAME_VERSION != ALL_DLP
    /START_CLASS/NAME@PresentBoxBg/SIZE@0xA8/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0x00150cf8 (VERSION_USA_REV1)
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 0x004e33a8 (VERSION_USA_REV1)
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;           // 0x004e3320 (VERSION_USA_REV1)
        virtual Object::DTIClassInfo *getDTIClass() const;               // 0x004e3298 (VERSION_USA_REV1)
        virtual ~PresentBoxBg();                                         // 0x00150e20 (VERSION_USA_REV1)
        virtual void onReset();                                          // 0x00150df4 (VERSION_USA_REV1)
    /END/
#endif
}