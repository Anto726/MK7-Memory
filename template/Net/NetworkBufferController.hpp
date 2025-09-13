#pragma once

#include "../types.hpp"
#include "NetworkBuffer.hpp"

#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(Net)
{
    /START_CLASS/NAME@NetworkBufferController/SIZE@0x50/
    public:
        /START_CLASS/NAME@Buffer/SIZE@0x1C/
        public:
            /M/sead::FixedPtrArray<NetworkBuffer, 2> m_double_buffer/0x14/
            /M/u32 m_active_buffer/0x4/
            /M/u8 m_should_swap/0x1/

            NetworkBuffer* getActiveBuffer() {                
                return m_double_buffer.at(m_active_buffer);
            }

        /END/

        NetworkBuffer* getWriteBuffer() {            
            return m_write_buffers.at(0)->getActiveBuffer();
        }

        /M/eNetworkBufferType m_type/0x1/0x4/
        /M/sead::PtrArray<Buffer> m_write_buffers/0xC/0x8/
        /M/sead::PtrArray<Buffer> m_read_buffers/0xC/0x14/
        /M/u32 m_total_recv_buffer/0x4/0x28/
        /M/void* on_received_delegate1R/0x4/0x2C/
        /M/u8 m_critical_section[0x1C]/0x1C/0x30/
        /M/u8 m_has_recv_bitfield/0x1/0x4C/
        /M/u8 m_connector_ack_bitfield/0x1/0x4D/
    /END/
}