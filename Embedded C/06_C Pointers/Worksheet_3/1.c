#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Array name value (Base Address): %p\n", (void*)arr);
    printf("Pointer value (Stored Address): %p\n", (void*)ptr);
    printf("Address of the array (&arr):   %p\n\n", (void*)&arr);

    printf("sizeof(arr): %zu bytes\n", sizeof(arr));
    printf("sizeof(ptr): %zu bytes\n\n", sizeof(ptr));

    printf("Accessing elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Index %d -> Array Notation: %d | Pointer Notation: %d\n", 
               i, arr[i], *(ptr + i));
    }

    return 0;
}