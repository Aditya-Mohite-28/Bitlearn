#include <stdio.h>

void bubbleSort(int arr[], int n) {
    printf("\nBubble Sort\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    printf("\nSelection Sort\n");
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int arr[], int n) {
    printf("\nInsertion Sort\n");
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    void (*sort_table[])(int[], int) = { bubbleSort, selectionSort, insertionSort };
    
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;

    printf("Original array:\n");
    printArray(arr, n);

    printf("\nSelect a sorting method:\n");
    printf("0. Bubble Sort\n");
    printf("1. Selection Sort\n");
    printf("2. Insertion Sort\n");
    printf("Enter choice (0-2): ");
    
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (choice >= 0 && choice <= 2) {
        sort_table[choice](arr, n);
        
        printf("Sorted array:\n");
        printArray(arr, n);
    } else {
        printf("Invalid selection.\n");
    }

    return 0;
}