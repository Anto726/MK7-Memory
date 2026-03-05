#pragma once

#include "../types.hpp"

#include "../RaceSys/CTime.hpp"
#include "GhostSaveDataHeader.hpp"
#include "KDPadBinData.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@GhostSaveDataHeader/SIZE@0xc0/
    public:
        GhostSaveDataHeader();
        bool isValid();
        void getLapTime(RaceSys::CTime *, s32) const;
        void getGoalTime(RaceSys::CTime *) const;
    /END/
}
