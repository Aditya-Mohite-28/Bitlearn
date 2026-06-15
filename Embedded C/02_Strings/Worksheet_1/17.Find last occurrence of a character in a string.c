#include <stdio.h>
#include <string.h>

int findLastPosition(char str[], char target) {
    int length = strlen(str);
    int position = -1;
    
    for (int i = length - 1; i >= 0; i--) {
        if (str[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    char str[] = "ababcbac";
    int position = findLastPosition(str, 'b');
    
    if (position != -1) {
        printf("Position: %d\n", position);
    } else {
        printf("Character not found in the string.\n");
    }

    return 0;
}