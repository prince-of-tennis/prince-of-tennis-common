#pragma once

#include "util/point_3d.h"

struct Ball
{
    Point3d point;
    Point3d velocity;
    int angle;
    int bounce_count;         // バウンド回数
    int last_hit_player_id;   // 最後にヒットしたプレイヤーID
};