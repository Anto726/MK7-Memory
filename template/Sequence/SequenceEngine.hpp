#pragma once

#include "../Object/ActorEngine.hpp"
#include "SceneSequence.hpp"
#include "../UI/ManipulatorManager.hpp"
#include "../UI/UIResourceLoader.hpp"
#include "../Sequence/Page.hpp"
#include "../System/EArchiveID.hpp"

#include <container/seadPtrArray.h>

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@SequenceEngine/SIZE@0xAC/BASE@Object::ActorEngine/BSIZE@0x8/
    public:
        /M/SceneSequence *m_brs_scene_sequence/0x4/0x8/ // Scene sequence associated to the top-most component ("Root") in the .brs. Aka rootSequence
        /M/SceneSequence *m_bss_scene_sequence/0x4/0xc/ // Scene sequence associated to the top-most component of the current scene's .bss
        /M/UI::ManipulatorManager m_manipulator_manager/0x40/0x40/
        /M/UI::UIResourceLoader m_ui_resource_loader/0x8/0x80/    // Archive ID associated with the current scene
        /M/sead::FixedPtrArray<Page, 5> m_active_pages/0x20/0x88/
        /M/MenuSingle_GhostLoad *m_menu_single_ghost_load/0x4/0xA8/
    /END/

    UI::ManipulatorManager *GetManipulatorManager();
}