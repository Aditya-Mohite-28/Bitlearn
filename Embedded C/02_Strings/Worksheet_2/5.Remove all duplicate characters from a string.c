#include <stdio.h>

void removeDuplicates(char str[]) {
    int seen[256] = {0}; 
    int index = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char current_char = str[i];
        if (seen[current_char] == 0) {
            seen[current_char] = 1;
            str[index] = str[i]; 
            index++;
        }
    }

    str[index] = '\0';
}

int main() {
    char str[] = "programming";

    removeDuplicates(str);

    printf("%s\n", str);

    return 0;
}