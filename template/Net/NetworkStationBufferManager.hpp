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
            enum class Status : u32
            {
                Free,
                Registered,
                Unregistered,
            };

            /M/Status m_status/0x4/0x0/
            /M/bool m_is_ai/0x1/0x4/
            /M/s32 m_station_id/0x4/0x8/
            /M/void *m_do_handle/0x4/0xC/
            /M/s32 m_buffer_id/0x4/0x10/
        /END/

        /START_CLASS/NAME@ConnectorInfo/SIZE@0xC/
        public:
            /M/StationInfo *m_station_info/0x4/0x0/
            /M/s32 m_player_id/0x4/0x4/
            /M/u32 m_aid/0x4/0x8/
        /END/

        /START_CLASS/NAME@StationAccessInfo/SIZE@0x10/
        public:
            /M/sead::Buffer<StationInfo> m_station_infos/0x8/0x0/
            /M/u8 m_bitflags/0x1/0x8/
            /M/s32 m_count/0x4/0xC/
        /END/

        NetworkBuffer *getWriteBuffer(eNetworkBufferType type)
        {
            return m_buffer_controllers.at(std::to_underlying(type))->getWriteBuffer();
        }

        int getPlayerID(int aid)
        {
            if (aid == -1)
                return -1;

            auto player_id = m_connector_info_racers[aid].m_player_id;
            if (player_id != -1)
                return player_id;
            
            return m_connector_info_audience[aid].m_player_id;
        }

        /M/sead::PtrArray<NetworkBufferController> m_buffer_controllers/0xC/0x0/
        /M/NetworkBufferController m_container_controller/0x50/0xC/
        /M/StationAccessInfo m_station_access_info_racers/0x10/0x5C/ // Entries 9
        /M/StationAccessInfo m_station_access_info_audience/0x10/0x6C/ // Entries 8
        /M/sead::Buffer<ConnectorInfo> m_connector_info_racers/0x8/0x7C/ // Entries: 17
        /M/sead::Buffer<ConnectorInfo> m_connector_info_audience/0x8/0x84/ // Entries: 8
        /U/sead::PtrArray<ConnectorInfo>/0xC/0x8C/ // racers?
        /M/sead::PtrArray<ConnectorInfo> m_player_without_deleted/0xC/0x98/
        /M/sead::PtrArray<ConnectorInfo> m_other_player_not_deleted/0xC/0xA4/
        /M/sead::PtrArray<ConnectorInfo> m_without_unregistered/0xC/0xB0/
        /M/sead::Buffer<s32> m_player_id_to_aid/0x8/0xBC/
        /M/sead::Buffer<s32> m_buffer_id_to_aid/0x8/0xC4/ // Entries: 8
        /M/u8 m_free_aid_bits/0x1/0xCC/
        /M/u8 m_unregistered_aid_bits/0x1/0xCD/ // getConnectedAIDBitmap
        /M/u8 m_registered_aid_bits/0x1/0xCE/
        /M/s32 m_player_num/0x4/0xD0/
        /U/sead::Buffer<s32>/0x8/0xD4/ // m_without_unregistered again?
        /M/u8 m_wbt_started/0x1/0xDC/
    /END/
}