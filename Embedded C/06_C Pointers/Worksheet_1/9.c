#include <stdio.h>

void print_array(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
}
 
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/ sizeof(arr[0]);

    print_array(arr, size);
    return 0;
}