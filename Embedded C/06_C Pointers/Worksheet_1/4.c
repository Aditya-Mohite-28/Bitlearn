#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    *ptr1 = *ptr1 ^ *ptr2;
    *ptr2 = *ptr1 ^ *ptr2;
    *ptr1 = *ptr1 ^ *ptr2;
}

int main() {
    int a = 5;
    int b = 10;
    printf("Before Swap\nValue of a: %d\nValue of b: %d", a, b);
    swap(&a, &b);
    printf("\nAfter Swap\nValue of a: %d\nValue of b: %d", a, b);

    return 0;
}