#pragma once

#include "../forward.hpp"
#include "../Object/Actor.hpp"
#include "CTime.hpp"

#include <prim/seadDelegate.h>

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@RaceTimer/SIZE@0x38/BASE@Object::Actor/BSIZE@0x8/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual void init();
        virtual void calc();

        RaceTimer();
        void raceStart();

        /M/CFrameWatch *m_frame_watch/0x4/0x8/
        /M/CTime m_current_time/0xc/0xc/
        /M/CTime m_next_random_time/0xc/0x18/
        /M/bool m_race_not_in_progress/0x1/0x24/
        /M/sead::Delegate<RaceTimer> m_delegate/0x10/0x28/
    /END/
}