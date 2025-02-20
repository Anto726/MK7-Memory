#pragma once

#include "EngineHolder.hpp"
#include "Scene.hpp"

namespace System
{
    class RootScene : public Scene
    {
    public:
        inline auto get_character_engine() const { return m_engine_holder.get_engine<Object::CharacterEngine>(Object::EEngineType::Character); }
        inline auto get_system_engine() const { return m_engine_holder.get_engine<SystemEngine>(Object::EEngineType::System); }
        inline auto get_sequence_engine() const { return m_engine_holder.get_engine<Sequence::SequenceEngine>(Object::EEngineType::Sequence); }

        EngineHolder m_engine_holder;
    };
    static_assert(sizeof(RootScene) == 0x220);
}