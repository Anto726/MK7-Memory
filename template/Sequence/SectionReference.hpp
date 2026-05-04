#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "SectionClassInfoBase.hpp"
#include "../Object/DTIClassInfo.hpp"

BEGIN_NAMESPACE(Sequence)
{
    class SectionReferenceBase {
    public:
        SectionReferenceBase(const Object::DTIClassInfo *);

        SectionClassInfoBase *m_class_info;
    };

    template <typename T>
    class SectionReference: public SectionReferenceBase {
    public:
        SectionReference();
    };
}