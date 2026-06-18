#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Initial values after calloc:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Updated values:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }

    free(arr);
    return 0;
}