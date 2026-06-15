#include <stdio.h>
#include <string.h>

void countFreq(char str[]) {
    int freq[256] = {0};
    int lenth = strlen(str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if(freq[str[i]] != 0) {
            printf("%c -> %d\n", str[i], freq[str[i]]);
            freq[str[i]] = 0;
        }
    }
}

int main() {
    char str[] = "banana";

    countFreq(str);
    
    return 0;
}