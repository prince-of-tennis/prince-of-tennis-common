#pragma once

#include <cstdint>

#include "util/packet_type.h"
#include "ball.h"

#define PACKET_MAX_SIZE 1024

// ネットワーク通信用パケット構造体
// 構造体パディングを防ぐため、固定サイズの型を使用
struct Packet
{
    uint32_t type;  // PacketType を uint32_t として送信（エンディアン問題を回避）
    uint32_t size;  // size_t ではなく uint32_t を使用（プラットフォーム非依存）
    uint8_t data[PACKET_MAX_SIZE];
} __attribute__((packed));  // パディングを無効化（GCC/Clang）
