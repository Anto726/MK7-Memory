#pragma once
#include "../fwddec.hpp"
#include "../Object/EEngineType.hpp"

#include <type_traits>

namespace System
{
    class EngineHolder
    {
    public:
        virtual ~EngineHolder() = default;

    public:
        class EngineManager
        {
        public:
            virtual ~EngineManager() = default;

        public:
            struct SEngineInfo
            {
                Object::ActorEngine *m_actor_engine;
                bool m_exists;
            };
            static_assert(sizeof(SEngineInfo) == 0x8);

        public:
            SEngineInfo m_engine_infos[static_cast<std::underlying_type_t<Object::EEngineType>>(Object::EEngineType::MAX)];
        };
        static_assert(sizeof(EngineManager) == 0xC);

    public:
        EngineManager m_engine_manager;
    };
    static_assert(sizeof(EngineHolder) == 0x10);
}