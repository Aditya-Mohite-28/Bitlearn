#include <stdio.h>

int main() {
    char filename[100];
    int line_to_remove, current_line = 1;
    char buffer[1000];
    FILE *src, *temp;

    printf("File name: ");
    scanf("%99s", filename);
    printf("Line to remove: ");
    scanf("%d", &line_to_remove);

    src = fopen(filename, "r");
    temp = fopen("temp.txt", "w");

    while (fgets(buffer, sizeof(buffer), src) != NULL) {
        if (current_line != line_to_remove) {
            fprintf(temp, "%s", buffer);
        }
        current_line++;
    }

    fclose(src);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("File now contains all lines except line %d.\n", line_to_remove);
    return 0;
}