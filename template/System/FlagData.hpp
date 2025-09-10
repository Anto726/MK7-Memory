#pragma once

#include "../types.hpp"

#define VR_MASK 0x0001FFFF
#define GP_MASK 0x3F000000
#define VR_SHIFT  0
#define GP_SHIFT 24

BEGIN_NAMESPACE(System)
{
    struct FlagData
    {
        struct GP_VR
        {
            u32 packed;

            u32 get_vr() { return (packed & VR_MASK) >> VR_SHIFT; }
            void set_vr(u32 vr) { packed = (packed & ~VR_MASK) | ((vr << VR_SHIFT) & VR_MASK); }

            u32 get_gp() { return (packed & GP_MASK) >> GP_SHIFT; }
            void set_gp(u32 gp) { packed = (packed & ~GP_MASK) | ((gp << GP_SHIFT) & GP_MASK); }
        };

        u8 gap_0x0[0x358];
        u32 coins;
        u8 gap_0x35C[0x1F8];
        u32 streetpass_tags;
        u8 gap_0x558[0xC];
        u32 wins;
        u32 losses;
        GP_VR gp_vr;
        u8 gap_0x570[0x84];
    };
    static_assert(sizeof(FlagData) == 0x5F4);
}