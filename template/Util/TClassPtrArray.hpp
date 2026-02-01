#pragma once

#include "../types.hpp"

#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(Util)
{
    template <typename T>
    class TClassPtrArray
    {
    public:
        sead::PtrArray<T> m_ptr_array;
        u8 m_unk;
    };
    static_assert(sizeof(TClassPtrArray<void *>) == 0x10);
}