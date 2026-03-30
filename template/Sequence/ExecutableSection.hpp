#pragma once

#include "../types.hpp"

#include "PracticalSection.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@ExecutableSection/SIZE@0x50/BASE@PracticalSection/BSIZE@0x48/VTABLE@True/
    public:
        virtual ~ExecutableSection();
        virtual bool isCompletable() const;
        virtual void ready();
        virtual void enter();
        virtual void reenter();
        virtual void clear();

        ExecutableSection();

        /M/s32 m_enter_code/0x4/0x48/
        /M/s32 m_return_code/0x4/0x4C/
    /END/
}