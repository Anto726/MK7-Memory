#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "SectionClassInfoBase.hpp"

#include <container/seadListImpl.h>
#include <container/seadPtrArray.h>
#include <prim/seadSafeString.hpp>

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@SectionClassManager/SIZE@0x100/VTABLE@True/
    public:
        /START_CLASS/NAME@SectionClassInfoList/SIZE@0x30/
        public:
            static s32 compareByName(const SectionClassInfoBase *, const sead::SafeString *);
            static s32 compareByName(const SectionClassInfoBase *, const SectionClassInfoBase *);
            static s32 compareByClassInfo(const SectionClassInfoBase*, const void * /* Object::DTIClassInfo * */);
            static s32 compareByClassInfo(const SectionClassInfoBase*, const SectionClassInfoBase *);
            void addSectionClassInfo(SectionClassInfoBase *);
            void endDefine();

            /M/sead::PtrArray<sead::SafeString> m_name_array/0xC/0x0/
            /M/sead::PtrArray<SectionClassInfoBase> m_class_info_array/0xC/0xC/
            /M/sead::ListNode m_list_node/0x8/0x18/
            /M/s32 m_count/0x4/0x20/
            /M/s32 m_max_count/0x4/0x2C/
        /END/

        virtual void defineTaskClassInfoList(SectionClassInfoList *) = 0;
        virtual void definePageClassInfoList(SectionClassInfoList *) = 0;
        virtual void defineDataHolderClassInfoList(SectionClassInfoList *) = 0;

        SectionClassManager();
        SectionClassInfoBase *findSectionClassInfo(const void * /* Object::DTIClassInfo * */);
        void create();
        PracticalSection *constructSection(SectionDirector*, const SequenceResource *, s32);

        /M/SectionClassInfoBase m_task_info/0x24/0x4/
        /M/SectionClassInfoBase m_page_info/0x24/0x28/
        /M/SectionClassInfoBase m_data_holder_info/0x24/0x4c/
        /M/SectionClassInfoList m_page_list/0x30/0x70/
        /M/SectionClassInfoList m_task_list/0x30/0xa0/
        /M/SectionClassInfoList m_data_holder_list/0x30/0xd0/
    /END/
}