#include <stdio.h>

#define SHIFT_RIGHT(num) ((num) >> 1 )
#define CHECK_LSB(num) ((num) & 1U )

int main() {
    unsigned int num;
    int ones_count = 0;
    int zeros_count = 0;

    printf("Input number: ");
    scanf("%u", &num);
    printf("%d -> %b\n", num, num);
    
    while (num != 0) {
        if(CHECK_LSB(num) == 0) zeros_count++;
        else if(CHECK_LSB(num) == 1) ones_count++;
        num = SHIFT_RIGHT(num);
    }
    

    printf("ONES BITS: %d\nZEROS BITS: %d", ones_count, zeros_count);

    return 0;
}