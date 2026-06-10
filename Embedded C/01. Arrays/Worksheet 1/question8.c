#include <stdio.h>

void array_input(int arr[],int size) {
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void array_rev(int arr[], int size) {
    
    for (int i = 0; i < size/2; i++) {
        arr[i] = arr[i] ^ arr[size - 1 - i];
        arr[size - 1 - i] = arr[i] ^ arr[size - 1 - i];
        arr[i] = arr[i] ^ arr[size - 1 - i];
    }
}

int main()
{
    int size, target;
    
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    
    array_input(arr, size);
    
    array_rev(arr, size);
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}