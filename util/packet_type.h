#pragma once

enum PacketType
{
    PACKET_TYPE_NONE,
    PACKET_TYPE_SET_PLAYER_ID, // プレイヤーID設定
    PACKET_TYPE_GAME_PHASE,    // ゲームフェーズ
    PACKET_TYPE_BALL_STATE,    // ボール位置
    PACKET_TYPE_PLAYER_INPUT,  // プレイヤー入力
    PACKET_TYPE_PLAYER_SWING,  // プレイヤースイング
    PACKET_TYPE_PLAYER_STATE,
    PACKET_TYPE_SCORE_UPDATE,  // スコア更新
    PACKET_TYPE_JUDGE_RESULT,    // 判定結果
    PACKET_TYPE_ABILITY_REQUEST, // 能力発動リクエスト
    PACKET_TYPE_ABILITY_STATE,   // 能力状態同期
    PACKET_TYPE_MATCH_RESULT,    // 試合結果（勝者ID）
    PACKET_TYPE_MAX
};