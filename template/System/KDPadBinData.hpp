#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(System)
{
    // Raw ghost input data
    /START_STRUCT/NAME@KDPadBinData/SIZE@0x27d8/
        // Name is made up
        /START_STRUCT/NAME@InputBuffer/SIZE@0x27d4/
            /M/u8 m_data[0x27d4]/0x27d4/0x0/
        /END/
        
        /M/InputBuffer m_input_buffer/0x27d4/0x0/
        /M/u32 m_checksum/0x4/0x27d4/
    /END/
}
