#pragma once

#include "../forward.hpp"
#include "../types.hpp"
#include "KDThread.hpp"

#include <nn/hid/hid_DeviceStatus.h>

BEGIN_NAMESPACE(System)
{
    // KDThread name: "AppletLaunch"
    /START_CLASS/NAME@AppletLaunchThread/SIZE@0xac/BASE@KDThread/BSIZE@0xa4/
    public:
        virtual ~AppletLaunchThread();
        virtual void calcInner_(s32);

        /M/AppletLauncher *m_applet_launcher/0x4/0xa4/
        /U/s32/0x4/0xa8/
    /END/
}