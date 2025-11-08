#pragma once

#include <math/seadVector.hpp>

#include "../types.hpp"

#include "Control.hpp"  // ControlSightType

BEGIN_NAMESPACE(UI)
{

    /START_CLASS/NAME@BCTR/SIZE@0x44/
    public:
        /M/u32 m_magic/0x4/0x00/  // BCTR
        /M/u32 field_0x04/0x4/0x04/
        // Filename (BCTR) name offset. Offset relative to start of nameTable
        /M/u16 m_filename_offset/0x2/0x08/
        // Name of the class in the code. Offset relative to start of nameTable
        /M/u16 m_class_name_offset/0x2/0x0A/
        // See the `ControlSightType` enum
        /M/u16 m_layout_type/0x2/0x0C/
        // Layout (BCLYT) name offset. Offset relative to start of nameTable
        /M/u16 m_layout_name_offset/0x2/0x0E/
        /**
         * Num Data
         */
        /M/u16 m_num_message_data/0x2/0x10/
        /M/u16 m_num_textbox/0x2/0x12/
        // Number of columns in the message ID section
        /M/u16 m_num_columns_message_ids/0x2/0x14/
        /M/u16 m_num_graphics/0x2/0x16/
        /M/u16 field_0x18/0x2/0x18/
        /M/u16 m_num_control_data/0x2/0x1A/
        /**
         * Offset data
         */
        // Array of u16, each being the offset to the filename
        // the .msbt where the message can be found.
        /M/u32 m_message_data_offset/0x4/0x1C/
        // Offset to the textbox name in the nameTable. Usually starts with "T_" (`nw::lyt::TextBox`)
        /M/u32 m_textbox_name_offset/0x4/0x20/
        /M/u32 field_0x24/0x4/0x24/
        // See `UI::GraphicReplaceInitializerByResource::replace`
        /M/u32 m_graphics_offset/0x4/0x28/
        /M/u32 field_0x2C/0x4/0x2C/
        // Type: ControlData
        /M/u32 m_control_data_offset/0x4/0x30/
        // Array of message IDs (u32 each), one per ControlData.
        // It appears that this can be a bidimensional array of message IDs,
        // where num colums = numColumnsMessageIDs, and num rows = numControlData
        /M/u32 m_message_ids_offset/0x4/0x34/
        /M/u32 field_0x38/0x4/0x38/
        /M/u32 field_0x3C/0x4/0x3C/
        // Points to a struct that has the nameTable size
        // and the nameTable strings
        /M/u32 m_nametable_data_offset/0x4/0x40/
    /END/

    // Aka BCTRNormalElement
    /START_CLASS/NAME@ControlData/SIZE@0x14/
    public:
        // Offset in the nameTable. The name of this ControlData block.
        /M/u16 m_name_offset/0x2/0x00/
        // Draw the layout on the bottom screen
        /M/u16 m_draw_on_bottom_screen/0x2/0x02/
        /M/sead::Vector3f m_position/0xC/0x04/
        /M/u16 field_0x10/0x2/0x10/
    /END/

    /START_CLASS/NAME@ControlResource/SIZE@0x64/
    public:
        // Pointer to BCTR file buffer once it's loaded
        /M/BCTR *m_bctr_file_buffer/0x4/0x00/
        // Often used when accessing the BCTR
        /M/BCTR *m_bctr/0x4/0x04/
        /M/u32 m_num_message_data/0x4/0x08/
        /M/u16 *m_message_data/0x4/0x0C/
        /M/u32 m_num_textbox/0x4/0x10/
        /M/u32 m_textbox_name_offset/0x4/0x14/
        /M/u32 field_0x18/0x4/0x18/
        /M/u32 field_0x1C/0x4/0x1C/
        /M/u32 m_num_graphics/0x4/0x20/
        // See `UI::GraphicReplaceInitializerByResource::replace`
        /M/u16 *m_graphics_offset/0x4/0x24/
        /M/u32 field_0x28/0x4/0x28/
        /M/u32 field_0x2C/0x4/0x2C/
        /M/u32 m_num_control_data/0x4/0x30/
        /M/ControlData *m_control_data_array/0x4/0x34/
        /M/u32 m_num_columns_message_ids/0x4/0x38/
        /M/u32 m_num_rows_message_ids/0x4/0x3C/
        /M/u32 field_0x40/0x4/0x40/
        /M/u32 field_0x44/0x4/0x44/
        /M/u32 field_0x48/0x4/0x48/
        /M/u32 field_0x4C/0x4/0x4C/
        /M/u32 field_0x50/0x4/0x50/
        /M/u32 field_0x54/0x4/0x54/
        /M/u32 field_0x58/0x4/0x58/
        // Size of the nameTable in bytes
        /M/u32 m_nametable_size/0x4/0x5C/
        /M/char *m_nametable_strings/0x4/0x60/
    /END/
}