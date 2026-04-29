#pragma once

#include "LayeredSequence.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@ParallelSequence/SIZE@0x4C/BASE@LayeredSequence/BSIZE@0x48/VTABLE@True/
        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1    
        virtual ~ParallelSequence();
        virtual void create(Object::ArgumentObj const *); // 4
        virtual void destroy();
        virtual s32 getSectionType() const;    // See `SectionType` in `SequenceResource.hpp`
        virtual bool isCompletable() const;
        virtual bool isSyncFadein() const;
        virtual s32 getFadeFelay() const;
        virtual u32 updateState();
        virtual void step();
        virtual void ready();
        virtual void enter(EFadeKind, u32);
        virtual void standby();
        virtual void start();
        virtual void complete();
        virtual void cancel(EFadeKind, u32);
        virtual void finish(EFadeKind, u32);
        virtual void reenter();
        virtual void exit();
        virtual void clear();
        virtual void sceneStart(s32);
        virtual void sceneFinish(s32);

        ParallelSequence();

        /M/s32 field_0x48/0x4/0x48/
    /END/
}