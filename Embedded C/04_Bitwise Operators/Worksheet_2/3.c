#include <stdio.h>

#define GET_BIT(num, n) (((num) >> (n)) & 1U)

int main() {
    unsigned int num;
    int bit_pos = 0;

    printf("Input number: ");
    scanf("%u", &num);
    
    printf("%d -> %b\n", num, num);
    unsigned int bit_value = GET_BIT(num, bit_pos);

    printf("Bit %d of %u is %u\n", bit_pos, num, bit_value);

    return 0;
}