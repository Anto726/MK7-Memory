#pragma once

#include "../types.hpp"
#include "NetworkBufferController.hpp"

#include <container/seadPtrArray.h>
#include <container/seadBuffer.h>

BEGIN_NAMESPACE(Net)
{
    /START_CLASS/NAME@NetworkStationBufferManager/SIZE@0xE0/
    public:
        /START_CLASS/NAME@StationInfo/SIZE@0x14/
        public:
        /END/

        /START_CLASS/NAME@ConnectorInfo/SIZE@0xC/
        public:
            /M/u32 m_player_id/0x4/0x4/
        /END/

        NetworkBuffer* getWriteBuffer(eNetworkBufferType type) {
            return m_buffer_controllers.at((s32)type)->getWriteBuffer();
        }

        int getPlayerID(int connectorID) {
            if (connectorID == -1)
                return -1;

            int ret = m_unk_0x7C[connectorID].m_player_id;
            if (ret == -1) {
                ret = m_unk_0x84[connectorID].m_player_id;
            }
            return ret;
        }

        /M/sead::PtrArray<NetworkBufferController> m_buffer_controllers/0xC/0x0/
        /M/NetworkBufferController m_container_controller/0x50/0xC/
        /U/sead::Buffer<StationInfo>/0x8/0x5C/ // Entries: 8
        /U/sead::Buffer<StationInfo>/0x8/0x6C/ // Entries: 9
        /U/sead::Buffer<ConnectorInfo>/0x8/0x7C/ // Entries: 17
        /U/sead::Buffer<ConnectorInfo>/0x8/0x84/ // Entries: 8
    /END/
}