#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "../Object/TDirectorList.hpp"
#include "../Object/TLinkSocket.hpp"
#include "CompositeControl.hpp"
#include "../Sequence/Page.hpp"

#include <container/seadOffsetList.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@ControlDirector/SIZE@0xBC/BASE@Object::TDirectorList<UI::Control, Object::TLinkSocket<Object::Actor, Object::Actor>>/BSIZE@0x28/
    public:
        /START_CLASS/NAME@DrawControlList/SIZE@0x14/
        public:
            /M/sead::OffsetList<Control> m_list[1]/0x10/0x0/
            /M/s32 m_0x10/0x4/0x10/
        /END/

        /M/DrawControlList m_draw_lists[7]/0x8C/0x28/
        /M/Page *m_page/0x4/0xB4/
        /M/CompositeControl *m_composite_control/0x4/0xB8/
    /END/
}