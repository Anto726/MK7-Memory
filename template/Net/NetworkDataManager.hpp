#pragma once

#include "../forward.hpp"
#include "../types.hpp"
#include "../callback.hpp"

#include "eNetworkBufferType.hpp"

#include <thread/seadCriticalSection.h>

BEGIN_NAMESPACE(Net)
{
    template <class T>
    class NetworkDataManager : public sead::IDisposer
    {
    public:
        virtual ~NetworkDataManager() = default;
        virtual bool preUpdate() { return {}; }
        virtual void updateCore() {}
        virtual void postUpdate() {}
        virtual void postInit() {}
        virtual bool onReceivedCore(NetworkReceivedInfo *info) { return {}; }

        T m_node_data;
        eNetworkBufferType m_network_buffer_type;
        NetworkBufferController *m_network_buffer_controller;
        NetworkStationBufferManager *m_network_station_buffer_manager;
        u8 unk1[8];
        callback f_on_received;
        NetworkEngine *m_network_engine;
        u8 m_critical_section[0x1C];
        u8 unk2;
    };
    static_assert(sizeof(NetworkDataManager<void *>) == 0x54);
}