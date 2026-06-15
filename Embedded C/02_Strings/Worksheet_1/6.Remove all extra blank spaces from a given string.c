#include <stdio.h>
#include <string.h>

void rmExtraSpaces(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    int i;
    
    while (start < length && str[start] == ' ') {
        start++;
    }

    while (end >= start && str[end] == ' ') {
        end--;
    }

    for (i = start; i <= end; i++) {
        str[i - start] = str[i];
    }

    str[i - start] = '\0';
}

int main() {
    char str[] = "     This is ChatGPT     ";

    rmExtraSpaces(str);

    printf("Output: \"%s\"\n", str);
    
    return 0;
}