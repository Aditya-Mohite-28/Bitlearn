#include <stdio.h>

int multiply_by_nine(int num) {
    return (num << 3) + num;
}

int main() {
    int input;

    printf("Enter an integer to multiply by 9: ");
    scanf("%d", &input);

    int result = multiply_by_nine(input);

    printf("Bitwise shift result:      %d\n", result);

    return 0;
}