#pragma once

#include "../types.hpp"

#include <heap/seadHeap.h>
#include <math/seadVector.h>
#include <nw/ut/Color.hpp>

#include <nw/lyt/Layout.hpp>
#include <nw/lyt/Pane.hpp>
#include <nw/lyt/Size.hpp>
#include <nw/lyt/TexFormat.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@UnitPane/SIZE@0x34/
    public:
        /START_STRUCT/NAME@CopyArg/SIZE@0x38/
        /END/

        void copyEdgeFont(u8 *, const u8 *, s32);
        void createPane(const nw::lyt::Pane *, const nw::ut::Color8 &, const nw::ut::Color8 &);
        void deletePane(nw::lyt::Layout *, nw::lyt::Pane *);
        void copyTexture(CopyArg &);
        static void replacePane(nw::lyt::Layout *, nw::lyt::Pane *, nw::lyt::Pane *);
        static void calcGlobalPos(const nw::lyt::Pane *);
        static s32 getGLTexFormat(nw::lyt::TexFormat, u32 *, u32*, s32 *);
        void copyNonEdgeFont(u8 *, const u8 *, s32);
        void copyTextureImpl(const CopyArg &);
        void copyLA8(u8 *, const u8 *, s32);
        void copyRGBA8(u8 *, const u8 *, s32);
        UnitPane();
        ~UnitPane();

        /M/nw::lyt::Pane *m_pane/0x4/0x4/
        /M/nw::lyt::Size m_size/0x8/0x8/
        /M/sead::Heap *m_heap/0x4/0x14/
        /M/sead::Vector2f m_text_size/0x8/0x18/
        /M/nw::lyt::TexFormat m_gl_tex_format/0x1/0x28/
    /END/
}