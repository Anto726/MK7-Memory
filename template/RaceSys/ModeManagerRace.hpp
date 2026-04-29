#pragma once

#include "ModeManagerBase.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@ModeManagerRace/SIZE@0x518/BASE@ModeManagerBase/BSIZE@0x518/VTABLE@True/
    public:
        virtual void init();
        virtual void createInner();
        virtual bool checkWin(s32, s32) const;
        virtual bool checkLose(s32, s32) const;
        virtual void calcAfterStateFunc();
        virtual void initWait();
        virtual void calcWait();
        virtual void initCountDown();
        virtual void calcCountDown();
        virtual void initRace();
        virtual void calcRace();
        virtual void initGoal();
        virtual void calcGoal();

        void allGoalProc();
        void takeoverHandler(s32, s32);
        void updateGoalNum();
        void updateRanks();
    /END/
}