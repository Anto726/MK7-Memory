#pragma once

#include "../types.hpp"
#include "../forward.hpp"

#include "BasePointControl.hpp"

#include <nw/lyt/Pane.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@PointControl/SIZE@0x94/BASE@BasePointControl/BSIZE@0x84/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~PointControl();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        virtual void onCalc();
        virtual void setPlayer(u32);

        bool isAnimNothing();
        bool isAnimIn();
        void animIn();
        void animOut();

        /M/nw::lyt::Pane *m_R_center/0x4/0x84/
        /M/RaceSys::ModeManagerBase *m_mode_manager/0x4/0x88/
        /M/bool m_is_balloon_battle/0x1/0x8c/
        /M/bool m_is_win/0x1/0x8d/
        /M/f32 m_team_color_anim_frame/0x4/0x90/
    /END/
}