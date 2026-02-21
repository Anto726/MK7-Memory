#pragma once

#include "../types.hpp"

#include "BasePage.hpp"
#include "ControlSlider.hpp"
#include "MenuPageID.hpp"

#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@BaseMenuPage/SIZE@0x294/BASE@BasePage/BSIZE@0x26C/VTABLE@True/
    public:
        struct ControlDisplayFlags
		{
			u32
				DISPLAY_BACK_BUTTON 				: 1, // 0x1
				_0x2 				                : 1, // 0x2
			 	_0x4 				                : 1, // 0x4
			    _0x8 			                    : 1, // 0x8
			    _0x10 			                    : 1, // 0x10
			    DISPLAY_WIFI_COUNTDOWN_TIMER 	    : 1, // 0x20. When in the Wifi character selection screen
			    ERASE_TIMER 		                : 1; // 0x40. Used in `Sequence::BaseMenuPage::complete`
		};
		static_assert(sizeof(ControlDisplayFlags) == 0x4);

        struct BaseMenuPageFlags
		{
			u32
				ON_TIME_UP_COMPLETE_DONE 				: 1; // 0x1
		};
		static_assert(sizeof(BaseMenuPageFlags) == 0x4);

        BaseMenuPage();
        // TODO
        // virtual ??? getDTIClassInfo() const;
        // virtual ??? getDTIClass() const;
        virtual ~BaseMenuPage();
        virtual void onTimeUpComplete(s32);
        
        /M/sead::FixedPtrArray<ControlSlider, 3> m_control_slider_array/0x18/0x26C/
        /M/ControlDisplayFlags m_control_display_flags/0x4/0x284/
        /M/s32 m_wifi_course_vote_timer/0x4/0x288/
        /M/BaseMenuPageFlags m_flags/0x4/0x28c/
        /M/MenuPageID m_id/0x4/0x290/
    /END/
}