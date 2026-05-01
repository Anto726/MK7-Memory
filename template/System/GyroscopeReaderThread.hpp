#pragma once

#include "../types.hpp"
#include "KDThread.hpp"

#include <nn/hid/hid_DeviceStatus.h>

BEGIN_NAMESPACE(System)
{
    // KDThread name: "GyroReader"
    /START_CLASS/NAME@GyroscopeReaderThread/SIZE@0x1628/BASE@KDThread/BSIZE@0xa4/
    public:
        /START_CLASS/NAME@SStatus/SIZE@0x40/
        public:
            SStatus();

            /M/nn::hid::CTR::GyroscopeStatus m_base/0x3c/0x0/
            /M/bool m_is_calc/0x1/0x3c/
        /END/

        ~GyroscopeReaderThread();
        void calcInner_(s32);

        void init();

        /M/SStatus m_status[2]/0x80/0xa4/
        /M/s32 m_status_array_idx/0x4/0x124/
    /END/
}
