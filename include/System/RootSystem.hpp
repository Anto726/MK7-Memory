#pragma once

#include "SceneManager.hpp"

#include "SystemEngine.hpp"

#include "../Sequence/SequenceEngine.hpp"

namespace System
{
    class RootSystem
    {
    public:
        virtual ~RootSystem() = default;

        inline auto get_kart_director() const { return m_scene_manager->get_character_engine_collection()->m_kart_director; }
        inline auto get_field_director() const { return m_scene_manager->get_character_engine_collection()->m_field_director; }
        inline auto get_race_director() const { return m_scene_manager->get_character_engine_collection()->m_race_director; }
        inline auto get_item_director() const { return m_scene_manager->get_character_engine_collection()->m_item_director; }

        inline auto get_game_setting() const { return m_root_scene->get_system_engine()->m_game_setting; }

        inline auto get_menu_data() const { return m_root_scene->get_sequence_engine()->m_menu_data; }
        inline auto get_message_id_converter() const { return m_root_scene->get_sequence_engine()->m_message_id_converter; }

        SceneManager *m_scene_manager;
        u8 gap_0x8[0x8];
        RootScene *m_root_scene;
    };
    static_assert(sizeof(RootSystem) == 0x14);

    // NOTE: must be provided by the user
    inline RootSystem *g_root_system{};
}