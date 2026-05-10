#pragma once

#include "../types.hpp"
#include "../forward.hpp"
#include "../versions.h"

#include "ScrollListBarBase.hpp"

#include <prim/seadDelegate.h>
#include <nw/lyt/Pane.hpp>
#include <nw/lyt/TextBox.hpp>

BEGIN_NAMESPACE(UI)
{
#if GAME_VERSION != ALL_DLP
    /START_CLASS/NAME@GhostBar/SIZE@0xEC/BASE@ScrollListBarBase/BSIZE@0xB0/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const;    // 0x004e9f20 (VERSION_USA_REV1)
        virtual Object::DTIClassInfo *getDTIClass() const;        // 0x004e9e98 (VERSION_USA_REV1)
        virtual ~GhostBar();                                      // 0x0017a080 (VERSION_USA_REV1)
        virtual void onCreate(const Control::CreateArg *);        // 0x00179ecc (VERSION_USA_REV1)
        virtual void onReset();                                   // 0x00179e8c (VERSION_USA_REV1)
        virtual void onCalc();                                    // 0x00179e68 (VERSION_USA_REV1)
        virtual void onScrollUpdate(s32);                         // 0x001795e0 (VERSION_USA_REV1)

        void requestCreateMii(s32);                               // 0x0017929c (VERSION_USA_REV1)
        void pasteMiiIcon_(Mii::Face *, Mii::Icon *);             // 0x00179180 (VERSION_USA_REV1)

        /M/DashMessageWriter *m_message_writer/0x4/0xb0/
        /M/nw::lyt::TextBox *m_T_mii_name/0x4/0xb4/
        /M/nw::lyt::TextBox *m_T_time/0x4/0xb8/
        /M/nw::lyt::Pane *m_P_mii/0x4/0xbc/                       // Character icon, or the "7" icon
        /M/nw::lyt::Pane *m_P_nflag/0x4/0xc0/
        /M/nw::lyt::Pane *m_P_staff_g_logo/0x4/0xc4/
        /M/nw::lyt::Pane *m_P_handle_icon/0x4/0xc8/
        /M/sead::Delegate2<GhostBar, Mii::Face *, Mii::Icon *> m_paste_mii_icon_delegate/0x10/0xcc/
        /M/ScrollListBarBase::MiiInfoList *m_mii_info_list/0x4/0xdc/
        /M/s32 m_prev_ghost_idx/0x4/0xe0/
        /M/s32 m_ghost_idx/0x4/0xe4/
        /M/s32 m_mii_ghost_idx/0x4/0xe8/
    /END/
#endif
}