#include <stdio.h>
#include <string.h>

int main() {
    char filename[100], buffer[1000];
    int count = 0;
    FILE *file;

    printf("File: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        int len = strlen(buffer);
        while (len > 0 && (buffer[len - 1] == '\n' || buffer[len - 1] == '\r')) {
            len--;
        }
        if (len > 0 && buffer[len - 1] == ';') {
            count++;
        }
    }
    fclose(file);

    printf("Lines ending with semicolon: %d\n", count);
    return 0;
}