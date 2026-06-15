#include <stdio.h>

int findMaxSumOfKConsecutive(int arr[], int size, int k) {
    int consecutive_sum = 0;
    for (int i = 0; i < k; i++) {
        consecutive_sum += arr[i];
    }

    int max_sum = consecutive_sum;

    for (int i = k; i < size; i++) {
        consecutive_sum += arr[i] - arr[i - k];
        
        if (consecutive_sum > max_sum) {
            max_sum = consecutive_sum;
        }
    }

    return max_sum;
}

int main() {
    int arr[] = {2, 3, 4, 1, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int max_sum = findMaxSumOfKConsecutive(arr, size, k);

    printf("Maximum sum of %d consecutive elements: %d\n", k, max_sum);

    return 0;
}