#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char filename[100];
    char lines[100][256];
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
        lines[count][strcspn(lines[count], "\n")] = '\0';
        count++;
    }
    fclose(file);

    for (int i = 0; i < count; i++) {
        printf("%s%s", lines[i], (i == count - 1) ? "" : "\n");
    }
    printf("\n (as array elements)\n");

    return 0;
}