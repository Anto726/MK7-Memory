#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Util)
{
    /START_CLASS/NAME@JmpResource/SIZE@0x10/VTABLE@True/
    public:
        // TODO: needs to be verified along with the name
        /START_STRUCT/NAME@Header/SIZE@0x58/
            /M/u32 m_magic/0x4/0x0/
            /M/u32 m_file_length/0x4/0x4/
            /M/u16 m_accessor_num/0x2/0x8/
            /M/u16 m_header_length/0x2/0xA/
            /M/u32 m_revision_number/0x4/0xC/
            /M/u32 m_section_offsets[18]/0x48/0x10/
        /END/

        virtual ~JmpResource() = default;
        virtual void mount();

        /M/Header *m_header/0x4/0x4/
        /M/u32 m_magic/0x4/0x8/ // "CDMD"
        /M/size_t m_accessor_num/0x4/0xC/ // 18
    /END/
}