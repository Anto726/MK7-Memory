#pragma once

#include <math/seadVector.h>

#include "../../types.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_STRUCT/NAME@MapdataStartPointData/SIZE@0x1C/
        /M/sead::Vector3f position/0xC/0x0/
        /M/sead::Vector3f rotation/0xC/0xC/
        /M/s16 kart_index/0x2/0x18/
    /END/

    /START_CLASS/NAME@MapdataStartPoint/SIZE@0x2C/BASE@MapdataPointDataBase<MapdataStartPointData>/BSIZE@0x4/
    public:
    /END/
}