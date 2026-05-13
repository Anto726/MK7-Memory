#pragma once

#include "../forward.hpp"
#include "BaseFastControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@BattleCountDownControl/SIZE@0x84/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
    public:
        enum class EColor : u32 {
            RED,
            BLUE
        };

         /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~BattleCountDownControl();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        virtual void onCalc();

        void setColor(EColor);

        /M/RaceSys::RaceDirector *m_race_director/0x4/0x7c/
        /M/s32 m_current_second/0x4/0x80/
    /END/
}