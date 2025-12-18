#pragma once

#include "util/point_3d.h"

// SDL_netの前方宣言（ヘッダー依存を減らす）
typedef struct _TCPsocket *TCPsocket;

struct Player
{
    // ゲーム情報
    Point3d point;
    char name[32];
    float speed;

    // ネットワーク情報（サーバー側でのみ使用）
    TCPsocket socket;
    bool connected;
    int player_id;  // 0～3
};
