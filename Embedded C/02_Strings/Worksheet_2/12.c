#include <stdio.h>

void firstNonRepeating(char str[]) {
    int freq[256] = {0};
    
    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] == 1) {
            printf("'%c'\n", str[i]);
            return;
        }
    }
}

int main() {
    char str[] = "swiss";
    firstNonRepeating(str);
    return 0;
}