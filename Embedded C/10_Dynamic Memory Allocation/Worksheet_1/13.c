#include <stdio.h>
#include <stdlib.h>

int main() {
    int *leak_ptr = (int *)malloc(5 * sizeof(int));
    if (leak_ptr == NULL) return 1;

    for (int i = 0; i < 5; i++) {
        leak_ptr[i] = i * 10;
    }
    printf("Allocated block containing: %d\n", leak_ptr[0]);

    printf("Skipping free() intentionally to log memory leak simulation.\n");

    free(leak_ptr);
    printf("Added free() here to fix the leak.\n");

    return 0;
}