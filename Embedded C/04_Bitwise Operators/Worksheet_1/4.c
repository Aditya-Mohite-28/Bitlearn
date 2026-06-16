#include <stdio.h>

#define CHECK_BIT(num, pos)   (((num) >> (pos)) & 1U)

#define CHECK_LSB(num)         CHECK_BIT(num, 0)
#define MSB_POS(num)           ((sizeof(num) * 8) - 1)
#define CHECK_MSB(num)         CHECK_BIT(num, MSB_POS(num))

void print_binary(unsigned int num) {
    int total_bits = sizeof(num) * 8;
    for (int i = total_bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int n = 0x80000001; 
    int user_bit;

    printf("Target Number:\n");
    printf("Hex:    0x%X\n", n);
    printf("Binary: "); print_binary(n);
    printf("-----------------------------------------------------------------\n");

    if (CHECK_LSB(n)) {
        printf("LSB (Bit 0) is SET (1)\n");
    } else {
        printf("LSB (Bit 0) is NOT SET (0)\n");
    }

    if (CHECK_MSB(n)) {
        printf("MSB (Bit %d) is SET (1)\n", MSB_POS(n));
    } else {
        printf("MSB (Bit %d) is NOT SET (0)\n", MSB_POS(n));
    }
    
    printf("-----------------------------------------------------------------\n");

    printf("Enter the bit position to check (0-%d): ", MSB_POS(n));
    if (scanf("%d", &user_bit) != 1 || user_bit < 0 || user_bit > MSB_POS(n)) {
        printf("Invalid position. Defaulting to bit 4.\n");
        user_bit = 4;
    }

    if (CHECK_BIT(n, user_bit)) {
        printf("Bit at position %d is SET (1)\n", user_bit);
    } else {
        printf("Bit at position %d is NOT SET (0)\n", user_bit);
    }

    return 0;
}