#include <stdio.h>
#include <string.h>

void reverseSection(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char str[]) {
    int length = strlen(str);

    reverseSection(str, 0, length - 1);

    int word_start = 0;
    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseSection(str, word_start, i - 1);
            word_start = i + 1;
        }
    }
}

int main() {
    char str[] = "hello world from C";

    reverseWords(str);

    printf("'%s'\n", str);

    return 0;
}