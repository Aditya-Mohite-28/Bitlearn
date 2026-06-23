#include <stdio.h>
#include <string.h>

int main() {
    char filename[100], buffer[1000];
    int blank_lines = 0;
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
        int is_blank = 1;
        for (int i = 0; i < len; i++) {
            if (buffer[i] != '\n' && buffer[i] != '\r' && buffer[i] != ' ' && buffer[i] != '\t') {
                is_blank = 0;
                break;
            }
        }
        if (is_blank) {
            blank_lines++;
        }
    }
    fclose(file);

    printf("Blank lines: %d\n", blank_lines);
    return 0;
}