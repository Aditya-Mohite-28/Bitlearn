#include <stdio.h>
#include <stdlib.h>

int main() {
    char src_name[100], dest_name[100];
    char ch;
    FILE *src, *dest;

    printf("Source file: ");
    scanf("%99s", src_name);
    printf("Destination file: ");
    scanf("%99s", dest_name);

    src = fopen(src_name, "r");
    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    dest = fopen(dest_name, "w");
    if (dest == NULL) {
        fclose(src);
        printf("Error opening destination file!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File '%s' copied to '%s'.\n", src_name, dest_name);
    return 0;
}