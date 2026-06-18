#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter initial array size: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) return 1;

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos, value;
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    if (pos >= 0 && pos <= n) {
        n++;
        int *temp = (int *)realloc(arr, n * sizeof(int));
        if (temp == NULL) {
            free(arr);
            return 1;
        }
        arr = temp;

        for (int i = n - 1; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;

        printf("Final array contents:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid index.\n");
    }

    free(arr);
    return 0;
}