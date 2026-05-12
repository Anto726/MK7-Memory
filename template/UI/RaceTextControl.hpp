#pragma once

#include "BaseFastControl.hpp"

#include <nw/lyt/Pane.hpp>
#include <nw/lyt/TextureInfo.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@RaceTextControl/SIZE@0xD0/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
    public:
        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~RaceTextControl();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        virtual void onCalc();

        void animFinish(u32);
        void animGo();
        void animOut();
        void setVisible(bool, bool, bool);
        void setPauseVisible(bool);

        /M/bool m_is_visible/0x1/0x7c/
        /M/nw::lyt::Pane *m_P_race_3/0x4/0x80/
        /M/nw::lyt::Pane *m_P_race_2/0x4/0x84/
        /M/nw::lyt::Pane *m_P_race_1/0x4/0x88/
        /M/nw::lyt::Pane *m_P_go/0x4/0x8c/
        /M/nw::lyt::Pane *m_P_finish/0x4/0x90/
        /M/s32 m_time_until_3/0x4/0x94/
        /M/s32 m_time_until_2/0x4/0x98/
        /M/s32 m_time_until_1/0x4/0x9c/
        /M/s32 m_time_until_go/0x4/0xa0/
        /U/bool/0x1/0xa4/
        /U/u8/0x1/0xa5/
        // If `true`, display the YOU WIN / LOSE text
        /M/bool m_is_2_player_ghost_race/0x1/0xa6/
        /M/nw::lyt::TextureInfo m_you_win_texture/0x14/0xa8/
        /M/nw::lyt::TextureInfo m_you_lose_texture/0x14/0xbc/
    /END/
}