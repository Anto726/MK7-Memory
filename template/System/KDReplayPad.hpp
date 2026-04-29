#pragma once

#include "KDPadBinData.hpp"
#include "KDPad.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDReplayPad/SIZE@0x44/BASE@KDPad/BSIZE@0x44/VTABLE@True/
    public:
        // TODO
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        
        KDReplayPad();
        void setReplayBuffer(const KDPadBinData &);
    /END/
}
