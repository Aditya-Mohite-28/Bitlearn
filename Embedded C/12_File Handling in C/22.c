#include <stdio.h>

int main() {
    char file1_name[100], file2_name[100], new_file_name[100];
    char line1[500], line2[500];
    FILE *f1, *f2, *f3;
    int active1 = 1, active2 = 1;

    printf("File 1: ");
    scanf("%99s", file1_name);
    printf("File 2: ");
    scanf("%99s", file2_name);
    printf("New file: ");
    scanf("%99s", new_file_name);

    f1 = fopen(file1_name, "r");
    f2 = fopen(file2_name, "r");
    f3 = fopen(new_file_name, "w");

    while (active1 || active2) {
        if (active1 && fgets(line1, sizeof(line1), f1) != NULL) {
            fprintf(f3, "%s", line1);
        } else {
            active1 = 0;
        }
        if (active2 && fgets(line2, sizeof(line2), f2) != NULL) {
            fprintf(f3, "%s", line2);
        } else {
            active2 = 0;
        }
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    f3 = fopen(new_file_name, "r");
    printf("%s: ", new_file_name);
    while (fgets(line1, sizeof(line1), f3) != NULL) {
        printf("%s", line1);
    }
    fclose(f3);

    return 0;
}