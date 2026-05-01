#pragma once

#include "../forward.hpp"
#include "../types.hpp"
#include "KDThread.hpp"

#include <nn/hid/hid_DeviceStatus.h>

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@MiiSelectAppletLauncher/SIZE@0x44/BASE@AppletLauncher/BSIZE@0x44/VTABLE@True/
    public:
        void launch(const miisel::Parameter *, const wchar_t *);
    /END/
}