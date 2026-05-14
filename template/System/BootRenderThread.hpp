#pragma once

#include "BootPictureIcon.hpp"
#include "KDThread.hpp"

#include <heap/seadHeap.h>

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@BootRenderThread/SIZE@0xF0/BASE@KDThread/BSIZE@0xA4/VTABLE@True/
    public:
        virtual ~BootRenderThread();
        virtual void calcInner_(s32);

        BootRenderThread();
        void setup();
        void calcFunc();

        /M/sead::Heap *m_heap/0x4/0xc4/
        // [0] -> Game logo (left)
        // [1] -> Game logo (right)
        // [2] -> Spinning tire icon
        /M/BootPictureBase *m_boot_pictures[3]/0xc/0xd0/
    /END/
}