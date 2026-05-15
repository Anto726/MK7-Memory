#pragma once

#include <math/seadVector.h>
#include <math/seadMatrix.h>

#include "../../forward.hpp"
#include "../../types.hpp"

#include "base.hpp"
#include "../eMapdataGeoObjID.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_STRUCT/NAME@MapdataGeoObjData/SIZE@0x40/
        /M/eMapdataGeoObjID m_id/0x2/0x0/
        /M/sead::Vector3f position/0xC/0x4/
        /M/sead::Vector3f rotation/0xC/0x10/
        /M/sead::Vector3f scale/0xC/0x1C/
    /END/
    
    /START_CLASS/NAME@MapdataGeoObj/SIZE@0x60/BASE@MapdataDataBase<MapdataGeoObjData>/BSIZE@0x4/
    public:
        /M/MapdataPath *m_mapdata_path/0x4/0x4/
        /U/sead::Matrix33f/0x24/0x8/
        /U/sead::Matrix34f/0x30/0x2C/
        /U/u32/0x4/0x5C/ // m_special_light_set_index
    /END/
}