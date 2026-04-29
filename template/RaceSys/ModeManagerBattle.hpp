#pragma once

#include "ModeManagerBase.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@ModeManagerBattle/SIZE@0x51C/BASE@ModeManagerBase/BSIZE@0x518/VTABLE@True/
    public:
        virtual void init();
        virtual void createInner();
        virtual bool checkWin(s32, s32) const;
        virtual bool checkLose(s32, s32) const;
        virtual void initWait();
        virtual void calcWait();
        virtual void calcCountDown();
        virtual void calcRace();
        virtual void updateRanks();

        void takeoverHandler(s32, s32);

        /M/bool m_battle_has_finished/0x1/0x518/
    /END/
}