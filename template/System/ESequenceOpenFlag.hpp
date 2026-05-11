#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(System)
{
    enum class ESequenceOpenFlag : u8
    {
        WON_EVERY_CUP,
        STREETPASSED_SOMEONE,
        ALREADY_ENTERED_COMMUNITY_MENU,
        HAVE_10000VR,
        MIRROR_MODE_UNLOCKED,
        ALREADY_WATCHED_CREDITS = 6
    };
}