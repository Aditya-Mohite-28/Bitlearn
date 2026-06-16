#include <stdio.h>

int stringToInt(char *str) {
    int res = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            res = res * 10 + str[i] - '0';
        }
    }
    return sign * res;
}

int main() {
    char str[] = "1234";
    printf("%d\n", stringToInt(str));
    return 0;
}