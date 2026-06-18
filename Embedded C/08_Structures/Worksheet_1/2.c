#include <stdio.h>
#include <stdint.h>

struct StatusRegister {
    uint8_t error : 1;
    uint8_t ready : 1;
    uint8_t mode  : 2;
    uint8_t rsvd  : 4;
};

int main() {
    struct StatusRegister reg = {0};

    printf("Initial register size: %zu byte\n", sizeof(reg));

    reg.ready = 1;
    reg.mode = 3;
    printf("After setting fields -> Ready: %d, Mode: %d, Error: %d\n", reg.ready, reg.mode, reg.error);

    reg.ready = !reg.ready;
    reg.error = !reg.error;
    printf("After toggling flags -> Ready: %d, Mode: %d, Error: %d\n", reg.ready, reg.mode, reg.error);

    uint8_t *raw_byte = (uint8_t*)&reg;
    printf("Raw register hex value: 0x%02X\n", *raw_byte);

    return 0;
}