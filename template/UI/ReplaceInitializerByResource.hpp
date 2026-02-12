#pragma once

#include "../types.hpp"

#include "ControlResource.hpp"
#include "VisualControl.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@MessageReplaceInitializerByResource/SIZE@0xC/VTABLE@True/
    public:
        virtual void replace(VisualControl *); // 0

        /M/ControlResource *m_control_resource/0x4/0x4/
        /M/s32 m_control_data_idx/0x4/0x8/
    /END/

    /START_CLASS/NAME@GraphicReplaceInitializerByResource/SIZE@0xC/BASE@MessageReplaceInitializerByResource/BSIZE@0xC/VTABLE@True/
    public:
        virtual void replace(VisualControl *); // 0
    /END/
}