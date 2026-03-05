#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "KDPad.hpp"

#include <math/seadVector.h>

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPadAddBase/SIZE@0x24/VTABLE@True/
    public:
        /START_STRUCT/NAME@KDPadDataOnFrame/SIZE@0x1c/
            /M/u16 m_buttons/0x2/0x0/
            /M/s8 m_stick_x/0x1/0x2/
            /M/s8 m_stick_y/0x1/0x3/
            /M/bool m_0x4/0x1/0x4/
            /M/sead::Vector2f m_raw_stick/0x8/0x8/
            /M/u32 m_raw_buttons/0x4/0x10/
            /M/bool m_holding_start_or_select/0x1/0x14/
            /M/bool m_touch_screen_held/0x1/0x15/
            /M/sead::Vector2s m_touch_input/0x4/0x16/
        /END/

        virtual ~KDPadAddBase() = default;
        virtual void reset();
        virtual void calc();
        virtual void calcState() {};
        virtual void resetCore() {};
        virtual void initInner() {};

        KDPadAddBase(KDPad *, KDPadDataOnFrame &);
        void init();
        void start();
    /END/
}