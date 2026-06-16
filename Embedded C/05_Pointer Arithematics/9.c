#include <stdio.h>

void reverse_array(int *arr, int size) {
    int *start = arr;
    int *end = arr + (size - 1);
    int temp;

    
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    reverse_array(arr, size);

    printf("Reversed array: ");
    ptr = arr;
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}