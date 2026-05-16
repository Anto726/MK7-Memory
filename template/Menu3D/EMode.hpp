#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Menu3D)
{
    // The Japanese names below were obtained from the `sead::SafeString` array at 0x0060ea9c,
    // referenced by function 0x0050a920 (VERSION_EUR_DLP)
    enum class EMode : u8
    {
        GRAND_PRIX,         // "グランプリ"
        TIME_TRIALS,        // "タイムアタック"
        VS,                 // "VS"
        BALLOON_BATTLE,     // "ふうせんバトル"
        COIN_RUNNERS,       // "あつめてコイン"
        MODE_5,
        DEFAULT
    };
}