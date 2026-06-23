#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    int new_lines;
    char buffer[1000];
    FILE *file;

    printf("File name: ");
    scanf("%99s", filename);
    printf("Number of new lines: ");
    scanf("%d", &new_lines);
    getchar();

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("New lines:\n");
    for (int i = 0; i < new_lines; i++) {
        fgets(buffer, sizeof(buffer), stdin);
        fprintf(file, "%s", buffer);
    }
    fclose(file);

    file = fopen(filename, "r");
    printf("File now contains: \n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);

    return 0;
}