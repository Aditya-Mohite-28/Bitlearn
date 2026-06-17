#include <stdio.h>

// Function prototype for in-place array reversal
void reverse_array(int *arr, int size) {
    int *start = arr;          // Points to the first element
    int *end = arr + (size - 1); // Points to the last element using pointer math
    int temp;

    // Loop until the two pointers meet or cross in the middle
    while (start < end) {
        // Swap values using a temporary variable
        temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers closer to the center
        start++;
        end--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int *ptr = arr;
    
    int sum = 0;
    printf("Original array values: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr);
        sum += *ptr;
        *ptr += 5;
        ptr++; 
    }
    printf("\nSum of original elements: %d\n", sum);

    printf("\nModified array (each element + 5): ");
    ptr = arr;
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");

    reverse_array(arr, size);

    printf("\nReversed modified array: ");
    ptr = arr;
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}