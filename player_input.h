#pragma once

struct PlayerInput
{
    int player_id;  // プレイヤーID (0 or 1)
    bool right;
    bool left;
    bool front;
    bool back;
    bool swing;
} __attribute__((packed));