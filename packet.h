#pragma once

#include <cstdint>

#include "ball.h"
#include "util/packet_type.h"

#define PACKET_MAX_SIZE 4096

// ネットワーク通信用パケット構造体
// 構造体パディングを防ぐため、固定サイズの型を使用
struct Packet
{
    PacketType type;
    uint32_t size;  // size_t ではなく uint32_t を使用（プラットフォーム非依存）
    uint8_t data[PACKET_MAX_SIZE];
} __attribute__((packed));  // パディングを無効化（GCC/Clang）
