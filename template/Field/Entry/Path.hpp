#pragma once

#include <math/seadVector.h>

#include "../../types.hpp"

#include "base.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_STRUCT/NAME@MapdataPathPoint/SIZE@0x10/
        /M/sead::Vector3f m_position/0xC/0x0/
        /M/u16 m_route_point_setting_1/0x2/0xC/
        /M/u16 m_route_point_setting_2/0x2/0xE/
    /END/

    /START_STRUCT/NAME@MapdataPathData/SIZE@0x1C/
        /M/u16 m_point_num/0x2/0x0/
        /M/u8 m_route_setting_1/0x1/0x2/
        /M/u8 m_route_setting_2/0x1/0x3/
        // /M/MapdataPathPoint m_point/0x4/0x10/
    /END/
    
    /START_CLASS/NAME@MapdataPath/SIZE@0x4/BASE@MapdataDataBase<MapdataPathData>/BSIZE@0x4/
    /END/
}