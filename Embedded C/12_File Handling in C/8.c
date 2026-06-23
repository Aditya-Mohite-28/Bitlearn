#include <stdio.h>

int main() {
    char filename[100];
    int value;
    FILE *file;

    printf("File name: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fscanf(file, "%d", &value);
    fclose(file);

    printf("Read variable: %d; ", value);

    value = 100;
    file = fopen(filename, "w");
    fprintf(file, "%d", value);
    fclose(file);

    printf("After writing value 100, file now contains: %d\n", value);
    return 0;
}