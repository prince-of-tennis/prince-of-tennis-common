#pragma once

struct PlayerInput
{
    int player_id;  // プレイヤーID (0 or 1)
    bool right;
    bool left;
    bool front;
    bool back;
    float acc_x;
    float acc_y;
    float acc_z;
} __attribute__((packed));