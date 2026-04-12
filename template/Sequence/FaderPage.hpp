#pragma once

#include "../types.hpp"
#include "Page.hpp"

BEGIN_NAMESPACE(Sequence)
{
    /START_CLASS/NAME@FaderPage/SIZE@0x13C/BASE@Page/BSIZE@0x5C/VTABLE@True/
    /END/

    BEGIN_NAMESPACE(Fader)
    {
        enum class EFaderType : u32
        {
            FADE_IN_BLACK,
            FADE_IN_WHITE,
            FADE_OUT_BLACK,
            FADE_OUT_WHITE
        };

        enum class EFaderScreen : u32
        {
            TOP_SCREEN,
            BOTTOM_SCREEN,
            BOTH_SCREENS
        };
    }

    void ResumeFade();
    void DisableFade();
    void StartFadein(Fader::EFaderType, u32, Fader::EFaderScreen);
    void StartFadeout(Fader::EFaderType, u32, Fader::EFaderScreen);
    void ForceFadeEnd(Fader::EFaderScreen);
    void ReserveFadein(Fader::EFaderType, u32, Fader::EFaderScreen);
    void SetFaderClearColor();
    bool isFade();
    void WaitFade();
}