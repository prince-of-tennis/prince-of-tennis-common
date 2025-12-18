#pragma once

#include <cstdint>
#include <stdio.h>

#include "util/packet_type.h"
#include "ball.h"

#define PACKET_MAX_SIZE 1024

struct Packet
{
    PacketType type;
    size_t size;
    uint8_t data[PACKET_MAX_SIZE];
};

struct PlayerStatePacket
{
    int player_id;    // 0 ~ 3
    Point3d position; // 座標 (x, y, z)
};

struct ScorePacket
{
    int current_game_p1;    //0,15,30,40
    int current_game_p2;
    int games_p1;        // 現在のセットの取得ゲーム数
    int games_p2;
    int sets_p1;    //取得セット数
    int sets_p2;
};