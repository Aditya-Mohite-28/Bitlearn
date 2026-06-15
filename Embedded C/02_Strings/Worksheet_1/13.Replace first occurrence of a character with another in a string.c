#include <stdio.h>
#include <string.h>

void replaceFirstOccurrence(char str[], char target, char replace) {
    int length = strlen(str);
    
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == target) {
            str[i] = replace;
            return; 
        }
    }
}

int main() {
    char str[] = "Google";
    char target = 'o', replace = 'a';

    replaceFirstOccurrence(str, target, replace);

    printf("%s\n", str);

    return 0;
}