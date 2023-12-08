#pragma once

#include "../forward.hpp"

#include "../Object/EEngineType.hpp"

#include <utility>

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

            inline SEngineInfo const &get_engine_info(Object::EEngineType engine_type) const
            {
                return m_engine_infos[std::to_underlying(engine_type)];
            }

        public:
            SEngineInfo m_engine_infos[std::to_underlying(Object::EEngineType::MAX)];
        };
        static_assert(sizeof(EngineManager) == 0xC);

    public:
        EngineManager m_engine_manager;
    };
    static_assert(sizeof(EngineHolder) == 0x10);
}