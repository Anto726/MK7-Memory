#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Menu3D)
{
    // The Japanese names below were obtained from the `sead::SafeString` array at 0x0060ea84,
    // referenced by function 0x0050a920 (VERSION_EUR_DLP)
    enum class EScene : u8
    {
        SINGLE_PLAYER,  // "シングル"
        MULTIPLAYER,    // "マルチ"
        WIFI            // "Wi-Fi"
    };
}