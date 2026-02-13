#pragma once

#include "../types.hpp"

#include "ExecutableSection.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@Page/SIZE@0x5C/BASE@ExecutableSection/BSIZE@0x50/VTABLE@True/
    public:
        Page();

        /M/u32 m_fade_delay/0x4/0x54/
        // Prevents `Sequence::Section::exitOuter` to be called in `Sequence::Page::cancel`
        /M/bool m_stop_cancel/0x1/0x58/
        // Prevents the page from being pushed into the Page array from Render::UIDrawDirector
        /M/bool m_dont_push_into_ui_draw_director/0x1/0x59/
        /M/s8 m_sync_return_code/0x1/0x5A/
        /M/bool m_fade_is_active/0x1/0x5B/
    /END/
}