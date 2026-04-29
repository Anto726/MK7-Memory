#pragma once

#include "ModeManagerRace.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@TimeAttackManager/SIZE@0x518/BASE@ModeManagerRace/BSIZE@0x518/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual void *getRuntimeTypeInfo() const;
        virtual void calcAfterStateFunc();
        virtual void initWait();
        virtual void calcWait();
        virtual void initCountDown();
        virtual void calcCountDown();
        virtual void initRace();
        virtual void calcRace();
        virtual void initGoal();
        virtual void calcGoal();
        virtual void initKartPad_(s32);
    /END/
}