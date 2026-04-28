#pragma once

#include "../types.hpp"

#include "DataHolder.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@DummyDataHolder/SIZE@0x4C/BASE@TDataHolder<u32>/BSIZE@0x4C/VTABLE@True/
    public:
        virtual void *getDTIClassInfo() const; // 0
		virtual void *getDTIClass() const; // 1
		virtual ~DummyDataHolder();
        virtual void onEnableData();
    /END/
}