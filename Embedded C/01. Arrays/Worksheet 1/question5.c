#include <stdio.h>

int arr_cpy(int arr[], int arr2[], int size) {
  
    for (int i = 0; i < size; i++) {
        arr2[i] = arr[i];
    } 
    
}

int main()
{
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    int arr2[size];
    
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    arr_cpy(arr, arr2, size);
    
    printf("Display from duplicated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}