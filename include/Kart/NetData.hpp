#pragma once

#include <math/seadVector.hpp>

namespace Kart
{
    struct NetData
    {
        u8 gap_0x0[0x4];
        u32 kart_data;
        u8 gap_0x8[0x8];
        sead::Vector3<s16> position;
        sead::Vector3<s16> velocity;
        sead::Vector3<s16> angular_velocity;
        s16 turning_speed;
        s16 forward_speed;
        s16 drift_steering;
        s16 directional_speed;
        u8 gap_2A[0x1E];
    };
    static_assert(sizeof(NetData) == 0x48);
}