#pragma once

#include "Scene.hpp"
#include "EngineHolder.hpp"

namespace System
{
    class RootScene : public Scene
    {
    public:
        inline Object::ActorEngine *get_engine(Object::EEngineType engine_type) const
        {
            auto const &engine_info = m_engine_manager.get_engine_info(engine_type);
            return engine_info.m_exists ? reinterpret_cast<Object::ActorEngine *>(reinterpret_cast<decltype(c_engine_key)>(engine_info.m_actor_engine) ^ c_engine_key) : nullptr;
        }

    public:
        EngineHolder::EngineManager m_engine_manager;
    
    private:
        inline static constexpr u32 c_engine_key = 0x75F1B26B;
    };
    static_assert(sizeof(RootScene) == 0x1EC);
}