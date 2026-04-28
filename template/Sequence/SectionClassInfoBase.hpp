#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "PracticalSection.hpp"
#include "../Util/TLinkList.hpp"

#include <prim/seadSafeString.hpp>

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@SectionClassInfoBase/SIZE@0x24/VTABLE@True/
    public:
        virtual const char *getClassName() const = 0;
        virtual void *getClassInfo() const = 0;
        virtual void m_0x8() = 0;
        virtual s32 convertMode(const sead::SafeString &) const = 0;
        virtual s32 convertEnterCode(const sead::SafeString &) const = 0;
        virtual s32 convertReturnCode(s32) const = 0;
        virtual void constructSection(SectionDirector *) = 0;
        // We name it `writeReportDefine` in VERSION_E3_2010, but the actual name is unknown. Always 0 in the final game.
        virtual void m_0x1c() = 0;

        SectionClassInfoBase();
        void createSection(SectionDirector *);
        void destroySection(PracticalSection *);
        PracticalSection *searchNearestSection(const PracticalSection *) const;

        /M/char **m_names/0x4/0x4/
        /M/s32 field_0x08/0x4/0x8/
        /M/s32 field_0x0C/0x4/0xC/
        /M/Util::TLinkList<PracticalSection> m_link_list/0x14/0x10/
    /END/
}