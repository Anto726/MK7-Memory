#pragma once

#include "BaseFastControl.hpp"
#include "UnitTextPane.hpp"

#include <nw/lyt/Pane.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@LapControl/SIZE@0xD0/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~LapControl();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        virtual void onCalc();

        /M/nw::lyt::Pane *m_P_lap_00/0x4/0x7c/
        /M/s32 m_current_lap/0x4/0x80/
        /M/s32 m_lap_num/0x4/0x84/
        /M/s32 m_lap_num_max/0x4/0x88/
        /M/s32 m_target_player_id/0x4/0x8c/
        /M/UnitTextPane m_unit_text_pane/0x40/0x90/
    /END/
}