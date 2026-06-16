#include <stdio.h>

int main() {
    int num;

    printf("Input: ");
    scanf("%d", &num);

    int total_bits = 8;
    int msb_mask = 1 << (total_bits - 1);
    printf("%x\n", msb_mask);
    printf("%x\n", num);
    if ((num & msb_mask) != 0) {
        printf("MSB of %d is set\n", num);
    } else {
        printf("MSB of %d is not set\n", num);
    }

    return 0;
}