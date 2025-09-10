#pragma once

#include "KDAttT.hpp"

namespace MK7MEMORY_NAMESPACE {

class KDMtxT
{
public:
    KDAttT m_kd_att;
    sead::Vector3f m_vec;
};
static_assert(sizeof(KDMtxT) == 0x30);

}

