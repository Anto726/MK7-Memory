#pragma once

#include "../types.hpp"

/**
 * NOTE: All "name_offset"s are offsets relative to the start of the BSEQ's 
 * nametable, unless stated otherwise.
 */

BEGIN_NAMESPACE(Sequence)
{
    enum SectionType {
        SECTION_TYPE_PAGE,
        SECTION_TYPE_TASK,
        SECTION_TYPE_DATA_HOLDER,
        SECTION_TYPE_SERIAL_SEQUENCE,
        SECTION_TYPE_CROSS_FADE_SEQUENCE,
        SECTION_TYPE_PARALLEL_SEQUENCE,
        SECTION_TYPE_DELEGATE_SEQUENCE,
        SECTION_TYPE_SCENE_SEQUENCE_PROXY,
        SECTION_TYPE_ROOT   // Used in `Root-Default.brs`to represent the top-most section
    };

    enum SectionBlockType {
        SECTION_BLOCK_PRACTICAL_SECTION_TASK,   // Type: PracticalSectionBlock
        SECTION_BLOCK_PRACTICAL_SECTION_PAGE,   // Type: PracticalSectionBlock
        SECTION_BLOCK_SEQUENCE,                 // Type: SequenceBlock
        SECTION_BLOCK_CROSS_FADE_SEQUENCE,      // Type: CrossFadeSequenceBlock
        SECTION_BLOCK_SCENE_SEQUENCE_PROXY      // Type: SceneSequenceProxyBlock
    };

    /START_CLASS/NAME@BSEQEngineCreatorTable/SIZE@0x4/
    public:
        /M/u16 m_engine_creator_name_offset/0x2/0x00/
        /M/u16 m_scene_name_offset/0x2/0x02/
    /END/

    // *.brs / *.bss files
    /START_CLASS/NAME@BSEQ/SIZE@0x38/
    public:
        /M/u32 m_magic/0x4/0x00/        // BSEQ
        /M/u32 m_sequence_id/0x4/0x04/  // A unique hash representing this BSEQ
        /**
         * Num data
         */
        // See `Sequence::SequenceResource::searchSequenceBlock`
        /M/u16 field_0x08/0x2/0x08/
        /M/u16 field_0x0A/0x2/0x0A/
        /M/u16 field_0x0C/0x2/0x0C/
        // Total number of sections. See `Sequence::SectionDirector::create`
        /M/u16 m_num_sections/0x2/0xE/
        /M/u16 m_num_serial_sequences/0x2/0x10/
        /M/u16 m_num_cross_fade_sequences/0x2/0x12/
        /M/u16 m_num_parallel_sequences/0x2/0x14/
        /M/u16 m_num_delegate_sequences/0x2/0x16/
        /M/u16 m_num_scene_sequence_proxy/0x2/0x18/
        // Number of layers (SequenceLayer) associated to a ParallelSequence.
        // Only applicable when the section type is a ParallelSequence
        /M/u16 m_num_layers/0x2/0x1A/
        /M/u16 m_num_section_block/0x2/0x1C/
        /M/u16 m_num_engine_creator/0x2/0x1E/
        /**
         * Offset data
         */
        /M/u32 field_0x20/0x4/0x20/
        /M/u32 field_0x24/0x4/0x24/
        // Points to the first section block in this BSEQ
        /M/u32 m_first_section_block_offset/0x4/0x28/
        // Type: BSEQEngineCreatorTable
        /M/u32 m_engine_creator_table_offset/0x4/0x2C/
        /M/u32 m_nametable_offset/0x4/0x30/
        // Array of offsets to different `SectionBlock`-type entries
        // the number of entries in this array corresponds to `m_num_section_block`
        /M/u32 m_section_block_array_offset/0x4/0x34/
    /END/

    /START_CLASS/NAME@SequenceResource/SIZE@0x14/
    public:
        /START_CLASS/NAME@NameTableBlockEntry/SIZE@0x4/
        public:
            /M/u16 m_index/0x2/0x00/
            /M/u16 m_name_offset/0x2/0x02/
        /END/

        // Right after this block ends, an array of `NameTableBlockEntry`.
        /START_CLASS/NAME@NameTableBlock/SIZE@0x4/
        public:
            /M/u16 m_num_entries/0x2/0x00/
            /M/u16 m_field_0x02/0x2/0x02/
        /END/

        // Header of the section block. The size and exact contents of the whole SectionBlock can vary.
        /START_CLASS/NAME@SectionBlock/SIZE@0x14/
        public:
            // See the `SectionType` enum
            /M/u8 m_section_type/0x1/0x00/
            /M/u16 field_0x02/0x2/0x02/
            /M/u32 m_sequence_id/0x4/0x04/  // Unique hash that represents this SectionBlock
            // Offset to the name of this block in the name table.
            /M/u16 m_section_block_name_offset/0x2/0x08/
            // Type: NameTableBlock
            /M/u16 m_enter_code_table_offset/0x2/0x0A/
            // Type: NameTableBlock
            /M/u16 m_return_code_table_offset/0x2/0x0C/
            // See the `SectionBlockType` enum
            /M/u16 m_block_type/0x2/0x0E/
            // Offset to any of the start of the block data. Each block follows a specific format,
            //depending on the block type.
            // Available types: PracticalSectionBlock, SequenceBlock, CrossFadeSequenceBlock, SceneSequenceProxy
            /M/u16 m_block_offset/0x2/0x10/
        /END/

        /**
         * Section Blocks
         */

        /START_CLASS/NAME@SectionBlockDataHeader/SIZE@0x4/
        public:
            /M/u16 field_0x00/0x2/0x00/
            // Offset in the name table for the class name from the code
            /M/u16 m_class_name_offset/0x2/0x02/
        /END/

        // Right after this ends, an array of `SubsectionListBlockEntry` entries starts.
        /START_CLASS/NAME@SubsectionListBlock/SIZE@0x4/
        public:
            /M/u16 m_num_entries/0x2/0x00/
        /END/

        /START_CLASS/NAME@SubsectionListBlockEntry/SIZE@0x8/
        public:
            /M/u32 m_sequence_id/0x4/0x00/
            // Offset within the modeTable section associated to the sequenceId above
            /M/u16 m_mode_name_item_offset/0x2/0x04/
        /END/

        // Right after this ends, an array of `SequenceBlockFlowListEntry` (or `CrossFadeSequenceBlockFlowListEntry`) entries starts.
        /START_CLASS/NAME@SequenceBlockFlowList/SIZE@0x4/
        public:
            /M/u16 m_num_entries/0x2/0x00/
        /END/

        /START_CLASS/NAME@SequenceBlockFlowListEntry/SIZE@0x8/
        public:
            // In the SubsectionList, this is the index to the entry that will be used to go to the previous menu.
            /M/u16 m_prev_subsection_list_block_entry_index/0x2/0x00/
            // In the section whose sequenceId is the one found in the SubsectionListBlock, this is the return code to the previous menu.
            /M/u16 m_prev_return_code_item_index/0x2/0x02/
            // In the SubsectionList, this is the index to the entry that will be used to go to the next menu.
            /M/u16 m_next_subsection_list_block_entry_index/0x2/0x04/
            // In the section whose sequenceId is the one found in the SubsectionListBlock, this is the return code to the next menu.
            /M/u16 m_next_return_code_item_index/0x2/0x06/
        /END/

        /START_CLASS/NAME@CrossFadeSequenceBlockFlowListEntry/SIZE@0xC/BASE@SequenceBlockFlowListEntry/BSIZE@0x8/
        public:
            /M/u16 m_cross_fade_type/0x2/0x08/
        /END/
        
        /START_CLASS/NAME@PracticalSectionBlock/SIZE@0x8/
        public:
            /M/SectionBlockDataHeader m_header/0x4/0x00/
            // Offset within this block where you will find the modeTable
            // Type: NameTableBlock
            /M/u16 m_mode_table_offset/0x2/0x04/
        /END/

        /START_CLASS/NAME@SequenceBlock/SIZE@0x8/
        public:
            /M/SectionBlockDataHeader m_header/0x4/0x00/
            // Offset within this block to the subsection list
            // Type: SubsectionList
            /M/u16 m_subsection_list_offset/0x2/0x04/
            // Offset within this block to the flow list
            // Type: SequenceBlockFlowList
            /M/u16 m_flow_list_offset/0x2/0x06/
        /END/

        /START_CLASS/NAME@CrossFadeSequenceBlock/SIZE@0x8/
        public:
            /M/SectionBlockDataHeader m_header/0x4/0x00/
            // Offset within this block to the subsection list
            // Type: SubsectionList
            /M/u16 m_subsection_list_offset/0x2/0x04/
            // Offset within this block to the flow list
            // Type: CrossFadeSequenceBlockFlowList
            /M/u16 m_flow_list_offset/0x2/0x06/
        /END/

        /START_CLASS/NAME@SceneSequenceProxyBlock/SIZE@0x8/
        public:
            /M/SectionBlockDataHeader m_header/0x4/0x00/
            /M/u16 m_scene_name_offset/0x2/0x04/
        /END/

        /M/BSEQ *m_bseq_file_buffer/0x4/0x00/
        /M/BSEQ *m_bseq/0x4/0x04/
        /M/char **m_stringTableBlock/0x4/0x08/
        // Type: BSEQEngineCreatorTable
        /M/u32 m_engine_creator_table_offset/0x4/0x0C/
        /M/SectionBlock **m_section_blocks/0x4/0x10/
    /END/
}