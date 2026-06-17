#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr1, int *ptr2) {
    *ptr1 = *ptr1 ^ *ptr2;
    *ptr2 = *ptr1 ^ *ptr2;
    *ptr1 = *ptr1 ^ *ptr2;
}

void reverse_array(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    
    while (start < end) {
        swap(start , end);
        start++;
        end--;
    }
}

void modify(int *dym_ptr) {
    *dym_ptr = 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse_array(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    int *dym_ptr = (int *)malloc(sizeof(int));
    *dym_ptr = 10;
    printf("\n%d", *dym_ptr);
    modify(dym_ptr);
    printf("\n%d", *dym_ptr);
    
    free(dym_ptr);
    dym_ptr = NULL;
    return 0;
}