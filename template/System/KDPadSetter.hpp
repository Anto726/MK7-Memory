#pragma once

#include "../types.hpp"

#include "KDPadAddBase.hpp"

#include <math/seadVector.h>

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPadSetter/SIZE@0x2804/BASE@KDPadAddBase/BSIZE@0x24/VTABLE@True/
    public:
        void calcState();
        void resetCore();
        void initInner();

        KDPadSetter();

        /M/u32 m_buttons/0x4/0x24/
        /M/sead::Vector2f m_stick/0x8/0x28/
        /M/bool m_disable_inputs/0x1/0x30/
        /M/sead::Vector2f m_raw_stick/0x8/0x34/
        /M/bool m_update_inputs/0x1/0x3c/
    /END/
}
