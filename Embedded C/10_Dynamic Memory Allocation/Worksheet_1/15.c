#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size = 0;
    int choice, val;

    do {
        printf("\n--- Dynamic Array Menu ---\n");
        printf("1. Add Element\n");
        printf("2. Display Array\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter integer to add: ");
            scanf("%d", &val);
            size++;
            int *temp = (int *)realloc(arr, size * sizeof(int));
            if (temp == NULL) {
                printf("Allocation error.\n");
                free(arr);
                return 1;
            }
            arr = temp;
            arr[size - 1] = val;
            printf("Element added.\n");
        } else if (choice == 2) {
            printf("Array contents: ");
            for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    } while (choice != 3);

    free(arr);
    printf("Memory cleared. Exiting.\n");
    return 0;
}