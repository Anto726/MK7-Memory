#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "KDPadFormat.hpp"
#include "KDPadBinData.hpp"

BEGIN_NAMESPACE(System)
{
    /START_CLASS/NAME@KDPadDataBase/SIZE@0x18/
    public:
        // Name is made up
        enum class EState: u8 {
            RECORD_ENABLE,
            RECORD_DISABLE,
            REPLAY_ENABLE,
            REPLAY_DISABLE
        };

        void init();
        void recordEnable();
        void recordDisable();
        void replayEnable();
        void replayDisable();

        /M/u16 m_size/0x2/0x0/
        /M/KDPadBinData::InputBuffer *m_input_buffer/0x4/0x4/
        /M/KDPadBaseFormat *m_current_input_ptr/0x4/0x8/
        /M/u16 m_max_input_buffer_size/0x2/0xc/
        /M/u32 m_current_frame/0x4/0x10/
        /M/EState m_state/0x1/0x14/
    /END/


/*  TODO
    template <typename T>
    /START_CLASS/NAME@TKDPadDataBase/SIZE@0x18/BASE@KDPadDataBase/BSIZE@0x18/VTABLE@True/
    public:
        virtual s16 getSize();
        virtual s16 getSizeWithN();
        virtual bool recordCore(u8);
        virtual bool replayCore();
    /END/

    /START_CLASS/NAME@KDPadDataButton/SIZE@0x18/BASE@TKDPadDataBase<KDPadButtonFormat>/BSIZE@0x18/VTABLE@True/
    public:
        virtual bool recordDiffCheck(KDPadButtonFormat *, u8);
        virtual void recordData(KDPadButtonFormat *, u8);
        virtual void recordLength(KDPadButtonFormat *);
        virtual bool replayNextCheck(KDPadButtonFormat *);
        virtual u8 replayData(KDPadButtonFormat *);
    /END/

    /START_CLASS/NAME@KDPadDataStick/SIZE@0x18/BASE@TKDPadDataBase<KDPadStickFormat>/BSIZE@0x18/VTABLE@True/
    public:
        virtual bool recordDiffCheck(KDPadStickFormat *, u8);
        virtual void recordData(KDPadStickFormat *, u8);
        virtual void recordLength(KDPadStickFormat *);
        virtual bool replayNextCheck(KDPadStickFormat *);
        virtual u8 replayData(KDPadStickFormat *);
    /END/
*/
}