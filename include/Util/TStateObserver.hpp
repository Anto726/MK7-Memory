#pragma once

#include "../types.hpp"

namespace Util
{
    template <typename T>
    class TStateObserver
    {
    public:
        enum class Status : u8
        {
            Stock = 3,
        };

        virtual ~TStateObserver() {}; // 1
        void resetState() {}; // 2
        void executeState() {}; // 3

        Status m_status_current;
        u8 gap_0x5[0x1B];
    };
    static_assert(sizeof(TStateObserver<void>) == 0x20);
}