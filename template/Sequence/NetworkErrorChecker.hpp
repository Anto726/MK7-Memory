#pragma once

#include "../types.hpp"
#include "Common_SystemDialog.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@NetworkErrorChecker/SIZE@0x24/
    public:
        enum class NetworkErrorMessageType : u32
        {
            ERROR_PRESS_HOME_TO_EXIT = 2
        };

        void stopScene_();
        void startWindow_(NetworkErrorMessageType);
        void startDisconnect_();
        bool calc();

        /M/Common_SystemDialog *m_common_system_dialog/0x4/0x10/
    /END/
}
