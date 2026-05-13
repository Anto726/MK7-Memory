#pragma once

#include "../types.hpp"
#include "CTime.hpp"

#include <random/seadRandom.h>

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@CFrameWatch/SIZE@0x20/VTABLE@True/
    public:
        virtual void vf_0x0();
        virtual void vf_0x4();
        virtual void increment();
        virtual CTime getTime() const;
        virtual void setTime(const CTime &);

        /M/s32 m_frame_timer/0x4/0x4/
        /U/void */0x4/0x8/
        /M/sead::Random m_random/0x10/0xc/
        /M/u32 m_ticktime/0x4/0x1c/
    /END/

    /START_CLASS/NAME@CFrameDecWatch/SIZE@0x20/BASE@CFrameWatch/BSIZE@0x20/VTABLE@True/
    public:
        virtual void increment();
    /END/

    /START_CLASS/NAME@CFrameRandomWatch/SIZE@0x20/BASE@CFrameWatch/BSIZE@0x20/VTABLE@True/
    public:
        virtual CTime getTime() const;
    /END/

    /START_CLASS/NAME@CFrameRandomDecWatch/SIZE@0x20/BASE@CFrameDecWatch/BSIZE@0x20/VTABLE@True/
    public:
        virtual CTime getTime() const;
    /END/
}