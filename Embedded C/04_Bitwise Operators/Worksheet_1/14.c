#include <stdio.h>

#define EVEN_MASK 0x55555555U
#define ODD_MASK  0xAAAAAAAAU

unsigned int reverse_all_bits(unsigned int num) {
    num = ((num & 0x55555555U) << 1)  | ((num & 0xAAAAAAAAU) >> 1);
    num = ((num & 0x33333333U) << 2)  | ((num & 0xCCCCCCCCU) >> 2);
    num = ((num & 0x0F0F0F0FU) << 4)  | ((num & 0xF0F0F0F0U) >> 4);
    num = ((num & 0x00FF00FFU) << 8)  | ((num & 0xFF00FF00U) >> 8);
    return (num << 16) | (num >> 16);
}

unsigned int reverse_even_bits(unsigned int num) {
    unsigned int even_bits = num & EVEN_MASK;
    
    unsigned int reversed_even = reverse_all_bits(even_bits);
    
    reversed_even = (reversed_even >> 1) & EVEN_MASK;
    
    return reversed_even | (num & ODD_MASK);
}

unsigned int reverse_odd_bits(unsigned int num) {
    unsigned int odd_bits = num & ODD_MASK;
    
    unsigned int reversed_odd = reverse_all_bits(odd_bits);
    
    reversed_odd = (reversed_odd << 1) & ODD_MASK;
    
    return reversed_odd | (num & EVEN_MASK);
}

void print_binary_32bit(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0 && i != 0) printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int original = 211; 

    printf("Original Number:\n");
    printf("Decimal: %u\n", original);
    printf("Binary:  "); print_binary_32bit(original);
    printf("-----------------------------------------------------------------\n");

    unsigned int rev_even = reverse_even_bits(original);
    printf("Reversed EVEN bits:\n");
    printf("Binary:  "); print_binary_32bit(rev_even);
    printf("\n");

    unsigned int rev_odd = reverse_odd_bits(original);
    printf("Reversed ODD bits:\n");
    printf("Binary:  "); print_binary_32bit(rev_odd);

    return 0;
}