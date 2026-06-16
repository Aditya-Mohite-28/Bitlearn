#include <stdio.h>
#include <string.h>

void reverseString(char *begin, char *end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin = *end;
        *end = temp;
        *begin++;
        *end--;
    }
}

void reverseWords(char *s) {
    char *word_begin = s;
    char *temp = s;

    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverseString(word_begin, temp - 1);
        } else if (*temp == ' ') {
            reverseString(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
    reverseString(s, temp - 1);
}

int main() {
    char str[] = "Hello world";
    reverseWords(str);
    printf("%s", str);
    return 0;
}