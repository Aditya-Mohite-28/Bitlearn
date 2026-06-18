#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(2 * sizeof(int));
    if (arr == NULL) return 1;

    printf("Enter 2 integers:\n");
    for (int i = 0; i < 2; i++) {
        scanf("%d", &arr[i]);
    }

    int *temp = (int *)realloc(arr, 5 * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed.\n");
        free(arr);
        return 1;
    }
    arr = temp;

    printf("Enter 3 more integers:\n");
    for (int i = 2; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("All 5 elements in the resized array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}