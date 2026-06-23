#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    char ch;
    FILE *src, *temp;

    printf("File name: ");
    scanf("%99s", filename);

    src = fopen(filename, "r");
    temp = fopen("temp.txt", "w");

    while ((ch = fgetc(src)) != EOF) {
        fputc(tolower(ch), temp);
    }

    fclose(src);
    fclose(temp);
    remove(filename);
    rename("temp.txt", filename);

    src = fopen(filename, "r");
    while ((ch = fgetc(src)) != EOF) {
        putchar(ch);
    }
    fclose(src);
    printf("\n");

    return 0;
}