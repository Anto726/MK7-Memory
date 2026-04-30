#pragma once

#include "../forward.hpp"
#include "../versions.h"
#include "MenuListSeparator.hpp"
#include "ScrollListBarBase.hpp"
#include "../Sequence/BasePage.hpp"

#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(UI)
{
#if GAME_VERSION != ALL_DLP
    // NOTE: Name is made up
    /START_CLASS/NAME@ScrollList/SIZE@0x74/
    public:
        // NOTE: Name is made up
        enum class EType : u32 {
            GHOST_LIST,
            FRIEND_LIST,
            COMMUNITY_LIST,
            COMMUNITY_CREATE_MARK_LIST,
            STREETPASS_LIST,
            COMMUNIYU_LOBBY_MESSAGE_LIST
        };

        s32 getSelectedOption() const;                       // 0x004e18dc (VERSION_USA_REV1)
        void init(EType, s32, Sequence::BasePage *);         // 0x001462fc (VERSION_USA_REV1)
        void initFrame(s32);                                 // 0x00161430 (VERSION_USA_REV1)
        void setSelectedOption(s32);                         // 0x001478d0 (VERSION_USA_REV1)
        void setupControlSlider(Sequence::ControlSlider *);  // 0x001478dc (VERSION_USA_REV1)
        void setupMenuCommunity_CreateMark();                // 0x001460e0 (VERSION_USA_REV1)
        void FUN_00145df0();                                 // 0x00145944 (VERSION_USA_REV1)
        void clearEntries();                                 // 0x00147830 (VERSION_USA_REV1)
        void FUN_00145ab8();                                 // 0x00145ab8 (VERSION_USA_REV1)

        /M/ScrollListBg *m_bg/0x4/0x0/
        /M/sead::FixedPtrArray<MenuListSeparator, 6> m_separators/0x24/0x4/
        /M/sead::FixedPtrArray<ScrollListBarBase, 5> m_bars/0x20/0x28/
        /M/ScrollListFrame *m_frame/0x4/0x48/
        /M/s32 m_num_items/0x4/0x58/
    /END/
#endif
}