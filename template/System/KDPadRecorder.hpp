#pragma once

#include "../types.hpp"

#include "KDPad.hpp"
#include "KDPadAddBase.hpp"
#include "KDPadBinData.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPadRecorder/SIZE@0x2804/BASE@KDPadAddBase/BSIZE@0x24/VTABLE@True/
    public:
        void calcState();
        void resetCore();
        void initInner();
        virtual void create();

        KDPadRecorder(KDPad *, KDPadDataOnFrame &);
        bool calcRecord();
        void makeRecData();

        // NOTE: Name is made up
        // This buffer only holds the raw inputs for a given input type (buttons or stick)
        /START_STRUCT/NAME@InputBuffer/SIZE@0x27d4/
            /M/u8 m_data[0x27d4]/0x27d4/0x0/
        /END/

        // NOTE: Name is made up
        /START_STRUCT/NAME@CompleteInputBuffer/SIZE@0x4fa8/
            /M/InputBuffer m_buttons/0x27d4/0x0/
            /M/InputBuffer m_stick/0x27d4/0x27d4/
        /END/

        /M/CompleteInputBuffer *m_input_buffer/0x4/0x24/
        /M/KDPadBinData m_recorded_buffer/0x27d8/0x28/
        /M/bool m_finished_recording/0x1/0x2800/
        /M/bool m_cannot_save_ghost/0x1/0x2801/
    /END/
}
