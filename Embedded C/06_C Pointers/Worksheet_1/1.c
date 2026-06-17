#include <stdio.h>

int main() {
    int a = 5;
    int *ptr = &a;
    
    printf("using variable: %d\nusing pointer: %d", a , *ptr);

    return 0;
}