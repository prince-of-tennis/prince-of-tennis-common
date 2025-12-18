#ifndef GAME_PHASE_H
#define GAME_PHASE_H


typedef enum
{
    GAME_PHASE_WAIT_FOR_MATCH = 0,  // マッチング待機中
    GAME_PHASE_MATCH_COMPLETE,      // マッチング完了（プレイヤーが揃った状態）
    GAME_PHASE_START_GAME,          // ゲーム開始前の初期化
    GAME_PHASE_IN_RALLY,            // ラリー中
    GAME_PHASE_POINT_SCORED,        // ポイントが入った後
    GAME_PHASE_GAME_FINISHED        // ゲーム（セット/マッチ）が終了
} GamePhase;

#endif