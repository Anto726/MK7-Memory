#pragma once

#include "../types.hpp"
#include "../System/EArchiveID.hpp"
#include "../System/SceneManager.hpp"

#include <nw/lyt/TextureInfo.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@NwlytResourceAccessor/SIZE@0xB560/VTABLE@True/
    public:
        virtual ~NwlytResourceAccessor();
        virtual void *GetResource(u32, const char *, u32 *);
        virtual void *GetFont(const char *);
        virtual nw::lyt::TextureInfo GetTexture(const char *);

        NwlytResourceAccessor();
        nw::lyt::TextureInfo *GetTextureImpl(nw::lyt::TextureInfo *, const char *, bool);
        nw::lyt::TextureInfo GetTextureFCRAM(const char *);
        void LoadTex(nw::lyt::TextureInfo *, const char *, bool);
        void SetupTex(nw::lyt::TextureInfo *, void *, u32, bool);

        /M/u8 m_font_combiner_type/0x1/0x4/  // nw::font::FontCombinerType
        /M/System::EArchiveID m_archive_id/0x4/0x8/
    /END/
}