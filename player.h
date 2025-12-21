#pragma once

#include "util/point_3d.h"

// プレイヤーの状態（ゲームロジック＋ネットワーク共通）
struct Player
{
    // ゲーム情報
    Point3d point;
    char name[32];
    float speed;

    // 接続情報（サーバー側で管理、クライアント側では無視される）
    bool connected;
    int player_id;  // 0～1（2人プレイヤー専用）
};
