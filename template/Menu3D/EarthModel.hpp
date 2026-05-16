#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "../Object/Actor.hpp"

#include <heap/seadHeap.h>
#include <math/seadMatrix.h>

BEGIN_NAMESPACE(Menu3D)
{
    /START_CLASS/NAME@EarthModel/SIZE@0x74/BASE@Object::Actor/BSIZE@0x8/
	public:
        /START_STRUCT/NAME@Location/SIZE@0x8/
            /M/f32 m_latitude/0x4/0x0/
            /M/f32 m_longitude/0x4/0x4/
        /END/

		virtual Object::DTIClassInfo *getDTIClassInfo() const;
		virtual Object::DTIClassInfo *getDTIClass() const;
		virtual void init();
		virtual void calc();

		EarthModel();
		void inactivate();
        void startRotation(const Location &);
        void setChannelMode(bool);
        void setNormalRotation(bool);
        void calcAfterCameraUpdate();
        void activate();
        void calcSurfaceMatrix_(sead::Matrix34f *) const;

		/M/Render::DrawMdl *m_earth_model/0x4/0x14/
		/M/Render::DrawMdl *m_earth_ring_model/0x4/0x18/
		/M/Field::MenuVRModel *m_menu_vr/0x4/0x1c/
		/M/sead::Heap *m_heap/0x4/0x20/     // Name: "Earth"
        /M/u8 m_task_id/0x1/0x24/           // Menu3D::ModelCreateManager::TaskID
        /M/Location m_location/0x8/0x34/
        /M/bool m_do_rotate/0x1/0x4a/       // If `true`, request the Earth model to rotate as normal
        /M/bool m_is_channel_mode/0x1/0x71/
    /END/
}