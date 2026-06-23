#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char filename[100];
    char lines[500][256];
    int count = 0;
    FILE *file;

    printf("File name: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(lines[count], sizeof(lines[count]), file) != NULL) {
        count++;
    }
    fclose(file);

    for (int i = count - 1; i >= 0; i--) {
        printf("%s", lines[i]);
    }

    return 0;
}