#include <stdio.h>

void reversePrint(char *str) {
    if (*str == '\0') {
        return;
    }

    reversePrint(str + 1);

    printf("%c", *str);
}

int main() {
    char str[] = "hello";

    reversePrint(str);

    return 0;
}