#pragma once

#include <string>
#include "util/point_3d.h"

using namespace std;

struct Player
{
    Point3d point;
    string name;
    float speed;
};