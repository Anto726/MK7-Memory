#pragma once

#include "../forward.hpp"

#include "ModeManagerBattle.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@BattleBalloonManager/SIZE@0x520/BASE@ModeManagerBattle/BSIZE@0x51C/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual void init();
        virtual void *getRuntimeTypeInfo() const;
        virtual void createInner();
        virtual void calcBeforeStateFunc();
        virtual s16 getCurRank(s32);

        /M/BalloonRankChecker *m_balloon_rank_checker/0x4/0x51c/
    /END/
}