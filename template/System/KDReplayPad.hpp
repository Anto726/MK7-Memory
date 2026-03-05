#pragma once

#include "KDPadBinData.hpp"
#include "KDPad.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDReplayPad/SIZE@0x44/BASE@KDPad/BSIZE@0x44/VTABLE@True/
    public:
        // TODO
        virtual void *getDTIClassInfo() const;
        virtual void *getDTIClass() const;
        
        KDReplayPad();
        void setReplayBuffer(const KDPadBinData &);
    /END/
}
