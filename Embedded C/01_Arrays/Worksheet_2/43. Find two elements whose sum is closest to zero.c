#include <stdio.h>

void findPairClosestToZero(int arr[], int size) {
    int min_element1 = arr[0];
    int min_element2 = arr[1];
    int min_sum = arr[0] + arr[1];
    
    int abs_min_sum = (min_sum < 0) ? -min_sum : min_sum;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int sum = arr[i] + arr[j];
            int abs_current_sum = (sum < 0) ? -sum : sum;

            if (abs_current_sum < abs_min_sum) {
                abs_min_sum = abs_current_sum;
                min_element1 = arr[i];
                min_element2 = arr[j];
            }
        }
    }

    printf("Pair whose sum is closest to zero: %d %d\n", min_element1, min_element2);
}

int main() {
    int arr[] = {1, 60, -10, 70, -80, 85};
    int size = sizeof(arr) / sizeof(arr[0]);

    findPairClosestToZero(arr, size);

    return 0;
}