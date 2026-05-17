#pragma once

#include "../forward.hpp"

#include "BaseFastControl.hpp"
#include "UnitTextPane.hpp"
#include "../RaceSys/EDriverID.hpp"
#include "../RaceSys/EGrandPrixRecord.hpp"

#include <nn/cfg/CTR/cfg.h>
#include <nw/lyt/Picture.hpp>
#include <nw/lyt/TextBox.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@BaseResultBar/SIZE@0x130/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
    public:
        virtual ~BaseResultBar();
        virtual void onCreate(const Control::CreateArg *);
        virtual void onReset();
        virtual void onCalc();

        void BaseResultBar();
        void animAppear();
        void animDisappear();
        void setCountry(nn::cfg::CTR::CfgCountryCode);
        void setCharaTex(RaceSys::EDriverID, s32, bool);
        void setRankIcon(s32, s32);
        void disableRankIcon();
        void setCountryVisible(bool);
        void animIn();
        void update();
        void setName(const MessageString &);
        void setRank(s32);
        void addPoint(s32);
        void animKeep();
        void setGrade(RaceSys::EGrandPrixRecord);
        void setTeamB();
        void setTeamR();
        bool animPoint(s32);
        void setHandle(bool, bool);
        void setMiiTex(u32, bool);
        void setPlayer(bool, bool);
        void setPoint(s32);
        void showPoint(s32, bool);

        /M/nw::lyt::Picture *m_P_rank/0x4/0x7c/
        /M/nw::lyt::Picture *m_P_chara/0x4/0x80/
        /M/nw::lyt::TextBox *m_T_pos/0x4/0x84/
        /M/nw::lyt::TextBox *m_T_name/0x4/0x88/
        /M/nw::lyt::Picture *m_P_nflag/0x4/0x8c/
        /M/nw::lyt::Picture *m_P_handle/0x4/0x90/
        /M/nw::lyt::Picture *m_P_star/0x4/0x94/
        /M/nw::lyt::TextBox *m_T_points/0x4/0x98/
        /M/nw::lyt::TextBox *m_T_pts/0x4/0x9c/      // Aka `m_T_VR`
        /M/nw::lyt::Picture *m_P_frame/0x4/0xa0/
        // If `true`, the points adding animation will be played.
        // Otherwise the new point amount will be set directly without animations.
        /M/bool m_anim_update_points/0x1/0xa4/
        /M/s32 m_points/0x4/0xa8/
        /M/s32 m_new_points/0x4/0xac/
        /M/UnitTextPane m_unit_text_pane/0x40/0xb0/
        /U/UnitTextPane/0x40/0xf0/
    /END/
}