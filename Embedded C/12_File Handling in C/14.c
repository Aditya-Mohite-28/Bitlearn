#include <stdio.h>
#include <string.h>

int main() {
    char filename[100], word[50], replace[50], buffer[1000];
    FILE *src, *temp;

    printf("File name: ");
    scanf("%99s", filename);
    printf("Word to replace: ");
    scanf("%49s", word);
    printf("Replacement: ");
    scanf("%49s", replace);

    src = fopen(filename, "r");
    temp = fopen("temp.txt", "w");

    while (fgets(buffer, sizeof(buffer), src) != NULL) {
        char *pos, *start = buffer;
        while ((pos = strstr(start, word)) != NULL) {
            while (start < pos) {
                fputc(*start, temp);
                start++;
            }
            fprintf(temp, "%s", replace);
            start += strlen(word);
        }
        fprintf(temp, "%s", start);
    }

    fclose(src);
    fclose(temp);
    remove(filename);
    rename("temp.txt", filename);

    src = fopen(filename, "r");
    printf("Content after: ");
    while (fgets(buffer, sizeof(buffer), src) != NULL) {
        printf("%s", buffer);
    }
    fclose(src);

    return 0;
}