#pragma once

#include "../types.hpp"

#include "BaseMenuButtonControl.hpp"

#include <nw/lyt/TextBox.hpp>

BEGIN_NAMESPACE(UI)
{
    // Used in MenuSingle. Default OK text
    /START_CLASS/NAME@OKButton/SIZE@0x240/BASE@BaseMenuButtonControl/BSIZE@0x23C/VTABLE@True/
    public:
        // TODO
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~OKButton();
        virtual void onCreate(const Control::CreateArg *);

        /M/nw::lyt::TextBox *m_textbox/0x4/0x23c/
    /END/

    // Used in MenuMulti. Default OK text + A icon
    /START_CLASS/NAME@OKButton2/SIZE@0x240/BASE@BaseMenuButtonControl/BSIZE@0x23C/VTABLE@True/
    public:
        // TODO
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~OKButton2();
        virtual void onCreate(const Control::CreateArg *);

        /M/nw::lyt::TextBox *m_textbox/0x4/0x23c/
    /END/

    // Used in MenuChannel. No default OK text
    /START_CLASS/NAME@OKButton3/SIZE@0x240/BASE@BaseMenuButtonControl/BSIZE@0x23C/VTABLE@True/
    public:
        // TODO
        virtual Object::DTIClassInfo *getDTIClassInfo() const;
        virtual Object::DTIClassInfo *getDTIClass() const;
        virtual ~OKButton3();
        virtual void onCreate(const Control::CreateArg *);

        /M/nw::lyt::TextBox *m_textbox/0x4/0x23c/
    /END/
}