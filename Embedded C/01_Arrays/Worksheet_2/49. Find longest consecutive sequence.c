#include <stdio.h>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int findLongestConsecutiveSubseq(int arr[], int size) {
    sortArray(arr, size);

    int max_streak = 1;
    int current_streak = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            continue;
        }

        if (arr[i] == arr[i - 1] + 1) {
            current_streak++;
        } else {
            if (current_streak > max_streak) {
                max_streak = current_streak;
            }
            current_streak = 1;
        }
    }

    if (current_streak > max_streak) {
        max_streak = current_streak;
    }

    return max_streak;
}

int main() {
    int arr[] = {100, 4, 5, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int length = findLongestConsecutiveSubseq(arr, size);

    printf("Longest consecutive sequence length: %d\n", length);

    return 0;
}