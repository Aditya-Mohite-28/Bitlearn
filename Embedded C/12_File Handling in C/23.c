#include <stdio.h>

int main() {
    char file1_name[100], file2_name[100];
    char ch, buffer[1000];
    FILE *f1, *f2;

    printf("File1: ");
    scanf("%99s", file1_name);
    printf("File2: ");
    scanf("%99s", file2_name);

    f2 = fopen(file2_name, "r");
    f1 = fopen(file1_name, "a");

    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f1);
    }

    fclose(f1);
    fclose(f2);

    f1 = fopen(file1_name, "r");
    printf("%s now contains: ", file1_name);
    while (fgets(buffer, sizeof(buffer), f1) != NULL) {
        printf("%s", buffer);
    }
    fclose(f1);

    return 0;
}