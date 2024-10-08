#pragma once

#include <container/seadBuffer.h>
#include <container/seadPtrArray.h>

namespace Field
{
    template <typename Entry, typename Data>
    class MapdataAccessorBase
    {
    public:
        virtual void constructLocal() {}; // 0

        sead::Buffer<Data> m_datas;
        sead::PtrArray<Entry> m_entries;
    };
    static_assert(sizeof(MapdataAccessorBase<void *, void *>) == 0x18);
}