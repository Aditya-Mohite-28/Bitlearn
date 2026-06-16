#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (*str == ' ' || *str == '\n' || *str == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[] = "Hello world  ";
    printf("%d\n", countWords(str));
    return 0;
}