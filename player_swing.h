#pragma once

struct PlayerSwing
{
    int player_id;  // プレイヤーID (0 or 1)
    float acc_x;    // X方向の加速度（打球方向）
    float acc_y;    // Y方向の加速度（打球方向）
    float acc_z;    // Z方向の加速度（打球方向）
} __attribute__((packed));
