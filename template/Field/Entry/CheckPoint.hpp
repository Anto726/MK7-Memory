#pragma once

#include <math/seadVector.h>

#include "../../types.hpp"

BEGIN_NAMESPACE(Field)
{
    /START_CLASS/NAME@MapdataCheckPoint/SIZE@0xD0/
    public:
        /START_STRUCT/NAME@SData/SIZE@0x18/
            /M/sead::Vector2f m_sector_left/0x8/0x0/
            /M/sead::Vector2f m_sector_right/0x8/0x8/
            /M/s8 m_jugem_point_index/0x1/0x10/
            /M/s8 m_check_point_type/0x1/0x11/
            /M/s8 m_check_point_prev/0x1/0x12/
            /M/s8 m_check_point_next/0x1/0x13/
            /U/s32/0x4/0x14/
        /END/

        /M/SData *m_data/0x4/0x0/
    /END/
}