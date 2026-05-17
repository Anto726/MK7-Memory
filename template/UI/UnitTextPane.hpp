#pragma once

#include "UnitPane.hpp"

#include <math/seadVector.h>

#include <nw/lyt/TextBox.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@UnitTextPane/SIZE@0x40/BASE@UnitPane/BSIZE@0x34/
    public:
        enum class EFontType : u32 {
            EDGE_FONT = 1,
            NON_EDGE_FONT
        };

        u32 calcTextPosX(const nw::lyt::TextBox *, const wchar_t *);
        u32 calcTextPosY(const nw::lyt::TextBox *, const wchar_t *, s32);
        static void calcTextSize(sead::Vector2f *, UnitTextPane *, const nw::lyt::TextBox *, const wchar_t *, s32);    // TODO. Double check if this prototype is correct.
        void create(nw::lyt::Pane *, const wchar_t *, s32, EFontType, bool);
        void copyText(const nw::lyt::TextBox *, const wchar_t *, s32, EFontType);
        void createR(nw::lyt::Layout *, const char *, const wchar_t *, s32, EFontType, bool);

        /M/f32 m_char_space/0x4/0x34/
        /M/f32 m_line_spacing_offset/0x4/0x38/
        /M/f32 m_baseline_offset/0x4/0x3c/
    /END/
}