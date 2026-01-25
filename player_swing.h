#pragma once

// ショットタイプ
enum ShotType
{
    SHOT_TYPE_NORMAL = 0,  // 通常ショット（Aボタン）
    SHOT_TYPE_LOB = 1      // ロブショット（Bボタン）- 遅くて高い弾道
};

struct PlayerSwing
{
    int player_id;    // プレイヤーID (0 or 1)
    float acc_x;      // X方向の加速度（打球方向）
    float acc_y;      // Y方向の加速度（打球方向）
    float acc_z;      // Z方向の加速度（打球方向）
    int shot_type;    // ショットタイプ（SHOT_TYPE_NORMAL or SHOT_TYPE_LOB）
} __attribute__((packed));
