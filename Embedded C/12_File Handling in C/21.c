#include <stdio.h>

int main() {
    char file1_name[100], file2_name[100], new_file_name[100];
    char ch;
    FILE *f1, *f2, *f3;

    printf("File 1: ");
    scanf("%99s", file1_name);
    printf("File 2: ");
    scanf("%99s", file2_name);
    printf("New file: ");
    scanf("%99s", new_file_name);

    f1 = fopen(file1_name, "r");
    f2 = fopen(file2_name, "r");
    f3 = fopen(new_file_name, "w");

    while ((ch = fgetc(f1)) != EOF) fputc(ch, f3);
    while ((ch = fgetc(f2)) != EOF) fputc(ch, f3);

    fclose(f1);
    fclose(f2);
    fclose(f3);

    f3 = fopen(new_file_name, "r");
    printf("%s content:\n", new_file_name);
    while ((ch = fgetc(f3)) != EOF) putchar(ch);
    fclose(f3);

    return 0;
}