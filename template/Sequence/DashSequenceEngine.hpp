#pragma once

#include "../forward.hpp"

#include "System/GhostSaveDataHeader.hpp"
#include "SequenceEngine.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@DashSequenceEngine/SIZE@0x16F5C/BASE@SequenceEngine/BSIZE@0xAC/VTABLE@True/
    public:
        void setPlayerGhostHeader(const System::GhostSaveDataHeader &);

        /M/MenuData *m_menu_data/0x4/0xC0/
        /M/bool m_exit_app/0x1/0xD0/
        /M/UI::MessageIDConverter *m_message_id_converter/0x4/0xD8/
        // Array with the selected options from the LRSelect (and maybe other UI elements too). Up to 23 entries.
        /M/s32 *m_selected_cursor_item_idx_array/0x4/0xE8/
    /END/

    DashSequenceEngine *GetDashSequenceEngine();
}