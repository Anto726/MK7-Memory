#pragma once

#include "../types.hpp"

#include "ExecutableSection.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@InstantTask/SIZE@0x54/BASE@ExecutableSection/BSIZE@0x50/VTABLE@True/
    public:
        virtual ~InstantTask();
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
        virtual s32 onTaskStep() = 0;
        virtual s32 onTaskStart();
        virtual s32 onTaskCancel();
        virtual s32 onTaskCancelStep();
        virtual s32 onTaskFinally();

        InstantTask();

        /M/s32 m_fade_delay/0x4/0x50/
    /END/
}