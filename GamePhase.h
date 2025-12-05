#ifndef GAME_PHASE_H
#define GAME_PHASE_H


typedef enum
{
    GAME_PHASE_WAIT_FOR_MATCH = 0,  // マッチング中
    GAME_PHASE_MATCH_COMPLETE,      // マッチング完了（プレイヤーが揃った状態）
    GAME_PHASE_START_GAME,          // ゲーム開始前の準備期間
    GAME_PHASE_IN_RALLY,            // ラリー中
    GAME_PHASE_POINT_SCORED,        // ポイントが決まった直後
    GAME_PHASE_GAME_ENDED           // ゲーム（セット/マッチ）が終了した
} GamePhase;

#endif