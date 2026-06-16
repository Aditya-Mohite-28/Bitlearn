#include <stdio.h>

#define SHIFT_RIGHT(num) ((num) >> 1 )
#define CHECK_LSB(num) ((num) & 1U )

int main() {
    unsigned int num;

    printf("Input number: ");
    scanf("%u", &num);
    
    if(CHECK_LSB(num) == 1)
        printf("ODD");
    else    printf("EVEN");

    
    return 0;
}