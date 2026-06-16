#include <stdio.h>

int count_bits_to_flip(unsigned int a, unsigned int b) {
    unsigned int xor_result = a ^ b;
    int count = 0;

    while (xor_result > 0) {
        xor_result &= (xor_result - 1U);
        count++;
    }

    return count;
}

void print_binary_8bit(unsigned int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    unsigned int a = 29; 
    unsigned int b = 15; 

    printf("A (Decimal %d): ", a);
    print_binary_8bit(a);
    printf("\n");
    
    printf("B (Decimal %d): ", b); 
    print_binary_8bit(b); 
    printf("\n");
    
    printf("---------------------------\n");

    int flips_needed = count_bits_to_flip(a, b);
    printf("Number of bits to flip: %d\n", flips_needed);

    return 0;
}