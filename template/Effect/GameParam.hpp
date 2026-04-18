#pragma once

#include "../forward.hpp"
#include "../LibEffect/Particle.hpp"
#include "GameParam.hpp"

#include <gfx/seadColor.h>

BEGIN_NAMESPACE(Effect)
{
    // NOTE: Name is made up
    // From `RaceCommon.szs/Effect/EffectParam.bin`
    /START_CLASS/NAME@EffectParamEffectHeaderEntry/SIZE@0x40/
    public:
        /M/char m_name[32]/0x20/0x0/
        /M/sead::Color4f m_color/0x10/0x20/
        /M/s32 m_0x30/0x4/0x30/
        /M/s32 m_0x34/0x4/0x34/
        /M/s32 m_0x38/0x4/0x38/
        /M/s32 m_0x3c/0x4/0x3c/
    /END/

    // NOTE: Name is made up
    // From `RaceCommon.szs/Effect/EffectParam.bin`
    /START_CLASS/NAME@EffectParamEffectEntry/SIZE@0x13D0/
    public:
    /END/

    /START_CLASS/NAME@GameParam/SIZE@0x4/
    public:
        /M/EffectParamEffectHeaderEntry *m_effect_header_entry/0x4/0x0/
    /END/

    /START_CLASS/NAME@GameParam_Color/SIZE@0x4/
    public:
        /M/EffectParamEffectEntry *m_effect_entry/0x4/0x0/
    /END/
}