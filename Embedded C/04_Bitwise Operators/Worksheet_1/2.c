#include <stdio.h>

// Macros for generic bit manipulation (pos is 0-indexed)
#define SET_BIT(num, pos)      ((num) |= (1U << (pos)))
#define CLEAR_BIT(num, pos)    ((num) &= ~(1U << (pos)))
#define TOGGLE_BIT(num, pos)   ((num) ^= (1U << (pos)))

// Specific macros for LSB (Position 0)
#define SET_LSB(num)           SET_BIT(num, 0)
#define CLEAR_LSB(num)         CLEAR_BIT(num, 0)
#define TOGGLE_LSB(num)        TOGGLE_BIT(num, 0)

// Specific macros for MSB (Position depends on data type size)
#define MSB_POS(num)           ((sizeof(num) * 8) - 1)
#define SET_MSB(num)           SET_BIT(num, MSB_POS(num))
#define CLEAR_MSB(num)         CLEAR_BIT(num, MSB_POS(num))
#define TOGGLE_MSB(num)        TOGGLE_BIT(num, MSB_POS(num))

void print_binary(unsigned int num) {
    int total_bits = sizeof(num) * 8;
    for (int i = total_bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int n = 0x7FFFFFFF;
    int specific_pos = 4;

    printf("Original Number:\n");
    printf("Decimal: %u\n", n);
    printf("Binary:  "); print_binary(n);
    printf("-----------------------------------------------------------------\n");

    unsigned int lsb_test = n;
    SET_LSB(lsb_test);
    printf("Set LSB:     "); print_binary(lsb_test);

    CLEAR_LSB(lsb_test);
    printf("Clear LSB:   "); print_binary(lsb_test);

    TOGGLE_LSB(lsb_test);
    printf("Toggle LSB:  "); print_binary(lsb_test);
    printf("-----------------------------------------------------------------\n");

    unsigned int msb_test = n;
    SET_MSB(msb_test);
    printf("Set MSB:     "); print_binary(msb_test);

    CLEAR_MSB(msb_test);
    printf("Clear MSB:   "); print_binary(msb_test);

    TOGGLE_MSB(msb_test);
    printf("Toggle MSB:  "); print_binary(msb_test);
    printf("-----------------------------------------------------------------\n");

    unsigned int spec_test = n;
    printf("Targeting specific bit at position: %d\n", specific_pos);
    
    SET_BIT(spec_test, specific_pos);
    printf("Set Bit %d:  ", specific_pos); print_binary(spec_test);

    CLEAR_BIT(spec_test, specific_pos);
    printf("Clear Bit %d:", specific_pos); print_binary(spec_test);

    TOGGLE_BIT(spec_test, specific_pos);
    printf("Tog Bit %d:  ", specific_pos); print_binary(spec_test);

    return 0;
}