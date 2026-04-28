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
        // TODO: These are all pure virtual
        virtual const char *getClassName() const;
        virtual void *getClassInfo() const;
        virtual void m_0x8();
        virtual s32 convertMode(const sead::SafeString &) const;
        virtual s32 convertEnterCode(const sead::SafeString &) const;
        virtual s32 convertReturnCode(s32) const;
        virtual void constructSection(SectionDirector *);
        // We name it `writeReportDefine` in VERSION_E3_2010, but the actual name is unknown. Always 0 in the final game.
        virtual void m_0x1c();

        SectionClassInfoBase();
        PracticalSection *createSection(SectionDirector *);
        void destroySection(PracticalSection *);
        PracticalSection *searchNearestSection(const PracticalSection *) const;

        /M/char **m_names/0x4/0x4/
        /M/s32 field_0x08/0x4/0x8/
        /M/s32 field_0x0C/0x4/0xC/
        /M/Util::TLinkList<PracticalSection> m_link_list/0x14/0x10/
    /END/
}