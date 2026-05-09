#pragma once

#include "../forward.hpp"
#include "../types.hpp"

BEGIN_NAMESPACE(UI)
{
    bool tstAnyButton();
    bool tstDemoButton();
    bool tstNextButton();
    bool tstAnyButtonHold();
    bool tstButtonTriggerNoRepeat(System::ControllerBase *, u32);
    bool tstButton(System::ControllerBase *, u32);
}
