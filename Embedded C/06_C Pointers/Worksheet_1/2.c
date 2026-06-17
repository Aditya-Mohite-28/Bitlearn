#include <stdio.h>

int main() {
    int a = 5;
    float b = 5.5;
    char z = 'a';
    
    printf("Address of int a: %p\nAddress of float b: %p\nAddress of char z: %p", &a, &b, &z);

    return 0;
}