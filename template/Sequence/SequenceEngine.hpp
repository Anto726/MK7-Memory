#pragma once

#include "../Object/ActorEngine.hpp"
#include "SceneSequence.hpp"
#include "../UI/ManipulatorManager.hpp"
#include "../UI/UIResourceLoader.hpp"
#include "../Sequence/Page.hpp"
#include "../System/EArchiveID.hpp"

#include <container/seadPtrArray.h>
#include <prim/seadSafeString.hpp>

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@SequenceEngine/SIZE@0xAC/BASE@Object::ActorEngine/BSIZE@0x8/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual void create(const Object::ArgumentObj *);
        virtual void init();
        virtual void calc();
        virtual void accept(Object::ActorVisitor &);
        virtual DashSectionClassManager *getSectionClassManager() = 0;
        virtual DashSceneIDConverter *getSceneIDConverter() = 0;
        virtual DashEngineCreatorManager *getEngineCreatorManager() = 0;
        virtual UI::DashFontManager *getFontManager() = 0;
        virtual UI::DashMessageWriter *getMessageWriter() = 0;
        virtual sead::SafeString getDefaultRootSceneName() const;
        virtual sead::SafeString getDefaultRootSceneMode() const;
        virtual sead::SafeString getDefaultRootSceneEnterCode() const;

        void attachActivePage(BasePage *);
        void detachActivePage(BasePage *);
        bool isAllPageRunning();
        void createRootSequence(const sead::SafeString &, const sead::SafeString &, const sead::SafeString &);
        bool isAllPageBeforeComplete();
        SceneSequence *sceneStart(s32);
        void sceneFinish(s32);

        /M/SceneSequence *m_brs_scene_sequence/0x4/0x8/ // Scene sequence associated to the top-most component ("Root") in the .brs. Aka rootSequence
        /M/SceneSequence *m_bss_scene_sequence/0x4/0xc/ // Scene sequence associated to the top-most component of the current scene's .bss
        /M/u16 m_return_code_item_idx/0x2/0x10/
        /M/UI::ManipulatorManager m_manipulator_manager/0x40/0x40/
        /M/UI::UIResourceLoader m_ui_resource_loader/0x8/0x80/    // Archive ID associated with the current scene
        /M/sead::FixedPtrArray<Page, 5> m_active_pages/0x20/0x88/
        /M/MenuSingle_GhostLoad *m_menu_single_ghost_load/0x4/0xA8/
    /END/

    UI::ManipulatorManager *GetManipulatorManager();
}