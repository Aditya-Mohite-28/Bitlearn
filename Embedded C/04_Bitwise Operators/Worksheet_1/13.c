#include <stdio.h>

unsigned int reverse_bits_loop(unsigned int num) {
    unsigned int total_bits = sizeof(num) * 8;
    unsigned int reversed_num = 0;

    for (unsigned int i = 0; i < total_bits; i++) {
        reversed_num <<= 1;
        reversed_num |= (num & 1U);
        num >>= 1;
    }
    
    return reversed_num;
}

void print_binary_32bit(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int original = 141; 
    
    printf("Original (Dec): %u\n", original);
    printf("Original (Bin): "); print_binary_32bit(original);
    printf("-----------------------------------------------------\n");

    unsigned int reversed = reverse_bits_loop(original);

    printf("Reversed (Dec): %u\n", reversed);
    printf("Reversed (Bin): "); print_binary_32bit(reversed);

    return 0;
}