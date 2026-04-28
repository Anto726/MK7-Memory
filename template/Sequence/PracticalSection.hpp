#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "Section.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@PracticalSection/SIZE@0x48/BASE@Section/BSIZE@0x34/VTABLE@True/
    public:
		virtual ~PracticalSection();
        virtual void destroy();
        virtual void ready();
        virtual void clear();
        virtual void sceneStart(s32);
        virtual void sceneFinish(s32);
        virtual void onDestroy();
        virtual void onReady();
        virtual void onClear();

        PracticalSection();

        /M/s32 mode/0x4/0x34/
        /M/s32 field_0x38/0x4/0x38/
        /M/s32 field_0x3C/0x4/0x3C/
        /M/s32 field_0x40/0x4/0x40/
        /M/SectionClassInfoBase *m_section_class_info/0x4/0x44/
    /END/
}