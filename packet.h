#pragma once

#include <cstdint>
#include <stdio.h>

#include "util/packet_type.h"

#define PACKET_MAX_SIZE 1024

struct Packet
{
    PacketType type;
    uint8_t data[PACKET_MAX_SIZE];
    size_t size;
};