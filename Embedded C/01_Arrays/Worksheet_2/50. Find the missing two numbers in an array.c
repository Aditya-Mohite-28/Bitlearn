#include <stdio.h>

void findTwoMissingNumbers(int arr[], int size) {
    int sumofn2 = 0;
    for (int i = 1; i <= size + 2; i++) {
        sumofn2 += i;
    }

    int actual_sum = 0;
    for (int i = 0; i < size; i++) {
        actual_sum += arr[i];
    }

    int diff_sum = sumofn2 - actual_sum;
    int mid_sum = diff_sum / 2;

    int sumofmid = 0;
    for (int i = 1; i <= mid_sum; i++) {
        sumofmid += i;
    }
    
    int actual_sumofmid = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] <= mid_sum) {
            actual_sumofmid += arr[i];
        }
    }

    // First missing number
    int first_missing = sumofmid - actual_sumofmid;
    
    // Second missing number
    int second_missing = diff_sum - first_missing;

    printf("Missing numbers: %d %d\n", first_missing, second_missing);
}

int main() {
    int arr[] = {1, 2, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    findTwoMissingNumbers(arr, size);

    return 0;
}