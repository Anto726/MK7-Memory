#pragma once

#include "../types.hpp"
#include "../forward.hpp"

#include "../Object/TDirectorArray.hpp"
#include "../Object/TLinkSocket.hpp"

#include "Section.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@SectionDirector/SIZE@0x38/BASE@Object::TDirectorArray<Section, Object::TLinkSocket<Object::Actor, Object::Actor>>/BSIZE@0x28/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~SectionDirector();
        virtual void create(const Object::ArgumentObj *);
        virtual void accept(Object::ActorVisitor &);

        SectionDirector();
        void destroy();
        bool attachedDisableSectionFinder(Section *);
        Section *findAttachedDisableSection(u32, SequenceLayer *);
        void detachSection(const SequenceLayer *);

        /M/u8 m_section_type/0x1/0x28/  // See the `SectionType` enum in `SequenceResource.hpp`
        /M/u32 m_sequence_id/0x4/0x2c/
        /M/SequenceLayer *m_layer/0x4/0x30/
        /M/SequenceResource *m_resource/0x4/0x34/
    /END/
}