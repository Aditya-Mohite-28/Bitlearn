#include <stdio.h>
#include <stddef.h>

struct PeripheralRegs {
  char status;
  int control;
  short error;
};

struct __attribute__((packed)) PackedPeripheralRegs {
  char status;
  int control;
  short error;
};

int main() {
    printf("--- Standard Structure ---\n");
    printf("Total Size: %zu bytes\n", sizeof(struct PeripheralRegs));
    printf("Offset of status:  %zu\n", offsetof(struct PeripheralRegs, status));
    printf("Offset of control: %zu\n", offsetof(struct PeripheralRegs, control));
    printf("Offset of error:   %zu\n\n", offsetof(struct PeripheralRegs, error));

    printf("--- Packed Structure ---\n");
    printf("Total Size: %zu bytes\n", sizeof(struct PackedPeripheralRegs));
    printf("Offset of status:  %zu\n", offsetof(struct PackedPeripheralRegs, status));
    printf("Offset of control: %zu\n", offsetof(struct PackedPeripheralRegs, control));
    printf("Offset of error:   %zu\n", offsetof(struct PackedPeripheralRegs, error));

    return 0;
}