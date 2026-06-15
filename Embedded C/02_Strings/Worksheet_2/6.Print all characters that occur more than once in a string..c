#include <stdio.h>
#include <string.h>

void printDuplicates(char str[]) {
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] > 1) {
            printf("%c ", str[i]);
            freq[str[i]] = 0; 
        }
    }
}

int main() {
    char str[] = "programming";

    printDuplicates(str);

    return 0;
}