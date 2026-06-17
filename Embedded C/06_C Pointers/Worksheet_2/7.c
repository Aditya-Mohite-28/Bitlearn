#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 50

int main() {
    char *buffer = (char *)malloc(BUFFER_SIZE * sizeof(char));
    if (buffer == NULL) return 1;

    printf("Enter text (max %d chars): ", BUFFER_SIZE - 1);
    
    if (fgets(buffer, BUFFER_SIZE, stdin) != NULL) {
        char *ptr = buffer;
        while (*ptr != '\0') {
            if (*ptr == '\n') {
                *ptr = '\0';
                break;
            }
            ptr++;
        }

        printf("Safely read string: \"%s\"\n", buffer);
    }

    free(buffer);
    buffer = NULL;
    return 0;
}