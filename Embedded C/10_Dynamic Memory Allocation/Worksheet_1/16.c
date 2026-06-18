#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t large_size = (size_t)1024 * 1024 * 1024; 
    printf("Attempting to allocate 1 GB of memory...\n");

    void *ptr = malloc(large_size);

    if (ptr == NULL) {
        printf("Allocation failed: Gracefully handled out-of-memory scenario.\n");
    } else {
        printf("Success: 1 GB of memory allocated successfully.\n");
        free(ptr);
    }

    return 0;
}