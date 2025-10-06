#pragma once

#include "eNetworkBufferType.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(Net)
{
    /START_CLASS/NAME@NetworkBuffer/SIZE@0x10/
    public:
        void Clear()
		{
			m_current = 0;
			memset(m_data, 0, m_size);
		}

        void Add(void* new_data, size_t new_data_size)
		{
			if (m_current + new_data_size > m_size)
				return;
			memcpy(m_data + m_current, new_data, new_data_size);
			m_current += new_data_size;
		}

        void Set(void* new_data, size_t new_data_size)
		{
			if (new_data_size > m_size)
				return;
			memcpy(m_data, new_data, new_data_size);
			m_current = new_data_size;
		}

        /M/eNetworkBufferType m_type/0x4/0x0/
        /M/u8 *m_data/0x4/0x4/
        /M/size_t m_size/0x4/0x8/
        /M/size_t m_current/0x4/0xC/
    /END/
}