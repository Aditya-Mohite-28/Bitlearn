#include <stdio.h>

void getMinMax(int arr[], int size, int *min, int *max) {
    int i;
    if (size % 2 == 0) {
        if (arr[0] > arr[1]) {
            *max = arr[0];
            *min = arr[1];
        } else {
            *min = arr[0];
            *max = arr[1];
        }
        i = 2;
    } 
    else {
        *min = arr[0];
        *max = arr[0];
        i = 1;
    }

    while (i < size - 1) {
        if (arr[i] > arr[i + 1]) {
            if (arr[i] > *max) {
                *max = arr[i];
            }
            if (arr[i + 1] < *min) {
                *min = arr[i + 1];
            }
        } else {
            if (arr[i + 1] > *max) {
                *max = arr[i + 1];
            }
            if (arr[i] < *min) {
                *min = arr[i];
            }
        }
        i += 2; 
    }
}

int main() {
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    getMinMax(arr, size, &min, &max);

    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d\n", max);

    return 0;
}