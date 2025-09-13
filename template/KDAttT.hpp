#pragma once

#include "types.hpp"

#include <math/seadVector.hpp>

BEGIN_GLOBAL_NAMESPACE

class KDAttT
{
public:
    sead::Vector3f m_forward;
    sead::Vector3f m_right;
    sead::Vector3f m_up;
};
static_assert(sizeof(KDAttT) == 0x24);

END_GLOBAL_NAMESPACE

