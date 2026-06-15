#include <stdio.h>
#include <string.h>

void removeLastOccurrence(char str[], char target) {
    int length = strlen(str);
    
    for (int i = length - 1; i >= 0; i--) {
        if (str[i] == target) {
            for (int j = i; j < length; j++) {
                str[j] = str[j + 1];
            }
            return; 
        }
    }
}

int main() {
    char str[] = "mississippi";
    char target = 's';

    removeLastOccurrence(str, target);

    printf("%s\n", str);

    return 0;
}