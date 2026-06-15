#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rearrangeAlternate(int arr[], int size) {
    int i = -1;
    for (int j = 0; j < size; j++) {
        if (arr[j] < 0) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    int pos = i + 1;
    int neg = 0;

    while (neg < pos && pos < size && arr[neg] < 0) {
        swap(&arr[neg], &arr[pos]);
        neg += 2; 
        pos++;
    }
}

int main() {
    int arr[] = {1, 2, 3, -4, -1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    rearrangeAlternate(arr, size);

    printf("Rearranged array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}