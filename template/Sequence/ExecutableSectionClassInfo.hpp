#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "SectionClassInfoBase.hpp"

BEGIN_NAMESPACE(Sequence)
{
    template <typename T>
    class ExecutableSectionClassInfo: public SectionClassInfoBase {
    public:
        virtual const char *getClassName() const;
        virtual void *getClassInfo() const;
        virtual void m_0x8();
        virtual s32 convertMode(const sead::SafeString &) const;
        virtual s32 convertEnterCode(const sead::SafeString &) const;
        virtual s32 convertReturnCode(s32) const;
        virtual void constructSection(SectionDirector *);
        virtual void m_0x1c();
    };
}