#pragma once

#include "../types.hpp"

#include "../UI/DashMessageArg.hpp"
#include "../Sound/SndSeEvent.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@DlgSeq/SIZE@0x144/
    public:
        // Name is made up
        enum class EState : u32
        {
            STATE_OPEN,
            STATE_AFTER_OPEN,
            STATE_WAIT,
            STATE_CHANGE_OR_CLOSE,
            STATE_FINISH,
            STATE_5
        };

        enum class EType : u32
        {
            // The dialog pop-up won't show up. If a previous dialog was opened, it will be closed.
            TYPE_NO_DIALOG,
            TYPE_NO_BUTTONS,
            TYPE_OK,
            TYPE_NEXT,
            TYPE_YES_NO,
            TYPE_OK_CANCEL,
            TYPE_WAIT_6,
            TYPE_WAIT_7,
            // Doesn't appear to trigger any actions
            TYPE_DO_NOTHING
        };

        // Name is made up
        /START_STRUCT/NAME@Arg/SIZE@0x12c/
            /M/UI::DashMessageArg m_message_arg/0x128/0x0/
            /M/bool m_message_arg_set/0x1/0x128/
        /END/

        bool startDialogue(EType, s32, bool, bool);
        void setOKSound_NoButton(Sound::SndSeEvent::EEvent);
        void setOKSound_OKButton(Sound::SndSeEvent::EEvent);
        void setOKSound_YesButton(Sound::SndSeEvent::EEvent);
        void init(s32);
        void change(s32);
        s32 dialogue(EType, s32, bool, bool);
        void finalize();
        void setMsgArg(const UI::DashMessageArg *);
        DlgSeq();

        /M/EState m_state/0x4/0x0/
        /M/s32 m_selected_option/0x4/0x4/
        /M/s32 m_current_dialog_id/0x4/0x8/
        /M/s32 m_next_dialog_id/0x4/0xc/
        /M/bool m_is_finished/0x1/0x10/
        /M/bool m_is_system_window_opened/0x1/0x11/
        /M/bool m_system_window_started/0x1/0x12/
        /M/bool m_0x13/0x1/0x13/
        /M/bool m_0x14/0x1/0x14/
        /M/u8 m_0x15/0x1/0x15/
        /M/Arg m_arg/0x12c/0x18/
    /END/
}