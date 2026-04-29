#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "BaseRacePage.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@RacePage/SIZE@0x3320/BASE@BaseRacePage/BSIZE@0x31FC/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual ~RacePage();
        virtual void initControl();

        RacePage();
        void genRaceBTCoin();
        void genPauseTA();
        void resEnterTA();
        void genResultBT();
        void genResultTA();
        void resPointFix();
        void resSortTeam();
        void genNextDebug();
        void genPauseRpGP();
        void genPauseRpTA();
        bool resBarInTeam(s32);
        void genResultTeam();
        void genResultWiFi();
        void genResultCommu();
        void initResultName();
        void getResultBarPos(s32);
        void setDrawPriority(s32, UI::BaseResultBar *);
        void genNextCommunity();
        void genRaceBTBalloon();
        void initControl_WiFiVS();
        void initControl_MultiGP();
        void initControl_MultiVS();
        void initControl_SingleGP();
        void initControl_WiFiBattle();
        void initControl_MultiBattle();
        void initControl_SingleBattle();
        void initControl_SingleTimeAttack();
        void genNext();
        void resSort();
        void genPause();
        bool resBarIn(s32);
        void resEnter();
        u32 resPoint(s32);
        void genNextGP();
        void genNextTA();
        void genRaceGP();
        void genResult();
        bool resBarOut(s32);
        void resInitTA();
    /END/
}