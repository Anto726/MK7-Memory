#pragma once

#include "../../types.hpp"

#include "base.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_STRUCT/NAME@MapdataCheckPathData/SIZE@0x10/
        /M/u8 m_start_point/0x1/0x0/
        /M/u8 m_point_num/0x1/0x1/
        /M/u8 m_previous_points[6]/0x6/0x2/
        /M/u8 m_next_points[6]/0x6/0x8/
        /u/u16/0x2/0xE/
    /END/
    
    /START_CLASS/NAME@MapdataCheckPath/SIZE@0x1C/BASE@MapdataPathDataBase<MapdataCheckPathData>/BSIZE@0x8/
    public:
        /M/s32 m_depth/0x4/0x8/
    /END/
}