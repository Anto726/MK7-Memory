#pragma once

#include "../forward.hpp"
#include "../types.hpp"
#include "../callback.hpp"

#include "eNetworkBufferType.hpp"

#include <prim/seadDelegate.h>
#include <thread/seadCriticalSection.h>

BEGIN_NAMESPACE(Net)
{
    template <class T>
    class NetworkDataManager : public sead::IDisposer
    {
        using CriticalSection = u8 [0x1C]; // TODO: sead::CriticalSection CTR version in openEAD

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
        sead::Delegate1R<NetworkDataManager<T>, NetworkReceivedInfo const &, bool> m_delegate_on_received;
        NetworkEngine *m_network_engine;
        CriticalSection m_critical_section;
        bool unk; // initialized?
    };
    static_assert(sizeof(NetworkDataManager<void *>) == 0x54);
}