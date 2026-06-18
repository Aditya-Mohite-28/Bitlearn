#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Simulating allocation of varying sized blocks...\n");
    int *b1 = (int *)malloc(100 * sizeof(int));
    int *b2 = (int *)malloc(200 * sizeof(int));
    int *b3 = (int *)malloc(300 * sizeof(int));

    if (b1 == NULL || b2 == NULL || b3 == NULL) return 1;
    printf("Block addresses: b1=%p, b2=%p, b3=%p\n", (void*)b1, (void*)b2, (void*)b3);

    printf("Freeing middle block b2 to introduce structural fragment space...\n");
    free(b2);

    printf("Allocating a smaller block that takes up space within the void...\n");
    int *b4 = (int *)malloc(50 * sizeof(int));
    if (b4 == NULL) return 1;
    printf("New segment b4 address: %p\n", (void*)b4);

    free(b1);
    free(b3);
    free(b4);
    printf("All allocations successfully cleared.\n");

    return 0;
}