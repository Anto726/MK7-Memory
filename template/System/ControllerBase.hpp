#pragma once

#include "../Object/Actor.hpp"
#include "../types.hpp"
#include "../forward.hpp"
#include "GyroscopeReaderThread.hpp"

#include <controller/ctr/seadCtrHidDevice.h>
#include <math/seadVector.h>

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@ControllerBase/SIZE@0x6C/BASE@Object::Actor/BSIZE@0x8/
    public:
        /START_CLASS/NAME@GyroscopeInfo/SIZE@0x40/
        public:
            void calc(sead::CtrHidDevice *);

            /M/GyroscopeReaderThread::SStatus m_status/0x40/0x0/
        /END/

        virtual Object::DTIClassInfo *getDTIClassInfo() const; // 0
		virtual Object::DTIClassInfo *getDTIClass() const; // 1
        virtual void init();
        virtual void calc();
        virtual void initImpl();
        virtual void calcImpl();

        ControllerBase();

        /M/KDPadControllerCore *m_pad_controller_core/0x4/0x8/
        /M/bool m_0xc/0x1/0xc/
        /M/bool m_gyroscope_is_active/0x1/0xe/
        /M/bool m_touch_screen_held/0x1/0x10/
        /M/bool m_touch_screen_pressed/0x1/0x11/
        /M/sead::Vector2s m_touch_input/0x4/0x14/
        /M/s32 m_0x18/0x4/0x18/
        /M/GyroscopeInfo m_gyroscope_info/0x40/0x28/
        /M/sead::CtrHidDevice *m_hid_device/0x4/0x68/
    /END/
}
