#include <stdio.h>

// Macro definitions
#define SET_BIT(num, n)    ((num) |= (1U << (n)))
#define CLEAR_BIT(num, n)  ((num) &= ~(1U << (n)))
#define TOGGLE_BIT(num, n) ((num) ^= (1U << (n)))

// Helper function to cleanly display 8-bit binary numbers
void print_binary_8bit(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned char data = 0b00000000;
    int target_bit = 5;

    printf("--- Initial State ---\n");
    printf("Value:  "); print_binary_8bit(data);
    printf("\n");

    // 1. SET the bit
    SET_BIT(data, target_bit);
    printf("--- After SET_BIT(data, %d) ---\n", target_bit);
    printf("Value:  "); print_binary_8bit(data); 
    printf("\n");

    TOGGLE_BIT(data, target_bit);
    printf("--- After TOGGLE_BIT(data, %d) (First time) ---\n", target_bit);
    printf("Value:  "); print_binary_8bit(data); 
    printf("\n");

    TOGGLE_BIT(data, target_bit);
    printf("--- After TOGGLE_BIT(data, %d) (Second time) ---\n", target_bit);
    printf("Value:  "); print_binary_8bit(data);
    printf("\n");

    CLEAR_BIT(data, target_bit);
    printf("--- After CLEAR_BIT(data, %d) ---\n", target_bit);
    printf("Value:  "); print_binary_8bit(data);

    return 0;
}