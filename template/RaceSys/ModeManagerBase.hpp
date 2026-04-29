#pragma once

#include "../common.hpp"
#include "../types.hpp"

#include "../Util/TStateObserver.hpp"

#include "../Object/TDirectorArray.hpp"
#include "../Object/TLinkSocket.hpp"

#include "RaceInfo/CRaceInfo.hpp"
#include "ERaceEvent.hpp"

BEGIN_NAMESPACE(RaceSys)
{
    /START_CLASS/NAME@ModeManagerBase/SIZE@0x518/BASE@Object::TDirectorArray<Object::Actor, Object::TLinkSocket<Object::Actor, Object::Actor>>/BSIZE@0x28/VTABLE@True/
    public:
        enum RaceState : u8
        {
            RaceState_Sync,
            RaceState_Countdown,
            RaceState_Race,
            RaceState_Goal,
        };

        virtual void init(); // 5
		virtual void calc(); // 6
        virtual void createBeforeStructure(const Object::ArgumentObj *);
        virtual void *getRuntimeTypeInfo() const;
        virtual void createInner();
        virtual bool checkWin(s32, s32) const;   // NOTE: This is pure virtual here
        virtual bool checkLose(s32, s32) const;  // NOTE: This is pure virtual here
        virtual void calcBeforeStateFunc();
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

        ModeManagerBase();
        void runDelegate(ERaceEvent);
        void pauseIn();
        void pauseOut();
        void createKartInfo(u16, u8);
        bool initKartCommonPad_(s32);
        void stateInitCountDown();
        void stateCountDown();
        void stateInitGoal();
        void stateInitRace();
        void stateInitWait();
        void stateGoal();
        void stateRace();
        void stateWait();
        s32 calcRateForLose(s32) const;
        s32 calcRate(s32) const;

        /M/Util::TStateObserver<ModeManagerBase> m_state_observer/0x20/0x44/
        /M/CRaceInfo m_race_info/0x190/0x64/
        /M/u8 m_rank_to_player_id[KART_MAX + 1]/0x9/0x1F4/
        /M/u8 m_player_id_to_rank[KART_MAX]/0x8/0x1FD/
        /M/u32 m_frame_since_countdown/0x4/0x4D8/
        /M/u32 m_frame_since_sync/0x4/0x4DC/
    /END/
}