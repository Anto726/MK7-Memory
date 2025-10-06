#pragma once

#include "KDAttT.hpp"

BEGIN_GLOBAL_NAMESPACE

class KDMtxT
{
public:
    KDAttT m_kd_att;
    sead::Vector3f m_vec;
};
static_assert(sizeof(KDMtxT) == 0x30);

END_GLOBAL_NAMESPACE

