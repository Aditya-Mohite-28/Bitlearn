#include <stdio.h>

#define SET_LS_BYTE(num)      ((num) |= 0x000000FFU)
#define SET_MS_BYTE(num)      ((num) |= 0xFF000000U)
#define SET_LS_NIBBLE(num)    ((num) |= 0x0000000FU)
#define SET_MS_NIBBLE(num)    ((num) |= 0xF0000000U)

#define GET_MASK(n)           (((n) >= 32) ? 0xFFFFFFFFU : ((1U << (n)) - 1U))

#define SET_N_BITS(num, n)    ((num) |= GET_MASK(n))
#define CLEAR_N_BITS(num, n)  ((num) &= ~GET_MASK(n))
#define TOGGLE_N_BITS(num, n) ((num) ^= GET_MASK(n))

void print_binary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int n = 0x00000000;
    int user_bits;

    printf("Original Number (All Zeros):\n");
    print_binary(n);
    printf("-----------------------------------------------------------------\n");

    unsigned int byte_test = n;
    SET_LS_BYTE(byte_test);
    printf("Set LS Byte:      "); print_binary(byte_test);

    byte_test = n;
    SET_MS_BYTE(byte_test);
    printf("Set MS Byte:      "); print_binary(byte_test);
    printf("-----------------------------------------------------------------\n");

    unsigned int nibble_test = n;
    SET_LS_NIBBLE(nibble_test);
    printf("Set LS Nibble:    "); print_binary(nibble_test);

    nibble_test = n;
    SET_MS_NIBBLE(nibble_test);
    printf("Set MS Nibble:    "); print_binary(nibble_test);
    printf("-----------------------------------------------------------------\n");

    printf("Enter the number of bits (n) to modify (1-32): ");
    if (scanf("%d", &user_bits) != 1 || user_bits < 0 || user_bits > 32) {
        printf("Invalid input. Defaulting to 5 bits.\n");
        user_bits = 5;
    }
    printf("-----------------------------------------------------------------\n");

    unsigned int dynamic_test = 0x55555555;
    printf("Base Number for 'n' bit tests:\n");
    print_binary(dynamic_test);
    printf("\n");

    unsigned int temp = dynamic_test;
    SET_N_BITS(temp, user_bits);
    printf("Set lowest %d bits:    ", user_bits); 
    print_binary(temp);

    temp = dynamic_test;
    CLEAR_N_BITS(temp, user_bits);
    printf("Clear lowest %d bits:  ", user_bits); 
    print_binary(temp);

    temp = dynamic_test;
    TOGGLE_N_BITS(temp, user_bits);
    printf("Toggle lowest %d bits: ", user_bits); 
    print_binary(temp);

    return 0;
}