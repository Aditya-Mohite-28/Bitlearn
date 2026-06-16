#include <stdio.h>

int count_set_bits_shift(unsigned int num) {
    int count = 0;
    while (num > 0) {
        count += (num & 1U);
        num >>= 1;
    }
    return count;
}

void print_binary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int user_num;

    printf("Enter an unsigned integer: ");
    if (scanf("%u", &user_num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("\nBinary Representation:\n");
    print_binary(user_num);
    printf("-----------------------------------------\n");

    int count = count_set_bits_shift(user_num);

    printf("Count of SET bits:     %d\n", count);

    return 0;
}