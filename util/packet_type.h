#pragma once

enum PacketType
{
    PACKET_TYPE_NONE,
    PACKET_TYPE_SET_PLAYER_ID, // プレイヤーID設定
    PACKET_TYPE_GAME_PHASE,    // ゲームフェーズ
    PACKET_TYPE_BALL_STATE,    // ボール位置
    PACKET_TYPE_PLAYER_INPUT,  // プレイヤー入力
    PACKET_TYPE_PLAYER_STATE,
    PACKET_TYPE_SCORE_UPDATE,  // スコア更新
    PACKET_TYPE_JUDGE_RESULT   // 判定結果
};