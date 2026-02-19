#pragma once

#include "../types.hpp"

#include "EngineHolder.hpp"
#include "Scene.hpp"

BEGIN_NAMESPACE(System)
{
    class RootScene : public Scene
    {
    public:
        inline auto get_character_engine() const { return m_engine_holder.get_engine<Object::CharacterEngine>(Object::EEngineType::Character); }
        inline auto get_camera_engine() const { return m_engine_holder.get_engine<Camera::CameraEngine>(Object::EEngineType::Camera); }
        inline auto get_render_engine() const { return m_engine_holder.get_engine<Render::RenderEngine>(Object::EEngineType::Render); }
        inline auto get_system_engine() const { return m_engine_holder.get_engine<SystemEngine>(Object::EEngineType::System); }
        inline auto get_sequence_engine() const { return m_engine_holder.get_engine<Sequence::DashSequenceEngine>(Object::EEngineType::Sequence); }
        inline auto get_mii_engine() const { return m_engine_holder.get_engine<Mii::MiiEngine>(Object::EEngineType::Mii); }
        inline auto get_sound_engine() const { return m_engine_holder.get_engine<Sound::SndEngine>(Object::EEngineType::Sound); }
        inline auto get_network_engine() const { return m_engine_holder.get_engine<Net::NetworkEngine>(Object::EEngineType::Network); }
        inline auto get_effect_engine() const { return m_engine_holder.get_engine<Effect::EffectEngine>(Object::EEngineType::Effect); }

        EngineHolder m_engine_holder;
    };
    static_assert(sizeof(RootScene) == 0x26C);
}