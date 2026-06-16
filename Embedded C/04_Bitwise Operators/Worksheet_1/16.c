#include <stdio.h>

int get_int_size_in_bits() {
    unsigned int mask = 1U;
    int bit_count = 0;

    while (mask != 0) {
        bit_count++;
        mask <<= 1;
    }

    return bit_count;
}

int main() {
    int total_bits = get_int_size_in_bits();

    printf("--- Integer Size Determination ---\n");
    printf("Measured size using bit shifts: %d bits\n", total_bits);
    
    // Verification using standard library methods
    printf("Verified using sizeof operator: %lu bits\n", sizeof(int) * 8);

    return 0;
}