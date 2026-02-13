#pragma once

#include "../types.hpp"

#include "BaseFastControl.hpp"
#include "ControlSight.hpp"

#include "../Sequence/BasePage.hpp"

#include <math/seadVector.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@BaseMenuViewControl/SIZE@0xA8/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
        /M/ControlSight::ElementHandle *m_elements[4]/0x10/0x7C/
        /M/sead::Vector2f m_0x8C/0x8/0x8C/
        /M/sead::Vector3f m_follow/0xC/0x94/
        /M/bool m_is_follow/0x1/0xA0/
        /M/Sequence::BasePage *m_page/0x4/0xA4/
    /END/
}