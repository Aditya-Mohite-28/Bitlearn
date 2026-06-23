#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    char text[1000];
    FILE *file;

    printf("File name: ");
    scanf("%99s", filename);
    getchar(); 

    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "%s", text);
    fclose(file);

    printf("File '%s' created and saved.\n", filename);
    return 0;
}