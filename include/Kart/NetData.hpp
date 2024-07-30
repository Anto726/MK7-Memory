#pragma once

#include "VehicleReact.hpp"

#include <math/seadVector.hpp>

namespace Kart
{
    struct NetData
    {
        struct KartData
        {
            u32 _0x1 : 1;
            u32 _0x2 : 1;
            u32 _0x4 : 1;
            u32 _0x8 : 1;
            u32 _0x10 : 1;
            u32 _0x20 : 1;
            u32 _0x40 : 1;
            u32 _0x80 : 1;
            u32 _0x100 : 1;
            u32 _0x200 : 1;
            u32 _0x400 : 1;
            u32 _0x800 : 1;
            u32 _0x1000 : 1;
            u32 _0x2000 : 1;
            u32 _0x4000 : 1;
            u32 _0x8000 : 1;
            u32 _0x10000 : 1;
            u32 warp : 1; // 0x20000
        };
        static_assert(sizeof(KartData) == 0x4);

        u8 gap_0x0[0x4];
        KartData kart_data;
        VehicleMove::StatusFlags status_flags;
        u8 gap_0xC[0x4];
        sead::Vector3<s16> position;
        sead::Vector3<s16> velocity;
        sead::Vector3<s16> angular_velocity;
        s16 turning_speed;
        s16 forward_speed;
        s16 drift_steering;
        s16 directional_speed;
        u8 gap_0x2A[0xF];
        VehicleReact::EAcdType m_acd_type;
        u8 gap_0x3A[0xE];
    };
    static_assert(sizeof(NetData) == 0x48);
}