#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;

    printf("Array elements: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}