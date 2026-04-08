#pragma once

#include "../types.hpp"
#include "../versions.h"

#include <prim/seadSafeString.hpp>

#if GAME_VERSION == VERSION_E3_2010

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@SDMCManager/SIZE@0x94/
    public:
        // 0x00162e44
        virtual ~SDMCManager();
        // 0x00162ddc
        SDMCManager();

        // 0x00162c88
        bool openFile(const sead::SafeString &, void * = nullptr /* sead::CtrSDFileDevice * */) const;
        // 0x00162db0
        void closeFile();
        // 0x001cb640
        void writeStringToFile(const char *, ...);

        /M/void *m_file_device/0x4/0x4/    // sead::CtrSDFileDevice *
        /M/bool m_file_is_open/0x1/0x90/
    /END/
}

#endif
