#include <stdio.h>
#include <stdint.h>

struct MyStruct {
    char c;
    int i;
    float f;
};

union MyUnion {
    char c;
    int i;
    float f;
};

typedef enum {
    CMD_SET_SPEED,
    CMD_SET_TEMP,
    CMD_STATUS_REQ
} CmdType;

struct CommandPacket {
    CmdType type;
    union {
        int speed_rpm;
        float temp_celsius;
        uint8_t request_flags;
    } payload;
};

int main() {
    struct MyStruct s;
    union MyUnion u;
    struct CommandPacket packet;

    printf("Struct size: %zu bytes\n", sizeof(s));
    printf("Union size: %zu bytes\n\n", sizeof(u));

    u.i = 0x41424344;
    printf("Union integer value: 0x%X\n", u.i);
    printf("Union char value (overlapping): 0x%X\n", u.c);
    printf("Union float value (overlapping): %f\n\n", u.f);

    u.f = 12.5f; 
    printf("Mapped bytes of float 12.5:\n");
    uint8_t *byte_ptr = (uint8_t*)&u;
    for(size_t i = 0; i < sizeof(float); i++) {
        printf("Byte [%zu]: 0x%02X\n", i, byte_ptr[i]);
    }
    printf("\n");

    packet.type = CMD_SET_SPEED;
    packet.payload.speed_rpm = 2500;
    printf("Packet Type: %d, Payload (Speed): %d\n", packet.type, packet.payload.speed_rpm);

    packet.type = CMD_SET_TEMP;
    packet.payload.temp_celsius = 36.6f;
    printf("Packet Type: %d, Payload (Temp): %.1f\n", packet.type, packet.payload.temp_celsius);
    printf("Total Packet Size: %zu bytes\n", sizeof(packet));

    return 0;
}