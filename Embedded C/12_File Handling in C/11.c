#include <stdio.h>

int main() {
    char filename[100];
    char line[1000];
    int lines = 0;
    FILE *file;

    printf("File name: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
        lines++;
    }
    fclose(file);

    printf("\nTotal lines: %d\n", lines);
    return 0;
}