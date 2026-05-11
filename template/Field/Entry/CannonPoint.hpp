#pragma once

#include "../../types.hpp"

#include "base.hpp"

#include <math/seadMatrix.h>

BEGIN_NAMESPACE(Field)
{
    // TODO: probably the same or similar as MapdataStartPointData
    /START_STRUCT/NAME@MapdataCannonPointData/SIZE@0x1C/
    /END/
    
    /START_CLASS/NAME@MapdataCannonPoint/SIZE@0x28/BASE@MapdataPointDataBase<MapdataCannonPointData>/BSIZE@0x4/
    public:
        /U/sead::Matrix33f/0x24/0x4/
    /END/
}