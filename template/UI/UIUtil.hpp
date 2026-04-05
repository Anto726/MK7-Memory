#pragma once

#include "../types.hpp"

#include <nw/lyt/Picture.hpp>
#include <nw/lyt/TextBox.hpp>

BEGIN_NAMESPACE(UI::UIUtil)
{
    void AdjustWidth(nw::lyt::Picture *, f32, bool);
    void AdjustTextWidth(nw::lyt::TextBox *, const wchar_t *);
}