#pragma once

#include "../types.hpp"

#include "VisualControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@BaseFastControl/SIZE@0x7C/BASE@VisualControl/BSIZE@0x7C/VTABLE@True/
    public:
        /START_STRUCT/NAME@TextScale/SIZE@0x8/
            TextScale(void * /* nw::lyt::TextBox * */);

            /M/s32 x/0x4/0x0/
            /M/s32 y/0x4/0x4/
        /END/

        virtual void create(ArgumentObj const *); // 4
        virtual void calc(); // 6
        virtual void animMenuIn(); // 31
        virtual void animMenuOut(); // 32
    /END/
}