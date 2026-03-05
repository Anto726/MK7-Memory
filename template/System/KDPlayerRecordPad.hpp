#pragma once

#include "KDPad.hpp"
#include "KDPadBinData.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPlayerRecordPad/SIZE@0x50/BASE@KDPad/BSIZE@0x44/VTABLE@True/
    public:
        // TODO
        // virtual ??? getDTIClassInfo() const;
        // virtual ??? getDTIClass() const;
        
        KDPlayerRecordPad();
        const KDPadBinData &getRecordedBuffer();
    /END/
}
