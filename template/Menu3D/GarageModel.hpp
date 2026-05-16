#pragma once

#include "../forward.hpp"
#include "../types.hpp"

#include "../Object/Actor.hpp"

BEGIN_NAMESPACE(Menu3D)
{
    /START_CLASS/NAME@GarageModel/SIZE@0x84/BASE@Object::Actor/BSIZE@0x8/
	public:
		virtual Object::DTIClassInfo *getDTIClassInfo() const;
		virtual Object::DTIClassInfo *getDTIClass() const;
		virtual void init();
		virtual void calc();

		GarageModel();
		void inactivate();
		void openShutter(s32);
		void closeShutter();
		void activate();
		void setLight(bool);
		bool isLightOn() const;

		/M/Render::DrawMdl *m_garage/0x4/0x14/
		/M/Render::DrawMdl *m_shutter/0x4/0x18/
		/M/Render::DrawMdl *m_spot_off/0x4/0x1c/
		/M/Render::DrawMdl *m_fan/0x4/0x20/
		/M/Field::MenuVRModel *m_garage_vr/0x4/0x24/
		/M/f32 m_Frame/0x4/0x78/
		/U/f32/0x4/0x7c/
		/M/bool m_is_active/0x1/0x80/
	/END/
}