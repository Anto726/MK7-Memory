#pragma once

#include "../types.hpp"

#include "Page.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@DummyPage/SIZE@0x5C/BASE@Page/BSIZE@0x5C/VTABLE@True/
    public:
        virtual void *getDTIClassInfo() const; // 0
		virtual void *getDTIClass() const; // 1
        virtual ~DummyPage();
        virtual void onPageEnter();
    /END/
}