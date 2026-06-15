#include <stdio.h>
#include <string.h>

void findMostFrequent(char str[]) {
    int freq[256] = {0};
    int max_count = 0;
    char max_char = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            continue;
        }
        
        unsigned char ch = str[i];
        freq[ch]++;
        
        if (freq[ch] > max_count) {
            max_count = freq[ch];
            max_char = str[i];
        }
    }

    if (max_count > 0) {
        printf("%c\n", max_char);
    } else {
        printf("No valid characters found.\n");
    }
}

int main() {
    char str[] = "sample string";

    findMostFrequent(str);

    return 0;
}