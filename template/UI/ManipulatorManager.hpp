#pragma once

#include "../types.hpp"

#include "Manipulator.hpp"
#include "../Sequence/BaseRacePage.hpp"

#include <container/seadPtrArray.h>
#include <prim/seadDelegate.h>
#include <math/seadVector.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@ManipulatorManager/SIZE@0x40/
    public:
        /M/u8 m_0x0/0x1/0x0/
        /M/bool m_0x1/0x1/0x1/
        /M/bool m_disable_inputs/0x1/0x2/
        /M/Manipulator *m_0x4/0x4/0x4/
        /M/sead::FixedPtrArray<Manipulator, 3> m_manipulator_array/0x18/0x8/
        /M/sead::Delegate<Sequence::BaseRacePage> *m_calc_input_delegate_ptr/0x4/0x20/    // Sequence::BaseRacePage::calcInput
        /M/sead::Vector2f m_touch_input/0x8/0x24/
        /M/u8 m_0x2c/0x1/0x2c/
        /M/sead::Vector2f m_stick/0x8/0x30/
        /M/f32 m_0x38/0x4/0x38/
        /M/f32 m_0x3c/0x4/0x3c/
    /END/
}