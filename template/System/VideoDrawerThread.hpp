#pragma once

#include "KDThread.hpp"
#include "../forward.hpp"
#include "../types.hpp"
#include "../versions.h"

#include <nw/lyt/Picture.hpp>

BEGIN_NAMESPACE(System)
{
#if GAME_VERSION != ALL_DLP
    // NOTE: Name is made up
    // KDThread name: "VideoDrawer"
    /START_CLASS/NAME@VideoDrawerThread/SIZE@0x230/BASE@KDThread/BSIZE@0xA4/VTABLE@True/
    public:
        virtual ~VideoDrawerThread();                   // 0x0017d08c (__sub_object) (VERSION_USA_REV1)
        virtual void destroy();                         // 0x0017cba8 (VERSION_USA_REV1)
        virtual void calcInner_(s32);                   // 0x0017c1a0 (VERSION_USA_REV1)

        VideoDrawerThread();                            // 0x0017cee4 (VERSION_USA_REV1)

        /M/s16 m_input_lines_width/0x2/0xd0/
        /M/s16 m_input_lines/0x2/0xd4/
        /M/nw::lyt::Picture *m_movie_pane/0x4/0x1c0/
    /END/
#endif
}
