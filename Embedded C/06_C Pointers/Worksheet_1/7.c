#include <stdio.h>

int main() {
    int arr[] = {2, 4, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr;
    
    for (int i = 0; i < size; i++) {
        printf("%d ", ++*(ptr + i));
    }
    
    return 0;
}