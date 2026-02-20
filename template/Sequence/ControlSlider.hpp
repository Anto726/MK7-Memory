#pragma once

#include "../types.hpp"

#include "../UI/VisualControl.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@ControlSlider/SIZE@0x1CF4/
    public:
        /START_CLASS/NAME@ItemH/SIZE@0x28/
        /END/

        /START_CLASS/NAME@ItemV/SIZE@0x34/
        /END/

        ControlSlider();
        void setDelayH(u32);
        void setSlideH(UI::VisualControl *);
        void setSlideV(UI::VisualControl *, UI::VisualControl *);
        void startH();
        void startV();
        void stepH();
        void stepV();
        void updatePosDefH(u32);
        void stepMoveV(ItemV &, bool);
    /END/
}