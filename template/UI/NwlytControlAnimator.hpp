#pragma once

#include "../types.hpp"
#include "../forward.hpp"
#include "NwlytControlSight.hpp"

#include <prim/seadSafeString.h>
#include <container/seadPtrArray.h>
#include <nw/lyt/Pane.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@NwlytControlAnimator/SIZE@0x10/BASE@ControlAnimator/BSIZE@0xC/VTABLE@True/
    public:
        /START_CLASS/NAME@NwlytAnimationFamily/SIZE@0x2C/BASE@AnimationFamily/BSIZE@0x20/VTABLE@True/
        public:
            virtual void _0x0(); // 0
            virtual void _0x4(); // 1
            virtual void generateAnimationItem(const sead::SafeString &); // 2
            virtual void bindAnimation(void * /* nw::lyt::AnimTransform * */); // 3
            virtual void unbindAnimation(void * /* nw::lyt::AnimTransform * */); // 4

            NwlytAnimationFamily(NwlytControlAnimator *, const sead::SafeString &, s32);

            /M/NwlytControlAnimator *m_control_animator/0x4/0x20/
            /M/void *m_group/0x4/0x24/     // nw::lyt::Group *
            /M/nw::lyt::Pane *m_pane/0x4/0x28/
        /END/

        /START_CLASS/NAME@NwlytAnimationItem/SIZE@0x1C/BASE@AnimationItem/BSIZE@0x14/VTABLE@True/
        public:
            virtual void _0x0(); // 0
            virtual void _0x4(); // 1 (__deallocating)
            virtual void startAnimation(); // 2
            virtual void endAnimation(); // 3
            virtual f32 getDataFrameSize(); // 4
            virtual f32 getCurrentDataFrame(); // 5
            virtual void setFrameImpl(f32); // 6
            virtual bool isLoopImpl(); // 7

            NwlytAnimationItem(NwlytAnimationFamily *, const sead::SafeString &);

            /M/NwlytAnimationFamily *m_animation_family/0x4/0x14/
            /M/void *m_anim_transform/0x4/0x18/   // nw::lyt::AnimTransform *
        /END/

        virtual void applyAnimation(); // 3
        virtual void generateAnimationFamily(const sead::SafeString &, s32); // 4

        NwlytControlAnimator(NwlytControlSightBase *);

        /M/NwlytControlSightBase *m_control_sight/0x4/0xc/
    /END/

    /START_CLASS/NAME@NwlytDivControlAnimator/SIZE@0x14/BASE@NwlytControlAnimator/BSIZE@0x10/VTABLE@True/
    public:
        /START_CLASS/NAME@NwlytDivAnimationFamily/SIZE@0x38/BASE@NwlytAnimationFamily/BSIZE@0x2C/VTABLE@True/
        public:
            virtual void bindAnimation(void * /* nw::lyt::AnimTransform * */); // 3
            virtual void unbindAnimation(void * /* nw::lyt::AnimTransform * */); // 4

            NwlytDivAnimationFamily(NwlytDivControlAnimator *, const sead::SafeString &, s32);

            /M/sead::PtrArray<nw::lyt::Pane> m_panes/0xc/0x2c/
        /END/

        virtual void generateAnimationFamily(const sead::SafeString &, s32); // 4

        NwlytDivControlAnimator(NwlytDivControlSight *);

        /M/NwlytDivControlSight *m_div_control_sight/0x4/0x10/
    /END/
}