#pragma once

#include "../forward.hpp"

#include "ControlAnimator.hpp"

#include <prim/seadSafeString.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@NullControlAnimator/SIZE@0xC/BASE@ControlAnimator/BSIZE@0xC/VTABLE@True/
    public:
        /START_CLASS/NAME@DummyAnimationItem/SIZE@0x14/BASE@AnimationItem/BSIZE@0x14/VTABLE@True/
        public:
            f32 getDataFrameSize(); // 4
            f32 getCurrentDataFrame(); // 5
            bool isLoopImpl(); // 7
        /END/

        /START_CLASS/NAME@DummyAnimationFamily/SIZE@0x20/BASE@AnimationFamily/BSIZE@0x20/VTABLE@True/
        public:
            void generateAnimationItem(const sead::SafeString&);
        /END/

        void generateAnimationFamily(const sead::SafeString &, s32); // 4

        NullControlAnimator();
    /END/
}