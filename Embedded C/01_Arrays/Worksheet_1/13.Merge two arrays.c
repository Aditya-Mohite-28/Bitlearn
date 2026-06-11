#include <stdio.h>

void array_input(int arr[],int size) {
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

int merge(int arr1[], int arr2[], int arr3[],int size1 ,int size2) {
    for (int i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }
    
    for (int i = 0; i < size2; i++) {
        arr3[size1 + i] = arr2[i];
    }
    
    return size1 + size2;
}


int main()
{
    int size;
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int size3 = size1 + size2;
    int arr3[size3];
    
    size3 = merge(arr1, arr2, arr3, size1, size2);
    
    for (int i = 0; i < size3; i++) {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}