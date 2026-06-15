#include <stdio.h>

void toogleCase(char str[]) {

    for (int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
    }
}

int main() {
    char str[] = " C prograMMing is 7 FUn ";

    toogleCase(str);

    printf("%s\n", str);

    return 0;
}