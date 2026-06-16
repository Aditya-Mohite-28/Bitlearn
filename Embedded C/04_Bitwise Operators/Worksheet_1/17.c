#include <stdio.h>

unsigned int swap_endian_32(unsigned int num) {
    return ((num & 0x000000FFU) << 24) |
           ((num & 0x0000FF00U) << 8)  |
           ((num & 0x00FF0000U) >> 8)  |
           ((num & 0xFF000000U) >> 24); 
}

int main() {
    unsigned int original = 0x12345678;
    unsigned int converted = swap_endian_32(original);

    printf("Original Value:  0x%08X\n", original);
    printf("Converted Value: 0x%08X\n", converted);

    return 0;
}