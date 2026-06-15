#include <stdio.h>
#include <string.h>

void swapStrings(char str1[], char str2[]) {
    strcat(str1, str2);
    int len1 = strlen(str1) - strlen(str2);
    int len2 = strlen(str2);

    strncpy(str2, str1, len1);
    str2[len1] = '\0';

    strcpy(str1, str1 + len1);
}

int main() {
    char str1[50] = "hello";
    char str2[50] = "world";

    printf("Before Swap: str1 = \"%s\", str2 = \"%s\"\n", str1, str2);

    swapStrings(str1, str2);

    printf("After Swap: str1 = \"%s\", str2 = \"%s\"\n", str1, str2);

    return 0;
}