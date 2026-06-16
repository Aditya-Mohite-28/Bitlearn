#include <stdio.h>

int count_set_bits_shift(unsigned int num) {
    int count = 0;
    while (num > 0) {
        count += (num & 1U);
        num >>= 1;
    }
    return count;
}

int count_set_bits_kernighan(unsigned int num) {
    int count = 0;
    while (num > 0) {
        num &= (num - 1U);
        count++;
    }
    return count;
}

int count_set_bits_lookup(unsigned int num) {
    static const int lookup_table[] = {
        0, 1, 1, 2, 1, 2, 2, 3, 
        1, 2, 2, 3, 2, 3, 3, 4
    };
    
    int count = 0;
    while (num > 0) {
        count += lookup_table[num & 0xFU];
        num >>= 4;
    }
    return count;
}

int is_20th_bit_set(unsigned int num) {
    return (num >> 20) & 1U;
}

void print_binary_32bit(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int num = 0x001000FF; 

    printf("Target Number (Hex): 0x%08X\n", num);
    printf("Target Number (Bin): ");
    print_binary_32bit(num);
    printf("--------------------------------------------------\n");

    printf("Counting Set Bits:\n");
    printf("-> Standard Shift Method:  %d\n", count_set_bits_shift(num));
    printf("-> Brian Kernighan Method: %d\n", count_set_bits_kernighan(num));
    printf("-> Lookup Table Method:    %d\n", count_set_bits_lookup(num));
    printf("--------------------------------------------------\n");

    printf("Checking Bit Status:\n");
    if (is_20th_bit_set(num)) {
        printf("-> The 20th bit is SET (1)\n");
    } else {
        printf("-> The 20th bit is NOT SET (0)\n");
    }

    return 0;
}