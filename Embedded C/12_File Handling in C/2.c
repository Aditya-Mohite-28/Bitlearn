#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    char ch;
    FILE *file;

    printf("File name: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    fclose(file);
    return 0;
}