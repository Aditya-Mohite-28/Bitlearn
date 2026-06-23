#include <stdio.h>

int main() {
    char filename[100];
    char ch;
    FILE *src, *temp;

    printf("File name: ");
    scanf("%99s", filename);

    src = fopen(filename, "r");
    temp = fopen("temp.txt", "w");

    while ((ch = fgetc(src)) != EOF) {
        if (ch != '\n' && ch != '\r') ch = ch - 4; 
        fputc(ch, temp);
    }

    fclose(src);
    fclose(temp);
    remove(filename);
    rename("temp.txt", filename);

    src = fopen(filename, "r");
    printf("File now contains: ");
    while ((ch = fgetc(src)) != EOF) {
        putchar(ch);
    }
    fclose(src);
    printf("\n");

    return 0;
}