#pragma once
#include <cstdint>

// 能力タイプ
enum AbilityType : uint8_t
{
    ABILITY_NONE = 0,
    ABILITY_SPEED_UP = 1,        // #84: スピードアップ
    ABILITY_RACKET_EXTEND = 2,   // #85: ラケット判定強化
    ABILITY_GIANT = 3,           // #86: でかすぎんだろ
    ABILITY_CLONE = 4,           // #87: 分身
    ABILITY_INVISIBLE_BALL = 5,  // #88: ボール消える
    ABILITY_MAX
};

// 能力発動トリガー
enum AbilityTrigger : uint8_t
{
    TRIGGER_INSTANT = 0,   // ボタンのみ
    TRIGGER_ON_SWING = 1,  // ボタン+振る
    TRIGGER_ON_HIT = 2     // ボタン+打つ
};

// クライアント→サーバー: 能力発動リクエスト
struct AbilityActivateRequest
{
    int player_id;
    AbilityType ability_type;
    AbilityTrigger trigger;
} __attribute__((packed));

// サーバー→クライアント: 能力状態同期
struct AbilityState
{
    int player_id;
    AbilityType active_ability;
    uint32_t remaining_frames;
} __attribute__((packed));
