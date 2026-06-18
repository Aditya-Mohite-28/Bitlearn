#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t source_id;
    uint8_t payload_len;
} Header;

typedef struct {
    Header header;
    uint8_t data_buffer[4];
    uint16_t checksum;
} NetworkPacket;

typedef struct {
    int16_t readings[3];
} SensorHistory;

int main() {
    NetworkPacket tx_packet = {
        .header = { .source_id = 0x0A, .payload_len = 4 },
        .data_buffer = { 0x11, 0x22, 0x33, 0x44 },
        .checksum = 0xABCD
    };

    printf("Packet Info -> Source: %d, Len: %d, Checksum: 0x%X\n", 
            tx_packet.header.source_id, tx_packet.header.payload_len, tx_packet.checksum);

    SensorHistory logger[2] = {
        {{ 120, 122, 121 }},
        {{ -5, -4, -6 }}
    };

    printf("Logger dataset [0], Sample [1]: %d\n", logger[0].readings[1]);
    printf("Logger dataset [1], Sample [2]: %d\n", logger[1].readings[2]);
    printf("Total composition size: %zu bytes\n", sizeof(NetworkPacket));

    return 0;
}