#pragma once

#include "ItemObjDirectorBase.hpp"

#include <container/seadRingBuffer.h>
#include <math/seadMatrix.h>

BEGIN_NAMESPACE(Item)
{
    /START_CLASS/NAME@ItemObjBananaDirector/SIZE@0x13C/BASE@ItemObjDirectorBase/BSIZE@0xBC/
    public:
        // TODO: needs to be fixed in the Python script
        using RingBuffers_t = sead::RingBuffer<sead::Matrix34f> [8];

        /U/RingBuffers_t/0x80/0xBC/
    /END/
}