#pragma once

enum PacketType
{
    PACKET_TYPE_NONE,
    PACKET_TYPE_SET_PLAYER_ID, // プレイヤーID設定
    PACKET_TYPE_GAME_PHASE,    // ゲームフェーズ
    PACKET_TYPE_BALL_STATE,    // ボール位置
    PACKET_TYPE_PLAYER_INPUT,  // プレイヤー操作
    PACKET_TYPE_SCORE_UPDATE,  // スコア
    PACKET_TYPE_JUDGE_RESULT,   // 判定
    PACKET_TYPE_PLAYER_STATE,  // プレイヤー位置
    PACKET_TYPE_PLAYER_STATE  // プレイヤー位置同期用
};