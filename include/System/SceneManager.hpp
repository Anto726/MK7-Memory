#pragma once

#include "RootScene.hpp"

#include "../Object/CharacterEngine.hpp"

namespace System
{
    class SceneManager
    {
    public:
        virtual ~SceneManager() = default;

        inline auto get_character_engine_collection() const { return m_root_scene->get_character_engine()->m_collection; }

        RootScene *m_root_scene;
    };
    static_assert(sizeof(SceneManager) == 0x8);
}