#include <stdio.h>

void findMaxFrequencyChar(char str[]) {
    int frequency[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        char current_char = str[i];
        frequency[current_char]++;
    }

    char max_char = str[0];
    int max_count = 0;

    for (int i = 0; i < 256; i++) {
        if (frequency[i] > max_count) {
            max_count = frequency[i];
            max_char = (char)i;
        }
    }

    printf("'%c' appears %d times\n", max_char, max_count);
}

int main() {
    char str[] = "engineering";

    findMaxFrequencyChar(str);

    return 0;
}