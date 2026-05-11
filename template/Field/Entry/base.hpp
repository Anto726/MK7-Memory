#pragma once

#include "../../types.hpp"

BEGIN_NAMESPACE(Field)
{
    // NOTE: guessed name
    /START_CLASS/NAME@MapdataPointDataBase/TEMPLATE@template <typename T>/SIZE@0x4/SIZEOF@MapdataPointDataBase<void>/
    public:
        using SData = T;

        /M/T *m_data/0x4/0x0/
    /END/

    /START_CLASS/NAME@MapdataPathDataBase/TEMPLATE@template <typename T>/SIZE@0x8/SIZEOF@MapdataPathDataBase<void>/VTABLE@True/
    public:
        virtual int getStartPoint();
        virtual int getPointNum();
        virtual int getEndPoint();
        virtual bool isInclude(unsigned int);

        /M/T *m_data/0x4/0x4/
    /END/
}