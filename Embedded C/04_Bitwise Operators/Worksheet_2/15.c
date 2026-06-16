#include <stdio.h>

void swap(unsigned int *num1, unsigned int *num2) {
    *num1 = *num1 ^ *num2;
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;
}

int main() {
    unsigned int num1, num2;

    printf("Input num1: ");
    scanf("%u", &num1);

    printf("Input num2: ");
    scanf("%u", &num2);
    
    swap(&num1,&num2);
    
    printf("Num1: %d\nNum2: %d", num1, num2);

    return 0;
}