#pragma once

#include "../types.hpp"

#include "GhostSaveDataHeader.hpp"
#include "KDPadBinData.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@GhostSaveData/SIZE@0x2898/
    public:
        GhostSaveData();

        /M/GhostSaveDataHeader m_header/0xc0/0x0/
        /M/KDPadBinData m_input_data/0x27d8/0xc0/
    /END/
}
