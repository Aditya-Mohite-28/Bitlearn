#include <stdio.h>

int max_subarray_sum(int arr[], int n) {
    int max_so_far = arr[0];
    int max_ending_here = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max_ending_here + arr[i]) {
            max_ending_here = arr[i];
        } else {
            max_ending_here = max_ending_here + arr[i];
        }
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
    }

    return max_so_far;
}

int main() {
    int arr[] = {-7, 1, 5, 1, 1, 2, -4, 3, 0, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Equilibrium at: %d", max_subarray_sum(arr, size));

    return 0;
}