#pragma once

#include "../forward.hpp"

#include "BaseFastControl.hpp"

#include <nw/lyt/Pane.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@ResultBattlePoint/SIZE@0x94/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            CreateArg(): VisualControl::CreateArg() {}
        
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine () const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~ResultBattlePoint();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();

        void animAppearR();
        void animAppearB();
        void setPointR(s32);
        void setPointB(s32);

        /M/nw::lyt::Pane *m_P_score_r_00/0x4/0x7c/
        /M/nw::lyt::Pane *m_P_score_r_01/0x4/0x80/
        /M/nw::lyt::Pane *m_P_score_r_02/0x4/0x84/
        /M/nw::lyt::Pane *m_P_score_b_00/0x4/0x88/
        /M/nw::lyt::Pane *m_P_score_b_01/0x4/0x8c/
        /M/nw::lyt::Pane *m_P_score_b_02/0x4/0x90/
    /END/
}