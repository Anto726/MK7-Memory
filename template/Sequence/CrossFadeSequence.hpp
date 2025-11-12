#pragma once

#include "../types.hpp"

#include "Section.hpp"
#include "SequenceResource.hpp"

BEGIN_NAMESPACE(Sequence)
{
    // TODO: Complete this enum
    enum class ECrossFadeType : u8
    {
        CROSS_FADE_TYPE_0
    };

    /START_CLASS/NAME@CrossFadeSequence/SIZE@0x50/BASE@Section/BSIZE@0x34/VTABLE@True/
        /M/Section *field_0x34/0x4/0x34/
        /M/Section *field_0x38/0x4/0x38/
        // In the Subsection list, this is the index to the entry that will be used to go to the next menu.
        /M/s32 m_next_subsection_list_block_entry_index/0x4/0x3C/
        /M/ECrossFadeType m_cross_fade_type/0x1/0x40/
        /M/SequenceResource::CrossFadeSequenceBlock *m_block/0x4/0x44/
        /M/s32 field_0x48/0x4/0x48/
        /M/u16 field_0x4C/0x2/0x4C/
    /END/
}