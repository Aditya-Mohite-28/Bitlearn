#include <stdio.h>

int main() {
    char filename[100];

    printf("File name: ");
    scanf("%99s", filename);

    if (remove(filename) == 0) {
        printf("File '%s' deleted.\n", filename);
    } else {
        printf("Error deleting file.\n");
    }

    return 0;
}