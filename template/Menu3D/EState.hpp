#pragma once

#include "../types.hpp"

BEGIN_NAMESPACE(Menu3D)
{
    // The Japanese names below were obtained from the `sead::SafeString` array at 0x0060eac4,
    // referenced by function 0x0050a920 (VERSION_EUR_DLP)
    enum class EState : u8
    {
        onMultiMatching,    // "マッチング"
        onWFCConnection,    // "接続"
        onWFCOpponent,      // "対戦相手"
        onMode,             // "モード"
        onClass,            // "クラス"
        onDriver,           // "キャラ"
        onKart,             // "マシン"
        onRules,            // "ルール"
        onWFCGlobe,         // "地球演出"
        onWFCMember,        // "Mii紹介"
        onWFCConfirm,       // "メンバー確認"
        onCup,              // "カップ"
        onCourse,           // "コース"
        onTimeTrialGhost,   // "ゴースト"
        onChannel,          // "チャンネル"
        onOK,               // "OK"
        onEnd,              // "ホワイトアウト"
        Default,
        MAX
    };
}