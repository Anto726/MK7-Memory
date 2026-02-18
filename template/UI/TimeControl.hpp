#pragma once

#include "../types.hpp"

#include "VisualControl.hpp"
#include "../RaceSys/CTime.hpp"
#include "../RaceSys/ModeManagerBase.hpp"
#include "../RaceSys/RaceDirector.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@TimeControl/SIZE@0x9C/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual ControlAnimator::AnimationDefine *getAnimationDefine(); // 3
        /END/

        // TODO
        // virtual ??? getDTIClassInfo() const;
        // virtual ??? getDTIClass() const;
        virtual ~TimeControl() {}; // 2 (_sub_object), 3 (_deallocating)
        virtual void onCreate(const Control::CreateArg *) {}; // 19
        virtual void onReset() {}; // 28
        virtual void onCalc() {}; // 29

        void animNewRecord();
        void goal();
        void setTime(const RaceSys::CTime &);

        /M/RaceSys::RaceDirector *m_race_director/0x4/0x7C/
        /M/RaceSys::ModeManagerBase *m_mode_manager/0x4/0x80/
        /M/bool m_is_counting_down/0x1/0x84/        // Counting down to 0 (i.e. Battle timer)
        /M/u32 m_target_player_id/0x4/0x88/
        /M/bool m_is_goal/0x1/0x8C/
        /M/bool m_is_battle_final_minute/0x1/0x8D/
        /M/bool m_is_battle_last_seconds/0x1/0x8E/  // Last 5 seconds
        /M/s32 m_delay_before_updating_timer_with_real_time/0x4/0x90/   // When 0, the timer will be updated with the current race's timer
        /M/u32 m_0x94/0x4/0x94/
        /M/u32 m_0x98/0x4/0x98/
    /END/
}