#pragma once

#include "../types.hpp"

#include "ExecutableSection.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@LastingTask/SIZE@0x58/BASE@ExecutableSection/BSIZE@0x50/VTABLE@True/
    public:
        virtual ~LastingTask();
        virtual void create(Object::ArgumentObj const *);
        virtual s32 getSectionType() const;
        virtual bool isSyncFadein() const;
        virtual s32 getFadeFelay() const;
        virtual void step();
        virtual void enter(EFadeKind, u32);
        virtual void standby();
        virtual void start();
        virtual void complete();
        virtual void cancel(EFadeKind, u32);
        virtual void finish(EFadeKind, u32);
        virtual void reenter();
        virtual void exit();
        virtual bool onCreate();
        virtual u8 onTaskMain() = 0;

        LastingTask();

        /M/bool m_is_cancel/0x1/0x50/
        /M/s32 m_fade_delay/0x4/0x54/
    /END/
}