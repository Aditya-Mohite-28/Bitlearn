#include <stdio.h>

typedef int (*ModifierCallback)(int);

void processArray(int arr[], int size, ModifierCallback callback) {
    for (int i = 0; i < size; i++) {
        arr[i] = callback(arr[i]);
    }
}

int increment(int value) {
    return value + 1;
}

int doubleValue(int value) {
    return value * 2;
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {1, 2, 3, 4, 5};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original Array:\n");
    printArray(data, size);
    printf("---------------------------\n");

    printf("Applying 'increment' callback:\n");
    processArray(data, size, increment);
    printArray(data, size); 
    printf("---------------------------\n");

    printf("Applying 'doubleValue' callback:\n");
    processArray(data, size, doubleValue);
    printArray(data, size);

    return 0;
}