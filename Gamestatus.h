#pragma once

#include "GameScore.h"
#include "util/point_3d.h"

struct GameStatus
{
    Point3d player;
    Point3d ball;
    GameScore point;
};