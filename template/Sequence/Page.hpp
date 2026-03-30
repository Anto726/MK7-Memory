#pragma once

#include "../types.hpp"
#include "../forward.hpp"

#include "ExecutableSection.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@Page/SIZE@0x5C/BASE@ExecutableSection/BSIZE@0x50/VTABLE@True/
    public:
        virtual ~Page();
        virtual void create(Object::ArgumentObj const *);
        virtual void accept(Object::ActorVisitor *);
        s32 getSectionType() const;
        virtual bool isSyncFadein() const;
        virtual s32 getFadeFelay() const;
        virtual void step();
        virtual void enter();
        virtual void standby();
        virtual void start();
        virtual void complete();
        virtual void cancel();
        virtual void finish();
        virtual void reenter();
        virtual void exit();
        virtual void clear();
        virtual void pageStep(bool);
        virtual void onCreate();
        virtual void onGenerateControl(UI::ControlInitializer *);
        virtual void onPagePreStep();
        virtual void onPagePostStep();
        virtual void onPageEnter();
        virtual void onPageStandBy();
        virtual void onPageStart();
        virtual void onPageComplete();
        virtual void onPageFinish();
        virtual void onPageCancel();
        virtual void onPageReenter();
        virtual void onPageExit();
        virtual bool canFinishFadein();
        virtual bool canFinishFadeout();
        virtual void completePage(s32);
        virtual s32 getFadeinType(s32);
        virtual s32 getFadeoutType(s32);

        Page();

        /M/u32 m_fade_delay/0x4/0x54/
        // Prevents `Sequence::Section::exitOuter` to be called in `Sequence::Page::cancel`
        /M/bool m_stop_cancel/0x1/0x58/
        // Prevents the page from being pushed into the Page array from Render::UIDrawDirector
        /M/bool m_dont_push_into_ui_draw_director/0x1/0x59/
        /M/s8 m_sync_return_code/0x1/0x5A/
        /M/bool m_fade_is_active/0x1/0x5B/
    /END/
}