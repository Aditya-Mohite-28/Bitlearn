#include <stdio.h>

int main() {
    unsigned char num;

    printf("Input: ");
    scanf("%hhu", &num);
    unsigned char flipped = ~num;
    printf("Flipped bits: %08b\n", num);
    
    printf("Flipped bits: %08b\n", flipped);

    return 0;
}