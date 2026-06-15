#include <stdio.h>

int count_occur(int arr[], int size, int target) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int count = count_occur(arr, size, target);

    printf("Number %d occurs %d times\n", target, count);

    return 0;
}