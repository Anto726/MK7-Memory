#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "Control.hpp"
#include "ControlDirector.hpp"
#include "ControlResource.hpp"
#include "GraphicResourceInfo.hpp"
#include "MessageData.hpp"
#include "ReplaceInitializerByResource.hpp"

#include <container/seadPtrArray.h>
#include <prim/seadSafeString.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@ControlInitializer/SIZE@0x80/
    public:
        ControlInitializer(ControlDirector *);
        ~ControlInitializer();
        void initCreateArg(Control::CreateArg *);
        void initCreateArg(Control::CreateArg *, const sead::SafeString &, const sead::SafeString &);
        void endSetupControl(Control::CreateArg *);
        s32 loadControlResource(const sead::SafeString &);

        template <typename T>
        T* setupControl(const sead::SafeString &, const sead::SafeString &);

        /M/ControlDirector *m_control_director/0x4/0x0/
        /M/Control *m_control/0x4/0x4/
        /M/Control::CreateArg *m_control_create_arg/0x4/0x8/
        /M/ControlResource *m_control_resource/0x4/0xC/
        /M/sead::FixedPtrArray<MessageData, 8> m_message_data_array/0x2C/0x10/
        /M/sead::FixedPtrArray<GraphicResourceInfo, 8> m_graphic_resource_info_array/0x2C/0x3C/
        /M/MessageReplaceInitializerByResource m_message_replace_initializer/0xC/0x68/
        /M/GraphicReplaceInitializerByResource m_graphic_replace_initializer/0xC/0x74/
    /END/
}