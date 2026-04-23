#pragma once

#include "../types.hpp"
#include "../System/EArchiveID.hpp"
#include "../System/SceneManager.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@NwlytResourceAccessor/SIZE@0xB560/VTABLE@True/
    public:
        virtual ~NwlytResourceAccessor();
        virtual void *GetResource(u32, const char *, u32 *);
        virtual void *GetFont(const char *);
        // Maybe returns a class / struct by value?
        virtual void *GetTexture(const char *);

        NwlytResourceAccessor();
        // Maybe returns a class / struct by value?
        void *GetTextureImpl(void * /* nw::lyt::TextureInfo * */, const char *, bool);
        // Maybe returns a class / struct by value?
        void *GetTextureFCRAM(const char *);
        void LoadTex(void * /* nw::lyt::TextureInfo * */, const char *, bool);
        void SetupTex(void * /* nw::lyt::TextureInfo * */, void *, u32, bool);

        /M/u8 m_font_combiner_type/0x1/0x4/  // nw::font::FontCombinerType
        /M/System::EArchiveID m_archive_id/0x4/0x8/
    /END/
}