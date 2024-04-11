#pragma once

#include "Scene.hpp"
#include "EngineHolder.hpp"

namespace System
{
    class RootScene : public Scene
    {
    public:
        EngineHolder m_engine_holder;
    };
    static_assert(sizeof(RootScene) == 0x1F0);
}