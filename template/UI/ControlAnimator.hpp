#pragma once

#include "../types.hpp"

#include <prim/seadSafeString.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@ControlAnimator/SIZE@0xC/VTABLE@True/
    public:

        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0

            /M/ControlAnimator *m_control_animator/0x4/0x4/
            /M/s32 m_animation_family_index/0x4/0x8/
            /M/s32 m_animation_family_count/0x4/0xC/
            /M/s32 m_num_animations/0x4/0x10/
            /M/s32 m_animation_count/0x4/0x14/
        /END/

        /START_CLASS/NAME@AnimationItem/SIZE@0x14/VTABLE@True/
        public:
            enum AnimationKind {
                NO_PLAY = -1,
                ONCE = 0,
                LOOP,
                HOLD
            };

            enum AnimationType {
                DEFAULT,
                REVERSE,
                STOP_BY_RATE
            };

            virtual void _0x0(); // 0
            virtual void _0x4(); // 1 (__deallocating)
            virtual void startAnimation(); // 2
            virtual void endAnimation(); // 3
            virtual f32 getDataFrameSize(); // 4
            virtual f32 getCurrentDataFrame(); // 5
            virtual void setFrameImpl(f32); // 6
            virtual bool isLoopImpl(); // 7

            /M/sead::SafeString m_name/0x8/0x4/
            /M/s32 m_animation_kind/0x4/0xC/
            /M/u8 m_animation_type/0x1/0x10/
        /END/

        /START_CLASS/NAME@AnimationFamily/SIZE@0x20/VTABLE@True/
        public:
            virtual void _0x0(); // 0
            virtual void _0x4(); // 1
            virtual void generateAnimationItem(const SafeString&); // 2
            virtual void bindAnimation(void * /* nw::lyt::AnimTransform * */); // 3
            virtual void unbindAnimation(void * /* nw::lyt::AnimTransform * */); // 4

            /M/sead::SafeString m_name/0x8/0x4/
            /M/s32 m_anim_count/0x4/0xC/
            /M/AnimationItem **m_anims/0x4/0x10/
            /M/s32 m_current_anim/0x4/0x14/
            /M/f32 m_0x18/0x4/0x18/
            /M/bool m_changing_anim/0x1/0x1C/
        /END/

        virtual void _0x0(); // 0

        /M/s32 m_anim_family_count/0x4/0x4/
        /M/AnimationFamily **m_anim_family/0x4/0x8/
    /END/
}