#pragma once

#include "KDAttT.hpp"

BEGIN_GLOBAL_NAMESPACE

/START_CLASS/NAME@KDMinMax/SIZE@0x18/
public:
    void convToWorld(KDAttT *);
    void extend(sead::Vector3f *);

    inline void reset()
    {
        m_min = sead::Vector3f::zero;
        m_max = sead::Vector3f::zero;
    }

    /M/sead::Vector3f m_min/0xC/0x0/
    /M/sead::Vector3f m_max/0xC/0xC/
/END/

END_GLOBAL_NAMESPACE
