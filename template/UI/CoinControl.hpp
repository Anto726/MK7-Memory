#pragma once

#include "../types.hpp"
#include "../forward.hpp"

#include "BasePointControl.hpp"

#include <nw/lyt/Pane.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@CoinControl/SIZE@0x8C/BASE@BasePointControl/BSIZE@0x84/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~CoinControl();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        virtual void onCalc();

        /M/nw::lyt::Pane *m_P_coin/0x4/0x84/
        /M/RaceSys::ModeManagerBase *m_mode_manager/0x4/0x88/
    /END/
}