#pragma once

#include "../forward.hpp"

#include "SceneManager.hpp"

namespace System
{
    class RootSystem
    {
    public:
        virtual ~RootSystem() = default;

        inline auto get_field_director() const { return m_scene_manager->get_character_engine_collection()->m_field_director; }
        inline auto get_race_director() const { return m_scene_manager->get_character_engine_collection()->m_race_director; }
        inline auto get_item_director() const { return m_scene_manager->get_character_engine_collection()->m_item_director; }

        SceneManager *m_scene_manager;
    };
    static_assert(sizeof(RootSystem) == 0x8);

    // NOTE: must be provided by the user
    inline RootSystem *g_root_system{};
}