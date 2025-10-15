#pragma once

#include <math/seadVector.h>

#include "../../types.hpp"

BEGIN_NAMESPACE(Field)
{
    class MapdataAreaCalcBase;
    /START_CLASS/NAME@MapdataAreaPoint/SIZE@0x8/
    public:
        /START_STRUCT/NAME@SData/SIZE@0x30/
            /M/u8 m_shape/0x1/0x0/
            /M/u8 m_type/0x1/0x1/
            /M/s8 m_came_index/0x1/0x2/
            /M/sead::Vector3f position/0xC/0x4/
            /M/sead::Vector3f rotation/0xC/0x10/
            /M/sead::Vector3f scale/0xC/0x1C/
            /M/u16 m_setting1/0x2/0x28/
            /M/u16 m_setting2/0x2/0x2A/
            /M/s8 m_route_id/0x1/0x2C/
            /M/s8 m_enemy_id/0x1/0x2D/
        /END/

        /M/SData *m_data/0x4/0x0/
        /M/MapdataAreaCalcBase *m_area_calc/0x4/0x4/
    /END/

    /START_CLASS/NAME@MapdataAreaCalcBase/SIZE@0x40/VTABLE@True/
    public:
        virtual bool isInside(sead::Vector3f &position); // 0
        virtual bool isInsideShape(sead::Vector3f &position); // 0
        /M/MapdataAreaPoint::SData *m_area_point/0x4/0x38/
        /M/u8 m_area_shape/0x1/0x3C/
        /M/u8 m_area_type/0x1/0x3D/
    /END/

    class MapdataAreaCalcBox : public MapdataAreaCalcBase
    {
        bool isInsideShape(sead::Vector3f &position) override;
    };
    static_assert(sizeof(MapdataAreaCalcBox) == 0x40);

    class MapdataAreaCalcCylinder : public MapdataAreaCalcBase
    {
        bool isInside(sead::Vector3f &position) override;
        bool isInsideShape(sead::Vector3f &position) override;
    };
    static_assert(sizeof(MapdataAreaCalcCylinder) == 0x40);
}