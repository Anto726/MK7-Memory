#pragma once

#include "../forward.hpp"

#include "../Object/EEngineType.hpp"

#include <utility>

namespace System
{
    class EngineHolder
    {
    public:
        class EngineManager
        {
        public:
            virtual ~EngineManager() = default;

            struct SEngineInfo
            {
                Object::ActorEngine *engine;
                bool exists;
                u8 gap_0x5[0x7];
            };
            static_assert(sizeof(SEngineInfo) == 0xC);

            inline auto const &get_engine_info(Object::EEngineType type) const { return m_engine_infos[std::to_underlying(type)]; }

            SEngineInfo m_engine_infos[std::to_underlying(Object::EEngineType::MAX)];
        };
        static_assert(sizeof(EngineManager) == 0x10);

        template <typename t>
        inline t *get_engine(Object::EEngineType type) const
        {
            auto constexpr engine_key = u32{0x75F1B26B};

            auto const &engine_info = m_engine_manager.get_engine_info(type);
            return engine_info.exists ? reinterpret_cast<t *>(reinterpret_cast<decltype(engine_key)>(engine_info.engine) ^ engine_key) : nullptr;
        }

        EngineManager m_engine_manager;
    };
    static_assert(sizeof(EngineHolder) == 0x10);
}