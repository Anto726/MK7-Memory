#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(System)
{
    // Name is made up
    /START_STRUCT/NAME@KDPadBaseFormat/SIZE@0x2/
        /M/u8 m_data/0x1/0x0/
        /M/u8 m_size/0x1/0x1/
    /END/

    /START_STRUCT/NAME@KDPadButtonFormat/SIZE@0x2/BASE@KDPadBaseFormat/BSIZE@0x2/
    /END/

    /START_STRUCT/NAME@KDPadStickFormat/SIZE@0x2/BASE@KDPadBaseFormat/BSIZE@0x2/
    /END/
}