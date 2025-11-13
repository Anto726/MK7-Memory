#pragma once

#include "Actor.hpp"

#include <math/seadMatrix.h>

BEGIN_NAMESPACE(Object)
{
    /START_CLASS/NAME@Actor3DMdl/SIZE@0x58/BASE@Actor/BSIZE@0x8/
    public:
        virtual void *getDTIClassInfo() const { return {}; }; // 0
		virtual void *getDTIClass() const { return {}; }; // 1

        /M/sead::Vector3f m_0x8/0xC/0x8/
        /M/sead::Matrix34f m_0x14/0x30/0x14/
        /M/bool m_0x44/0x1/0x44/
        /M/Render::DrawMdl *m_draw_mdl/0x4/0x54/
    /END/
}