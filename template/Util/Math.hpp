#pragma once

#include "../types.hpp"

#include <math/seadVector.hpp>

BEGIN_NAMESPACE(Util::Math)
{
    void updateMin(sead::Vector3f *dst, sead::Vector3f const &src)
    {
        dst->x = sead::MathCalcCommon<f32>::clampMax(src.x, dst->x);
        dst->y = sead::MathCalcCommon<f32>::clampMax(src.y, dst->y);
        dst->z = sead::MathCalcCommon<f32>::clampMax(src.z, dst->z);
    }

    void updateMax(sead::Vector3f *dst, sead::Vector3f const &src)
    {
        dst->x = sead::MathCalcCommon<f32>::clampMin(src.x, dst->x);
        dst->y = sead::MathCalcCommon<f32>::clampMin(src.y, dst->y);
        dst->z = sead::MathCalcCommon<f32>::clampMin(src.z, dst->z);
    }
}