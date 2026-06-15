#include <stdio.h>

void findMaxFrequencyChar(char str[]) {
    int frequency[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        char current_char = str[i];
        frequency[current_char]++;
    }

    for (int i = 0; str[i] != '\0'; i++) { 
    if (frequency[(int)str[i]] == 1) {
        printf("'%c' ", str[i]);
    }
}
    printf("each appear once");
}

int main() {
    char str[] = "enginring";

    findMaxFrequencyChar(str);

    return 0;
}