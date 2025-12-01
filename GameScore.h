#pragma once
#define MAX_SETS 3 
struct GameScore
{
    int games_in_set[MAX_SETS][2]; // [セット番号][プレイヤー番号 (0 or 1)]
    int current_set;               // 現在のセット番号 (0, 1, 2)
    int current_game_p1;           // 現在のゲームでのP1のポイント数 (0, 15, 30, 40...)
    int current_game_p2;           // 現在のゲームでのP2のポイント数
};