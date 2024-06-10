#pragma once

#include "SceneManager.hpp"

namespace System
{
    class RootSystem
    {
    public:
        virtual ~RootSystem() = default;

        inline auto get_race_director() const { return m_scene_manager->get_character_engine_collection()->m_race_director; }
        inline auto get_item_director() const { return m_scene_manager->get_character_engine_collection()->m_item_director; }

        SceneManager *m_scene_manager;
    };
    static_assert(sizeof(RootSystem) == 0x8);
}