#pragma once

#include "../types.hpp"

#include "Section.hpp"
#include "SequenceResource.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@SerialSequence/SIZE@0x48/BASE@Section/BSIZE@0x34/VTABLE@True/
        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual ~SerialSequence(); // 2 (_sub_object), 3 (_deallocating)
        virtual s32 getSectionType() const;
        virtual bool isCompletable() const;
        virtual bool isSyncFadein() const;
        virtual s32 getFadeFelay() const;
        virtual u32 updateState();
        virtual void step();
        virtual void ready();
        virtual void enter(Section::EFadeKind, u32);
        virtual void standby();
        virtual void start();
        virtual void complete();
        virtual void cancel(Section::EFadeKind, u32);
        virtual void finish(Section::EFadeKind, u32);
        virtual void reenter();
        virtual void exit();
        virtual void clear();
        virtual void sceneStart(s32);
        virtual void sceneFinish(s32);

        SerialSequence();

        /M/Section *m_next_section/0x4/0x34/
        /M/s32 m_subsection_list_block_entry_index/0x4/0x38/
        /M/SequenceResource::SequenceBlock *m_block/0x4/0x3C/
        // In the Subsection list, this is the index to the entry that will be used to go to the next menu.
        /M/s32 m_next_subsection_list_block_entry_index/0x4/0x40/
        /M/u16 m_next_return_code_item_index/0x4/0x44/
    /END/
}