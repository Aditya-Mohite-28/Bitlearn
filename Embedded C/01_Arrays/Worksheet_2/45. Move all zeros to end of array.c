#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rearrangeZerosToEnd(int arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        if(arr[i] != 0) {
            if( i > j ) {
                swap(&arr[j], &arr[i]);
            }
            j++;
        }
    }
}

int main() {
    int arr[] = {1, 0, 2, 0, 0, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    rearrangeZerosToEnd(arr, size);

    printf("Rearranged array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}