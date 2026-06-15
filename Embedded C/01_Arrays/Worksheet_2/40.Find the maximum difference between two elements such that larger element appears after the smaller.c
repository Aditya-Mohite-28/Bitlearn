#include <stdio.h>

int findMaxDifference(int arr[], int size) {

    int max_diff = arr[1] - arr[0];
    int min_element = arr[0];

        if (arr[i] - min_element > max_diff) {
            max_diff = arr[i] - min_element;
        }
        
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
    }

    return max_diff;
}

int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_diff = findMaxDifference(arr, size);

    printf("Maximum difference: %d\n", max_diff);

    return 0;
}