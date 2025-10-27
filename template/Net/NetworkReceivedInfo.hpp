#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Net)
{
    /START_STRUCT/NAME@NetworkReceivedInfo/SIZE@0xC/
        /M/void *m_data/0x4/0x0/
        /M/size_t m_size/0x4/0x4/
        /M/s32 m_connector_id/0x4/0x8/ // Could be station ID, but not sure
    /END/
}