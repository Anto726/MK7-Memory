#pragma once

#include "../types.hpp"

#include "Control.hpp"
#include "MessageData.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@VisualControl/SIZE@0x7C/BASE@Control/BSIZE@0x64/VTABLE@True/
    public:
        /M/void *m_animator/0x4/0x64/   // ControlAnimator *
        /M/void *m_control_sight/0x4/0x68/   // NwlytDivPartControlSight *
        /M/MessageDataList m_message_data/0xC/0x6C/
        /M/bool m_anim_keep/0x1/0x78/
        /M/bool m_apply_animation/0x1/0x79/
        /M/bool m_calc_control_sight/0x1/0x7A/
        /M/bool m_is_pause_visible/0x1/0x7B/
    /END/
}