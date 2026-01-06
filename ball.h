#pragma once

#include "util/point_3d.h"


struct Ball
{
    Point3d point;
    Point3d velocity;
    int angle;
    int bounce_count;         // バウンド回数
    int last_hit_player_id;   // 最後にヒットしたプレイヤーID
    int hit_count;            // ラリー中のヒット回数（打ち返し回数）
    float previous_z;         // 前フレームのZ座標（ネット判定用）
};