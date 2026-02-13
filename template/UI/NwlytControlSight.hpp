#pragma once

#include "ControlSight.hpp"
#include "NwlytInfo.hpp"

#include <nw/lyt/Pane.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@NwlytControlSightBase/SIZE@0xC/BASE@ControlSight/BSIZE@0x4/VTABLE@True/
    public:
        /M/s32 m_0x4/0x4/0x4/
        /M/s32 m_0x8/0x4/0x8/
    /END/

    /START_CLASS/NAME@NwlytControlSight/SIZE@0x90/BASE@NwlytControlSightBase/BSIZE@0xC/VTABLE@True/
    public:
        /M/NwlytInfo m_layout_info/0x84/0xC/
    /END/

    /START_CLASS/NAME@NwlytDummyControlSight/SIZE@0xA0/BASE@NwlytControlSight/BSIZE@0x90/VTABLE@True/
    public:
        /M/void *m_textbox/0x4/0x90/    // nw::lyt::TextBox *
        /M/nw::lyt::Pane *m_back/0x4/0x94/
        /M/nw::lyt::Pane *m_bounding/0x4/0x98/
        /M/bool m_pane_width_or_height_is_zero/0x1/0x9C/
    /END/

    // Unknown symbol
    /START_CLASS/NAME@struct_103/SIZE@0x14/
    public:
        /M/s32 m_0x0/0x4/0x0/
        /M/s32 m_0x4/0x4/0x4/
        /M/nw::lyt::Pane *m_root_pane/0x4/0x8/
        /M/s32 m_0xC/0x4/0xC/
        /M/s32 m_0x10/0x4/0x10/
    /END/

    /START_CLASS/NAME@NwlytDivControlSight/SIZE@0x24/BASE@NwlytControlSightBase/BSIZE@0xC/VTABLE@True/
    public:
        /M/struct_103 *m_0xC/0x4/0xC/
        /M/void *m_0x10/0x4/0x10/
        /M/void *m_0x14/0x4/0x14/
        /M/s32 m_0x18/0x4/0x18/
        /M/s32 m_0x1C/0x4/0x1C/
        /M/s32 m_0x20/0x4/0x20/
    /END/

    /START_CLASS/NAME@NwlytDivPartControlSight/SIZE@0x100/BASE@NwlytDivControlSight/BSIZE@0x24/VTABLE@True/
    public:
        /M/nw::lyt::Pane m_pane/0xDC/0x24/
    /END/

    /START_CLASS/NAME@NwlytDivRootControlSight/SIZE@0xA4/BASE@NwlytControlSightBase/BSIZE@0xC/VTABLE@True/
    public:
        /M/struct_103 *m_0xC/0x4/0xC/
        /M/void *m_0x10/0x4/0x10/
        /M/void *m_0x14/0x4/0x14/
        /M/s32 m_0x18/0x4/0x18/
        /M/s32 m_0x1C/0x4/0x1C/
        /M/NwlytInfo m_layout_info/0x84/0x20/
    /END/
}