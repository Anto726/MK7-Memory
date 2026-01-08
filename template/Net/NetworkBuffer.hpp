#pragma once

#include "eNetworkBufferType.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(Net)
{
    /START_CLASS/NAME@NetworkBuffer/SIZE@0x10/
    public:
		NetworkBuffer(eNetworkBufferType type, u8 *data, size_t size) : m_type(type), m_data(data), m_size(size), m_current(0)
		{
			memset(data, 0, size);
			m_current = 0; // NOTE: does it again for some reason?
		}

		void add(void *new_data, size_t new_data_size)
		{
			if (m_current + new_data_size > m_size)
				return;

			memcpy(m_data + m_current, new_data, new_data_size);
			m_current += new_data_size;
		}

        void clear()
		{
			memset(m_data, 0, m_size);
			m_current = 0;
		}

        void set(void *new_data, size_t new_data_size)
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