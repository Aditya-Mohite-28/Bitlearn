#include <stdio.h>

int findFirstPosition(char str[], char target) {
    int position = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    char str[] = "elephant";
    
    int position = findFirstPosition(str, 'e');
    if (position != -1) {
        printf("%d", position);
    } else printf("Not Found");

    return 0;
}