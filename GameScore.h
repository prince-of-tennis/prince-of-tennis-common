#pragma once

// 3セット先取で勝利
constexpr int SETS_TO_WIN = 3;

struct GameScore
{
    int point_p1;  // P1のポイント (0, 15, 30, 40, 50)
    int point_p2;  // P2のポイント (0, 15, 30, 40, 50)
    int sets_p1;   // P1の獲得セット数
    int sets_p2;   // P2の獲得セット数
};
