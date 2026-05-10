#pragma once

#include "../forward.hpp"

#include "Section.hpp"
#include "SequenceResource.hpp"
#include "SceneSequenceProxy.hpp"

#include <prim/seadSafeString.hpp>

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@SceneSequence/SIZE@0x48/
    public:
        void sceneStart(s32);
        void sceneFinish(s32);
        void updateState();
        void createEngines(System::GameScene *);
        void createSections();
        void accept(Object::ActorVisitor &);
        void create(const sead::SafeString &, const sead::SafeString &, SceneSequenceProxy *);
        void destroy();
        void init(u16, Section::EFadeKind, u32);
        void step();
        SceneSequence();
        ~SceneSequence();

        /M/SequenceResource m_resource/0x14/0x00/
        /M/Section *m_section/0x4/0x18/
        /M/SceneSequenceProxy *m_proxy/0x4/0x1C/
        /M/s32 field_0x20/0x4/0x20/
    /END/
}