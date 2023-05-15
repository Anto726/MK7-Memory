#pragma once
#include "Scene.hpp"
#include "EngineHolder.hpp"

#include <type_traits>

namespace System
{
    class RootScene : public Scene
    {
    public:
        inline Object::ActorEngine *get_engine(Object::EEngineType engine_type) const
        {
            auto const &engine_info = m_engine_manager.m_engine_infos[static_cast<std::underlying_type_t<decltype(engine_type)>>(engine_type)];
            
            if (engine_info.m_exists)
            {
                auto const result = reinterpret_cast<size_t>(engine_info.m_actor_engine) ^ ENGINE_KEY;
                return reinterpret_cast<Object::ActorEngine *>(result);
            }

            return {};
        }

    public:
        EngineHolder::EngineManager m_engine_manager;
    
    private:
        inline static constexpr size_t ENGINE_KEY = 0x75F1B26B;
    };
    static_assert(sizeof(RootScene) == 0x1EC);
}