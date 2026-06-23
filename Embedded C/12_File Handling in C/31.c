#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    FILE *file;

    if (argc < 2) {
        printf("Please provide number arguments.\n");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    file = fopen("sum.txt", "w");
    fprintf(file, "%d", sum);
    fclose(file);

    printf("sum.txt contains: %d\n", sum);
    return 0;
}