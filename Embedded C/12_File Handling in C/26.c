#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;
    long int size;

    printf("File name: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    size = ftell(file);
    fclose(file);

    printf("Size: %ld bytes\n", size);
    return 0;
}