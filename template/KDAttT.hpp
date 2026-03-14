#pragma once

#include "types.hpp"

#include <math/seadVector.hpp>

BEGIN_GLOBAL_NAMESPACE

/START_CLASS/NAME@KDAttT/SIZE@0x24/
public:
    KDAttT() {};

    inline void reset()
    {
        m_forward = sead::Vector3f::zero;
        m_right = sead::Vector3f::zero;
        m_up = sead::Vector3f::zero;
    }

    inline void init()
    {
        m_forward = sead::Vector3f::ex;
        m_right = sead::Vector3f::ey;
        m_up = sead::Vector3f::ez;
    }

    // TODO: make sure names aren't mixed up
    /M/sead::Vector3f m_forward/0xC/0x0/
    /M/sead::Vector3f m_right/0xC/0xC/
    /M/sead::Vector3f m_up/0xC/0x18/
/END/

END_GLOBAL_NAMESPACE
