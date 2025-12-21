#pragma once

// ============================================
// ゲーム共通定数定義
// ============================================

namespace GameConstants {
    // コート寸法（メートル単位）
    constexpr float COURT_HALF_WIDTH = 4.115f;      // コートの幅の半分
    constexpr float COURT_HALF_LENGTH = 11.89f;     // コートの長さの半分

    // プレイヤー初期位置
    constexpr float PLAYER_BASELINE_DISTANCE = 24.9674f;  // ベースラインからの距離
    constexpr float PLAYER_MOVE_SPEED = 5.0f;             // プレイヤーの移動速度 (m/s)
    constexpr float PLAYER_MOVEMENT_EPSILON = 0.0001f;    // 移動ベクトルの正規化の閾値

    // ボール関連
    constexpr float BALL_SERVE_HEIGHT = 2.0f;             // サーブ時のボールの高さ（地面からメートル）
    constexpr float BALL_SERVE_OFFSET_FROM_BASELINE = 0.9674f; // ベースラインからサーブ位置までのオフセット

    // 物理定数
    constexpr float GRAVITY = 9.8f;                       // 重力加速度 (m/s^2)
    constexpr float GROUND_Y = 0.0f;                      // 地面のY座標
    constexpr float BOUNCE_RESTITUTION = 0.7f;            // 反発係数（バウンド時の速度減衰率）

    // ゲームループ
    constexpr float FRAME_TIME = 0.016f;                  // 1フレームの時間 (60 FPS)
    constexpr int FRAME_DELAY_MS = 16;                    // フレーム間の遅延（ミリ秒）
}

