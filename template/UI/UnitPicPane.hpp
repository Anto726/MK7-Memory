#pragma once

#include "UnitPane.hpp"

#include <nw/lyt/Picture.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@UnitPicPane/SIZE@0x48/BASE@UnitPane/BSIZE@0x34/
    public:
        void createImpl(nw::lyt::Picture *, const char *);
        void unite(nw::lyt::Pane *, const char *, const sead::Vector2i &);
        void createTex(nw::lyt::Layout *, const char *, const char *, bool);
        void uniteD(nw::lyt::Layout *, const char*, const char*, const sead::Vector2i &);
        void applyTex();

        /M/sead::Vector2i m_global_pos/0x8/0x34/
        /U/s32/0x4/0x3c/
        /U/s32/0x4/0x40/
        /U/void */0x4/0x44/
    /END/
}