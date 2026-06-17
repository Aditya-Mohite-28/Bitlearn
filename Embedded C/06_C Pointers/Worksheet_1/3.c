#include <stdio.h>

int main() {
    int a = 5;
    int *ptr = &a;
    
    *ptr = 20;
    
    printf("Value of a: %d\nValue of *ptr: %d", a, *ptr);

    return 0;
}