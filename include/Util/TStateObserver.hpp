#pragma once

#include "../types.hpp"

namespace Util
{
    template <typename T>
    class TStateObserver
    {
    public:
        virtual ~TStateObserver() {}; // 1
        virtual void resetState() {}; // 2
        virtual void executeState() {}; // 3

        u8 m_status_current;
        u8 gap_0x5[0x1B];
    };
    static_assert(sizeof(TStateObserver<void>) == 0x20);
}