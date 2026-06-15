#include <stdio.h>
#include <string.h>

void replaceChar(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a'){
            str[i] = 'o';
        }
    }
}

int main() {
    char str[] = "banana";

    replaceChar(str);

    printf("Output: \"%s\"\n", str);
    
    return 0;
}