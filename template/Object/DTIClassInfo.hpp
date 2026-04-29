#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include <prim/seadSafeString.hpp>

BEGIN_NAMESPACE(Object)
{
	/START_CLASS/NAME@DTIClassInfo/SIZE@0x10/
	public:
        ~DTIClassInfo();

		/M/DTIClassInfo *m_parent/0x4/0x0/
        /M/sead::SafeString m_name/0x8/0x4/
        /M/s32 m_id/0x4/0xc/
	/END/
}