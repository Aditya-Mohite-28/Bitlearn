#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 2;
    int length = 0;
    char *buffer = (char *)malloc(capacity * sizeof(char));
    if (buffer == NULL) return 1;

    printf("Start typing your string (Press Enter to finish):\n");
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (length + 1 >= capacity) {
            capacity *= 2;
            char *temp = (char *)realloc(buffer, capacity * sizeof(char));
            if (temp == NULL) {
                free(buffer);
                return 1;
            }
            buffer = temp;
        }
        buffer[length++] = (char)ch;
    }
    buffer[length] = '\0';

    printf("Final dynamic string: %s\n", buffer);
    free(buffer);
    return 0;
}