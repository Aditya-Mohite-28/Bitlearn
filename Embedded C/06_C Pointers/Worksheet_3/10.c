#include <stdio.h>
#include <stdint.h>

struct Peripheral {
    uint8_t status;
    uint8_t control;
    uint16_t data;
};

int main() {
    struct Peripheral device_array[5] = {0};
    struct Peripheral *ptr = device_array;

    for (int i = 0; i < 5; i++) {
        ptr->status = (uint8_t)(i + 1);
        ptr->control = (uint8_t)((i + 1) * 10);
        ptr->data = (uint16_t)((i + 1) * 100);
        ptr++;
    }

    ptr = device_array;

    for (int i = 0; i < 5; i++) {
        printf("Device %d -> Status: %u, Control: %u, Data: %u\n", 
               i, (ptr + i)->status, (ptr + i)->control, (ptr + i)->data);
    }

    return 0;
}