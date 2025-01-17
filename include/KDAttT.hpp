#pragma once

#include <math/seadVector.hpp>

class KDAttT
{
public:
    sead::Vector3f m_forward;
    sead::Vector3f m_right;
    sead::Vector3f m_up;
};
static_assert(sizeof(KDAttT) == 0x24);