#include <stdio.h>

int main() {
    char filename[100];
    char ch;
    int lines = 0;
    FILE *file;

    printf("File name: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }
    fclose(file);

    printf("Total lines: %d\n", lines);
    return 0;
}