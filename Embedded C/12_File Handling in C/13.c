#include <stdio.h>
#include <string.h>

int main() {
    char filename[100], new_text[1000], buffer[1000];
    int target_line, current_line = 1;
    FILE *src, *temp;

    printf("File name: ");
    scanf("%99s", filename);
    printf("Line number: ");
    scanf("%d", &target_line);
    getchar();
    printf("New text: ");
    fgets(new_text, sizeof(new_text), stdin);

    src = fopen(filename, "r");
    temp = fopen("temp.txt", "w");

    while (fgets(buffer, sizeof(buffer), src) != NULL) {
        if (current_line == target_line) {
            fprintf(temp, "%s", new_text);
        } else {
            fprintf(temp, "%s", buffer);
        }
        current_line++;
    }

    fclose(src);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("File now contains new text at line %d.\n", target_line);
    return 0;
}