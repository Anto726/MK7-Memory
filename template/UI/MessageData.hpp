#pragma once

#include "../types.hpp"

#include "Control.hpp"
#include "MessageString.hpp"

#include <container/seadPtrArray.h>

#include <prim/seadSafeString.h>

#include <LMS/LMS_Message.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@MessageData/SIZE@0x3C/
        /M/sead::FixedSafeString<32> m_message/0x2C/0x0/
        /M/LMS_MessageBinary *m_message_binary/0x4/0x2C/
        /M/void *m_NL1Data/0x4/0x30/
        /M/int m_0x34/0x4/0x34/
        /M/int m_starting_message_id/0x4/0x38/
    /END/

    /START_CLASS/NAME@MessageDataList/SIZE@0xC/
    public:
        MessageDataList();
        ~MessageDataList();
        void addMessageData(MessageData const &);
        const MessageString & getMessage(s32) const;
        void initBuffer(u32);

        /M/sead::PtrArray<MessageData> m_list/0xC/0x0/
    /END/
}