#pragma once

#include "../types.hpp"

#include "BaseFastControl.hpp"
#include "ControlSight.hpp"

#include "../Sequence/BasePage.hpp"

#include <math/seadVector.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@BaseMenuViewControl/SIZE@0xA8/BASE@BaseFastControl/BSIZE@0x7C/VTABLE@True/
    public:
        virtual ~BaseMenuViewControl() {}; // 2 (_sub_object), 3 (_deallocating)
        virtual void create(Object::ArgumentObj const *); // 4
        virtual void reset(); // 20

        BaseMenuViewControl();
        // Sets the origin root position before moving.
        void follow(const sead::Vector3f &);
        // Sets the target position and starts moving.
        void startFollowAcc(const sead::Vector3f &);
        // Updates the movement smoothly.
        void followAcc();

        /M/ControlSight::ElementHandle *m_elements[4]/0x10/0x7C/
        /M/f32 m_move_speed/0x4/0x8C/               // The speed at which the UI element moves towards `m_target_pos`.
        /M/f32 m_snap_distance/0x4/0x90/            // If remaining distance is smaller than this value, movement ends. Prevents endless tiny increments.
        /M/sead::Vector3f m_target_pos/0xC/0x94/    // The UI element will move from its current root position to this target position.
        /M/bool m_is_moving/0x1/0xA0/               // If `true`, the UI element is currently moving.
        /M/Sequence::BasePage *m_page/0x4/0xA4/
    /END/
}