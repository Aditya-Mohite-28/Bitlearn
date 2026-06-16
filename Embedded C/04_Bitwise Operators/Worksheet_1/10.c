#include <stdio.h>
#include <stdbool.h>

int is_even(int num) {
    return (num & 1) == 0;
}

void print_binary_8bit(unsigned int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    
    int input = 1;
    
    printf("%s", is_even(input) ? "YES" : "NO");

    return 0;
}