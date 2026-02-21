#pragma once

#include "../Object/ActorEngine.hpp"
#include "SceneSequence.hpp"
#include "../UI/ManipulatorManager.hpp"
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
        /M/System::EArchiveID m_archive_id/0x4/0x80/    // Archive ID associated with the current scene
        /M/sead::PtrArray<Sequence::Page> m_active_pages/0xC/0x88/
    /END/
}