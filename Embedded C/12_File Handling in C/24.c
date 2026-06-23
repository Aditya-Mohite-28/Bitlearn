#include <stdio.h>

int main() {
    char file1_name[100], file2_name[100];
    char ch1, ch2;
    int identical = 1;
    FILE *f1, *f2;

    printf("File1: ");
    scanf("%99s", file1_name);
    printf("File2: ");
    scanf("%99s", file2_name);

    f1 = fopen(file1_name, "r");
    f2 = fopen(file2_name, "r");

    while (1) {
        ch1 = fgetc(f1);
        ch2 = fgetc(f2);

        if (ch1 != ch2) {
            identical = 0;
            break;
        }
        if (ch1 == EOF || ch2 == EOF) {
            break;
        }
    }

    fclose(f1);
    fclose(f2);

    if (identical) {
        printf("Files are identical\n");
    } else {
        printf("Files are different\n");
    }

    return 0;
}