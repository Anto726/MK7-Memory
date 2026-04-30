#pragma once

#include "../forward.hpp"

#include "System/GhostSaveDataHeader.hpp"
#include "SequenceEngine.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@DashSequenceEngine/SIZE@0x16F5C/BASE@SequenceEngine/BSIZE@0xAC/VTABLE@True/
    public:
        void setPlayerGhostHeader(const System::GhostSaveDataHeader &);
        DashSectionClassManager *getSectionClassManager();

        /M/SectionClassManager *m_section_class_manager/0x4/0xAC/
        /M/DashSceneIDConverter *m_scene_id_converter/0x4/0xB0/
        /M/DashEngineCreatorManager *m_engine_creator_manager/0x4/0xB4/
        /M/UI::FontManager *m_font_manager/0x4/0xB8/
        /M/UI::DashMessageWriter *m_message_writer/0x4/0xBC/
        /M/MenuData *m_menu_data/0x4/0xC0/
        /M/SequenceIDTable *m_sequence_id_table/0x4/0xC4/
        /M/bool m_exit_app/0x1/0xD0/
        /M/UI::TexIDConverter *m_tex_id_converter/0x4/0xD4/
        /M/UI::MessageIDConverter *m_message_id_converter/0x4/0xD8/
        /M/AIRivalTableLoader *m_ai_rival_table_loader/0x4/0xDC/
        // Array with the selected options from the LRSelect (and maybe other UI elements too). Up to 23 entries.
        /M/s32 *m_selected_cursor_item_idx_array/0x4/0xE8/
    /END/

    DashSequenceEngine *GetDashSequenceEngine();
}