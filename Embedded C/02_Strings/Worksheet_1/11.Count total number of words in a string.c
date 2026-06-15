#include <stdio.h>

int countWords(char str[]) {
    int count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            in_word = 0;
        } 
        else if (in_word == 0) {
            in_word = 1;
            count++;
        }
    }

    return count;
}

int main() {
    char str[] = " C programming is fun ";

    int words = countWords(str);

    printf("%d\n", words);

    return 0;
}