#include <stdio.h>

#define SHIFT_RIGHT(num) ((num) >> 1 )
#define CHECK_LSB(num) ((num) & 1U )

int main() {
    unsigned int num;
    int bit_pos = 0;

    printf("Input number: ");
    scanf("%u", &num);
    printf("%d -> %b\n", num, num);
    
    while (CHECK_LSB(num) == 0) {
        num = SHIFT_RIGHT(num);
        bit_pos++;
    }
    

    printf("The highest SET bit is at %dth Pos\n", bit_pos);

    return 0;
}