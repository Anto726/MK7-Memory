#pragma once

#include "../forward.hpp"
#include "KDPad.hpp"

#include <nn/hid/hid_DeviceStatus.h>

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPlayerPad/SIZE@0x50/BASE@KDPad/BSIZE@0x44/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual void init();
        virtual bool setterCheck();
        
        KDPlayerPad(ePadType);
        void setPadClamp(s16, s16);
        void setPadClampMode(nn::hid::CTR::PadReader::StickClampMode);
        void setPadNormalizeSw(f32);
        void setMirrorInput(bool);

        /M/bool m_update_setter/0x1/0x44/   // Checked by `setterCheck`
        /M/KDPadMirrorInputer *m_pad_mirror_inputer/0x4/0x48/
        /M/KDPadInputer *m_pad_inputer/0x4/0x4c/
    /END/
}
