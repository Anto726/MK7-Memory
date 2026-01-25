#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Util)
{
    template <typename T>
    class TClassPtrArray
    {
    public:
        u8 unk[16]; // sead::PtrArray somewhere?
    };
    static_assert(sizeof(TClassPtrArray<void *>) == 0x10);
}