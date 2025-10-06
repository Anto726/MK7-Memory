#pragma once

#include "../types.hpp"
#include "NetworkBufferController.hpp"

#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(Net)
{
    /START_CLASS/NAME@NetworkStationBufferManager/SIZE@0xE0/
    public:
        NetworkBuffer* getWriteBuffer(eNetworkBufferType type) {
            return m_buffer_controllers.at((s32)type)->getWriteBuffer();
        }

        /M/sead::PtrArray<NetworkBufferController> m_buffer_controllers/0xC/0x0/
        /M/NetworkBufferController m_container_controller/0x50/0xC/
    /END/
}