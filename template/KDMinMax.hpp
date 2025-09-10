#pragma once

#include "KDAttT.hpp"

namespace MK7MEMORY_NAMESPACE {

class KDMinMax
{
public:
    sead::Vector3f m_min;
    sead::Vector3f m_max;
};
static_assert(sizeof(KDMinMax) == 0x18);

}

