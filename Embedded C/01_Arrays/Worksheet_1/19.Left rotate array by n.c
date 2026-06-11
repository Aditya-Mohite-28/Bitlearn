#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[start] ^ arr[end];
        arr[start] = arr[start] ^ arr[end];
        
        start++;
        end--;
    }    
}

void rotate(int arr[], int size, int R) {
    R = R % size;
    
    reverse(arr, 0, R - 1);
    reverse(arr, R, size - 1);
    reverse(arr, 0, size - 1);
}

int main()
{
    int arr[] = {1, 1, 1, 2, 10 ,2 , 5,5, 7,3, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    rotate(arr, size, k);
    
    printf("Array after left rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}