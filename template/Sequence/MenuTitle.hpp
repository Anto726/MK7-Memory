#pragma once

#include "../types.hpp"

#include "BaseMenuPage.hpp"
#include "../UI/TitleInfoIcon.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@MenuTitle/SIZE@0x2a4/BASE@BaseMenuPage/BSIZE@0x294/VTABLE@True/
    public:
        enum class ReturnCode : s32 {
            TO_SEQ_SINGLE,
            TO_SEQ_MULTI,
            TO_SEQ_WIFI,
            TO_SEQ_CH,
            TO_PAGE_MMENCHECK = 7,
            TO_DEMO_SCENE
        };

        // TODO
        Object::DTIClassInfo *getDTIClassInfo() const;
        Object::DTIClassInfo *getDTIClass() const;
        ~MenuTitle(); // 2 (_sub_object), 3 (_deallocating)
        void onPagePreStep();
        void onPageEnter();
        void onPageComplete();
        bool canFinishFadeout();
        void initControl();
        void onPageFadeout();

        MenuTitle();
        
        /M/s32 m_idle_time/0x4/0x294/
        /M/UI::TitleInfoIcon2 *m_title_info_icon_2_for_position/0x4/0x298/  // Only used to setup up its position. For everything else, refer to field 0x2A0
        /M/UI::TitleInfoIcon *m_title_info_icon/0x4/0x29c/
        /M/UI::TitleInfoIcon2 *m_title_info_icon_2/0x4/0x2a0/
    /END/
}