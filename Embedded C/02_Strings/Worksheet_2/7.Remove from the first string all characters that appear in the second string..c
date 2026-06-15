#include <stdio.h>
#include <string.h>

void removeChars(char str1[], char str2[]) {
    int freq[256] = {0};

    for (int i = 0; str2[i] != '\0'; i++) {
        freq[str2[i]] = 1;
    }

    int write_index = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        if (freq[str1[i]] == 0) {
            str1[write_index] = str1[i];
            write_index++;
        }
    }
    
    str1[write_index] = '\0';
}

int main() {
    char str1[] = "hello world";

    removeChars(str1, "low");

    printf("%s\n", str1);

    return 0;
}