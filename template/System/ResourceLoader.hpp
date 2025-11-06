#pragma once

#include "../forward.hpp"
#include "../types.hpp"
#include "EArchiveID.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@ResourceLoader/SIZE@0x90/
    public:
        // TODO: LoadArg size needs to be checked again
        /START_CLASS/NAME@LoadArg/SIZE@0x14/
            /M/void *m_load_heap/0x4/0x0/
            /M/u32 m_load_alignment/0x4/0x4/
            /U/u32/0x4/0x8/
            /U/bool/0x1/0xC/
            /M/EArchiveID m_archive_id/0x4/0x10/
        /END/
        /M/void *m_last_loaded_file_address/0x4/0x80/
        /M/u32 m_last_loaded_file_size/0x4/0x84/
    /END/
}