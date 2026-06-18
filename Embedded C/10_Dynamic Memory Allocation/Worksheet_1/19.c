#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    printf("Enter count of integer pointers: ");
    if (scanf("%d", &count) != 1 || count <= 0) return 1;

    int **ptrs_arr = (int **)malloc(count * sizeof(int *));
    if (ptrs_arr == NULL) return 1;

    for (int i = 0; i < count; i++) {
        ptrs_arr[i] = (int *)malloc(sizeof(int));
        if (ptrs_arr[i] == NULL) return 1;
        *ptrs_arr[i] = (i + 1) * 11;
    }

    printf("Values addressed via array of pointers:\n");
    for (int i = 0; i < count; i++) {
        printf("Pointer %d targets value: %d\n", i, *ptrs_arr[i]);
    }

    for (int i = 0; i < count; i++) {
        free(ptrs_arr[i]);
    }
    free(ptrs_arr);

    return 0;
}