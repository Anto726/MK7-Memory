#pragma once

#include "../../types.hpp"

// https://mk3ds.com/index.php/KMP_(File_Format)
BEGIN_NAMESPACE(Field)
{
    // NOTE: guessed name (was previously named MapdataPointDataBase but it is also used for paths)
    /START_CLASS/NAME@MapdataDataBase/TEMPLATE@template <typename T>/SIZE@0x4/SIZEOF@MapdataDataBase<void>/
    public:
        using SData = T;

        /M/T *m_data/0x4/0x0/
    /END/

    /START_CLASS/NAME@MapdataPathDataBase/TEMPLATE@template <typename T>/SIZE@0x8/SIZEOF@MapdataPathDataBase<void>/VTABLE@True/
    public:
        using SData = T;

        virtual int getStartPoint();
        virtual int getPointNum();
        virtual int getEndPoint();
        virtual bool isInclude(unsigned int);

        /M/T *m_data/0x4/0x4/
    /END/
}