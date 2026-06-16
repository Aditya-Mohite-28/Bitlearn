#include <stdio.h>

void removeBAndAC(char *str) {
    int n = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'b') continue;
        if (str[i] == 'c' && n > 0 && str[n - 1] == 'a') {
            n--;
            continue;
        }
        str[n++] = str[i];
    }
    str[n] = '\0';
}

int main() {
    char str[] = "abacb";
    removeBAndAC(str);
    printf("%s", str);
    return 0;
}