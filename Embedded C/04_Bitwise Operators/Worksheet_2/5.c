#include <stdio.h>

#define CLEAR_BIT(num, n) ((num) & ~(1U << (n)))

int main() {
    unsigned int num;
    int bit_pos = 0;

    printf("Input number: ");
    scanf("%u", &num);
    
    printf("%d -> %b\n", num, num);
    unsigned int bit_value = CLEAR_BIT(num, bit_pos);

    printf("Set %dth bit of %u is %b\n", bit_pos, num, bit_value);

    return 0;
}