#pragma once

#include "KDAttT.hpp"

BEGIN_GLOBAL_NAMESPACE

/START_CLASS/NAME@KDMtxT/SIZE@0x30/
public:
    inline void reset()
    {
        m_kd_att.reset();
        m_vec = sead::Vector3f::zero;
    }

    inline void init()
    {
        m_kd_att.init();
        m_vec = sead::Vector3f::zero;
    }

    /M/KDAttT m_kd_att/0x24/0x0/
    /M/sead::Vector3f m_vec/0xC/0x24/
/END/

END_GLOBAL_NAMESPACE
