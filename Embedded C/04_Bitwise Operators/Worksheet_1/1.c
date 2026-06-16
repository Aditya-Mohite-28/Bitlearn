#include <stdio.h>

void print_binary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned char a = 0b00001100;
    unsigned char b = 0b00001010;
    unsigned char result;

    printf("Initial values:\n");
    printf("a: "); print_binary(a);
    printf("b: "); print_binary(b);
    printf("---------------------\n");

    result = a & b;
    printf("a & b:     "); print_binary(result); 

    result = a | b;
    printf("a | b:     "); print_binary(result);

    result = a ^ b;
    printf("a ^ b:     "); print_binary(result);

    result = a << 2;
    printf("a << 2:    "); print_binary(result);

    result = a >> 1;
    printf("a >> 1:    "); print_binary(result);
    
    printf("---------------------\n");
    return 0;
}