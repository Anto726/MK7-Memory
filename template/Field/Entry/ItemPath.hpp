#pragma once

#include "../../types.hpp"

#include "base.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_STRUCT/NAME@MapdataItemPathData/SIZE@0x1C/
        /M/u16 m_start_point/0x2/0x0/
        /M/u16 m_point_num/0x2/0x2/
        /M/u16 m_previous_points[6]/0xC/0x4/
        /M/u16 m_next_points[6]/0xC/0x10/
    /END/

    /START_CLASS/NAME@MapdataItemPath/SIZE@0x4/BASE@MapdataDataBase<MapdataItemPathData>/BSIZE@0x4/
    /END/
}