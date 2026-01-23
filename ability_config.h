#pragma once
#include <cstddef>

#include "ability.h"

// 能力ボタン定義（JoyconButtonと対応）
enum AbilityButton : uint8_t
{
    ABILITY_BTN_A = 0,
    ABILITY_BTN_B = 1,
    ABILITY_BTN_X = 2,
    ABILITY_BTN_Y = 3,
    ABILITY_BTN_ZR = 5,
    ABILITY_BTN_ZL = 7
};

// 能力設定
struct AbilityConfig
{
    AbilityType type;
    AbilityTrigger trigger;
    AbilityButton button;
    uint32_t duration_frames;   // 0=即時効果
    uint32_t cooldown_frames;
    bool requires_server;       // サーバー処理が必要か
};

// 能力定義テーブル（拡張時はここに追加）
// 60fps想定: 180frames=3秒, 1800frames=30秒, 3600frames=60秒
constexpr AbilityConfig ABILITY_CONFIGS[] = {
    // #84: スピードアップ - A+振るで発動、60frames有効、3秒クールダウン
    // スイング時に発動し、その打球の速度がアップ（サーバー側で消費）
    {ABILITY_SPEED_UP, TRIGGER_ON_SWING, ABILITY_BTN_A, 60, 180, true},

    // #85: ラケット判定強化 - B+振るで発動、即時効果、3秒クールダウン
    {ABILITY_RACKET_EXTEND, TRIGGER_ON_SWING, ABILITY_BTN_B, 0, 180, true},

    // #86: でかすぎんだろ - Xで発動、30秒間、60秒クールダウン
    {ABILITY_GIANT, TRIGGER_INSTANT, ABILITY_BTN_X, 1800, 3600, true},

    // #87: 分身 - ZRで発動、30秒間、60秒クールダウン
    {ABILITY_CLONE, TRIGGER_INSTANT, ABILITY_BTN_ZR, 1800, 3600, true},

    // #88: ボール消える - Y+打つで発動、0.5秒間（30frames）、5秒クールダウン
    {ABILITY_INVISIBLE_BALL, TRIGGER_ON_HIT, ABILITY_BTN_Y, 30, 300, false},
};

// 能力設定の数
constexpr size_t ABILITY_CONFIG_COUNT = sizeof(ABILITY_CONFIGS) / sizeof(ABILITY_CONFIGS[0]);

// 能力タイプから設定を取得
inline const AbilityConfig* ability_get_config(AbilityType type)
{
    for (size_t i = 0; i < ABILITY_CONFIG_COUNT; ++i)
    {
        if (ABILITY_CONFIGS[i].type == type)
        {
            return &ABILITY_CONFIGS[i];
        }
    }
    return nullptr;
}
