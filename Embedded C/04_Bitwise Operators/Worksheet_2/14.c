#include <stdio.h>

void print_binary(unsigned int num) {
    int total_bits = sizeof(num) * 8;
    for (int i = total_bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int num;

    printf("Input: ");
    scanf("%u", &num);

    printf("Binary representation: ");
    print_binary(num);
    printf("\n");

    return 0;
}