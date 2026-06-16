#include <stdio.h>
#include <stdbool.h>

bool is_power_of_two(unsigned int num) {
    return (num > 0) && ((num & (num - 1U)) == 0);
}

void print_binary_8bit(unsigned int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    
    int input = 5;
    
    printf("%s", is_power_of_two(input) ? "YES" : "NO");

    return 0;
}