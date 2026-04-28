#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "SectionClassManager.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@DashSectionClassManager/SIZE@0x100/BASE@SectionClassManager/BSIZE@0x100/VTABLE@True/
    public:
        virtual void defineTaskClassInfoList(SectionClassManager::SectionClassInfoList *);
        virtual void definePageClassInfoList(SectionClassManager::SectionClassInfoList *);
        virtual void defineDataHolderClassInfoList(SectionClassManager::SectionClassInfoList *);
    /END/
}