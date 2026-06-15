#include <stdio.h>
#include <string.h>

void reverseSrint(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "OpenAI";
    int lenth = strlen(str);
    reverseSrint(str, 0, lenth - 1);

    printf("'%s'\n", str);

    return 0;
}