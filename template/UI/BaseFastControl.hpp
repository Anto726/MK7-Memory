#pragma once

#include "../types.hpp"

#include "ControlSight.hpp"
#include "VisualControl.hpp"
#include "../RaceSys/EDriverID.hpp"

#include <nw/lyt/TextBox.hpp>
#include <math/seadVector.h>
#include <prim/seadSafeString.h>

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@BaseFastControl/SIZE@0x7C/BASE@VisualControl/BSIZE@0x7C/VTABLE@True/
    public:
        /START_STRUCT/NAME@TextScale/SIZE@0x8/
            TextScale(nw::lyt::TextBox *);

            /M/s32 x/0x4/0x0/
            /M/s32 y/0x4/0x4/
        /END/

        enum class ECharaIconType : u32
        {
            TYPE_MAP,
            TYPE_RANK_r90,
            TYPE_RANK,
            TYPE_SELECT
        };

        virtual void create(Object::ArgumentObj const *); // 4
        virtual void calc(); // 6
        virtual void animMenuIn(); // 31
        virtual void animMenuOut(); // 32

        void calcTextLen(nw::lyt::TextBox *, const sead::WSafeString *);
        void calcTextLen(nw::lyt::TextBox *, u32);
        void setPosX(ControlSight::ElementHandle &, f32);
        void setPosY(ControlSight::ElementHandle &, f32);
        void setPos(ControlSight::ElementHandle &, const sead::Vector3f &);
        void animOff();
        void calcAnim(ControlSight::ElementHandle &);
        void calcAnim();
        void animOnOff(s32, s32);
        void animOnOff(s32, s32, UI::ControlSight::ElementHandle&);
        void *getLayout();   // nw::lyt::Layout *
        void scaleText(nw::lyt::TextBox *, const sead::SafeString *, const TextScale &);
        void scaleText(nw::lyt::TextBox *, u32, const TextScale &);
        void CalculateMtx(ControlSight::ElementHandle&);
        void calcGlobalPos(ControlSight *, ControlSight::ElementHandle &);
        void CalculateAlpha(ControlSight::ElementHandle &);
        void CalculateScale(ControlSight::ElementHandle &);
        void animOnOffAlpha(s32, s32, ControlSight::ElementHandle &);
        void replaceTexture(const ControlSight::ElementHandle &, const void * /* const nw::lyt::TextureInfo & */ );
        void replaceMiiTexture(const ControlSight::ElementHandle &, ECharaIconType, s32, void * /* const nn::math::VEC2(*)[4] */);
        void CalculateAlphaImpl(nw::lyt::Pane *, f32);
        void CalculateScaleImpl(nw::lyt::Pane *, const sead::Vector2f &);
        void getCharaTextureName(sead::FixedSafeString<(s32)64> *, ECharaIconType, RaceSys::EDriverID, s32);
        void replaceCharaTexture(const ControlSight::ElementHandle &, ECharaIconType, RaceSys::EDriverID, s32);
    /END/
}