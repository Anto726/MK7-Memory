#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "Section.hpp"
#include "SequenceResource.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@LayeredSequence/SIZE@0x48/BASE@Section/BSIZE@0x34/VTABLE@True/
        /M/u32 m_num_layers/0x4/0x34/
        /M/u32 m_num_layers_2/0x4/0x38/ // TODO: More research on this field
        /M/SequenceLayer **m_layers/0x4/0x3C/
        /M/SequenceResource::SequenceBlock **m_blocks/0x4/0x40/
    /END/
}