#pragma once

#include "../forward.hpp"
#include "BaseFastControl.hpp"

#include <nw/lyt/Pane.hpp>
#include <nw/lyt/TextureInfo.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@RaceRankControl/SIZE@0x134/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~RaceRankControl();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        virtual void onCalc();

        bool isAnimNothing();
        void setPauseVisible(bool);
        void animIn();
        void animOut();
        bool isAnimIn();
        void setTeamB();
        void setTeamR();

        /M/nw::lyt::Pane *m_P_pos_00/0x4/0x7c/
        /M/nw::lyt::TextureInfo m_rank_textures[8]/0xa0/0x80/
        /M/RaceSys::ModeManagerBase *m_mode_manager/0x4/0x120/
        /M/s32 m_target_player_id/0x4/0x124/
        /M/s32 m_previous_rank/0x4/0x128/
        /M/s32 m_current_rank/0x4/0x12c/
        /M/bool m_is_changing_rank/0x1/0x130/
        /M/bool m_is_win/0x1/0x131/
    /END/
}