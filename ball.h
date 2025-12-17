#pragma once

#include "util/point_3d.h"


struct Ball
{
    Point3d point;
    Point3d velocity;
    int angle;

    int Last_hit_player_id;
    int bounce_count;
};