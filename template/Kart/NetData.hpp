#pragma once

#include "VehicleReact.hpp"

#include <math/seadVector.hpp>

namespace Kart
{
    /START_STRUCT/NAME@NetData/SIZE@0x48/
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

        /M/KartData kart_data/0x4/0x4/
        /M/VehicleMove::StatusFlags status_flags/0x4/0x8/
        /M/sead::Vector3<s16> position/0x6/0x10/
        /M/sead::Vector3<s16> velocity/0x6/0x16/
        /M/sead::Vector3<s16> angular_velocity/0x6/0x1C/
        /M/s16 turning_speed/0x2/0x22/
        /M/s16 forward_speed/0x2/0x24/
        /M/s16 drift_steering/0x2/0x26/
        /M/s16 directional_speed/0x2/0x28/
        /M/s8 respawn_point/0x1/0x36/
        /M/VehicleReact::EAcdType accident_type/0x1/0x39/
    /END/
}