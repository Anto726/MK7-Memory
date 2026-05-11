#pragma once

#include "../../types.hpp"

#include "base.hpp"

#include <math/seadMatrix.h>

BEGIN_NAMESPACE(Field)
{
    // TODO: probably the same or similar as MapdataStartPointData
    /START_STRUCT/NAME@MapdataMissionPointData/SIZE@0x1C/
    /END/
    
    /START_CLASS/NAME@MapdataMissionPoint/SIZE@0x28/BASE@MapdataPointDataBase<MapdataMissionPointData>/BSIZE@0x4/
    public:
        /U/sead::Matrix33f/0x24/0x4/
    /END/
}