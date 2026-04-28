#pragma once

#include "../types.hpp"

#include "PracticalSection.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@DataHolder/SIZE@0x48/BASE@PracticalSection/BSIZE@0x48/VTABLE@True/
    public:
		virtual ~DataHolder();
        virtual void create(Object::ArgumentObj const *); // 4
        virtual s32 getSectionType() const;    // See `SectionType` in `SequenceResource.hpp`
        virtual bool isCompletable() const;
        virtual bool isSyncFadein() const;
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
        virtual void clearData() = 0;
        virtual void onCreate();
        virtual void onInitData();
        virtual void onEnableData();
        virtual void onDisableData();

        DataHolder();
    /END/

    template <typename T>
    class TDataHolder: public DataHolder {
    public:
        virtual void clearData();

        T m_data;
    };
}