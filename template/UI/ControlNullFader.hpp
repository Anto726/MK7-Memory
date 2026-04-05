#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@ControlNullFader/SIZE@0x04/VTABLE@True/
    public:
        virtual ~ControlNullFader() = default; // 0
        virtual void _0x4() = 0; // 1 (__deallocating)
        virtual void readyFadeIn(s32) {} // 2
        virtual void readyFadeOut(s32) {} // 3
        virtual void step() {} // 4
        virtual bool isComplete() { return true; } // 5
    /END/
}