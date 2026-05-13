#pragma once

#include "BaseFastControl.hpp"
#include "CourseButton.hpp"

BEGIN_NAMESPACE(UI)
{
    /START_CLASS/NAME@BattleCourseButton/SIZE@0x248/BASE@CourseButton/BSIZE@0x23C/VTABLE@True/
    public:
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~BattleCourseButton();
        virtual void onCreate(const Control::CreateArg *);

        /M/nw::lyt::TextBox *m_T_st_name/0x4/0x23c/
        /M/BaseFastControl::TextScale m_text_scale/0x8/0x240/
    /END/
}