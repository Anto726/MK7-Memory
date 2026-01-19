#pragma once

#include "../types.hpp"

#include "../RaceSys/ETitleType.hpp"

#include <utility>

#define VR_MASK     0x0001FFFF
#define GP_MASK     0x3F000000
#define TITLE_MASK  0x003E0000

#define VR_SHIFT    0
#define GP_SHIFT    24
#define TITLE_SHIFT 17

BEGIN_NAMESPACE(System)
{
    struct FlagData
    {
        // Unknown symbol
        struct ProfileData
        {
            u32 packed;

            u32 get_vr() { return (packed & VR_MASK) >> VR_SHIFT; }
            void set_vr(u32 vr) { packed = (packed & ~VR_MASK) | ((vr << VR_SHIFT) & VR_MASK); }

            u32 get_gp() { return (packed & GP_MASK) >> GP_SHIFT; }
            void set_gp(u32 gp) { packed = (packed & ~GP_MASK) | ((gp << GP_SHIFT) & GP_MASK); }

            RaceSys::ETitleType get_title() { return static_cast<RaceSys::ETitleType>((packed & TITLE_MASK) >> TITLE_SHIFT); }
            void set_title(RaceSys::ETitleType title) { packed = (packed & ~TITLE_MASK) | ((std::to_underlying(title) << TITLE_SHIFT) & TITLE_MASK); }
        };

        u8 gap_0x0[0x358];
        u32 coins;
        u8 gap_0x35C[0x1F8];
        u32 streetpass_tags;
        u8 gap_0x558[0xC];
        u32 wins;
        u32 losses;
        ProfileData profile_data;
        u8 gap_0x570[0x84];
    };
    static_assert(sizeof(FlagData) == 0x5F4);
}