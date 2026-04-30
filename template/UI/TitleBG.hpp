#pragma once

#include "../types.hpp"

#include "BaseMenuViewControl.hpp"

#include <nw/lyt/Material.hpp>
#include <nw/lyt/TextureInfo.hpp>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@TitleBG/SIZE@0xD8/BASE@BaseMenuViewControl/BSIZE@0xA8/VTABLE@True/
    public:
        // Note: The name of this enum is made up.
        enum class EType : u32
        {
            TYPE_CAPTURE_TOP,   // title_capture_top
            TYPE_WING,          // title_wing
            TYPE_SCREW,         // title_screw
            TYPE_PEACH,         // title_peach
            TYPE_DK,            // title_DK
            TYPE_YOSHI          // title_yoshi
        };

        /START_STRUCT/NAME@AnimationDefine/SIZE@0x18/BASE@ControlAnimator::AnimationDefine/BSIZE@0x18/VTABLE@True/
            virtual void defineAnimation(); // 0
        /END/

        /START_STRUCT/NAME@CreateArg/SIZE@0x90/BASE@VisualControl::CreateArg/BSIZE@0x90/VTABLE@True/
            virtual const ControlAnimator::AnimationDefine *getAnimationDefine() const; // 3
        /END/

        Object::DTIClassInfo *getDTIClassInfo() const;
        Object::DTIClassInfo *getDTIClass() const;
        virtual ~TitleBG();
        virtual void draw(Control::EDrawScreen); // 25
#if GAME_VERSION != ALL_DLP
        // 0x00178c28 (VERSION_USA_REV1)
        void loadTextures(EType);
#endif

        /M/nw::lyt::Material *m_material/0x4/0xa8/
        /M/nw::lyt::TextureInfo m_textures[2]/0x28/0xac/
        /M/bool m_textures_loaded/0x1/0xd4/
    /END/
}