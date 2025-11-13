#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "../Object/Actor.hpp"

#include "SequenceResource.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@Section/SIZE@0x34/BASE@Object::Actor/BSIZE@0x8/VTABLE@True/
    public:
        // TODO: Complete this enum
        enum class EFadeKind : u8
        {
            FADE_KIND_0
        };

        enum class EState : u8
        {
            CREATE = 1,
            ENTER,
            STANDBY,
            START,
            /**
             * - State is `COMPLETE` only when `Section.nextState == FINISH_OR_REENTER`
             * - Otherwise state is `CANCEL`
             */
            COMPLETE_OR_CANCEL,
            /**
             * - State is `FINISH` only when `Section.nextState == EXIT`
             * - Otherwise state is `REENTER`
             */
            FINISH_OR_REENTER,
            EXIT,
            CLEAR
        };
        
    private:
        /M/SequenceResource *m_resource/0x4/0x8/
        /M/SequenceLayer *m_parent_layer/0x4/0xC/
        /M/SequenceResource::SectionBlock *m_block/0x4/0x10/
        /M/EState m_current_state/0x1/0x14/
        /M/EState m_next_state/0x1/0x15/
        /M/u32 m_sequence_id/0x4/0x18/
        // In blocks of type `PracticalSectionBlock`, this offset is relative to the start of the mode table modeTable.
        // Type: SequenceResource::NameTableBlock
        /M/u16 m_mode_name_item_offset/0x2/0x1C/
        // This offset is relative to the start of block's enter code table
        // Type: SequenceResource::NameTableBlock
        /M/u16 m_enter_code_item_offset/0x2/0x1E/
        // This offset is relative to the start of block's return code table
        // Type: SequenceResource::NameTableBlock
        /M/u16 m_return_code_item_offset/0x2/0x20/
        /M/u32 m_active_time/0x4/0x24/
        /M/u32 m_active_time_2/0x4/0x28/
        /M/EFadeKind m_fade_kind/0x1/0x2C/
        /M/u32 m_fade_delay/0x4/0x30/
    /END/
}