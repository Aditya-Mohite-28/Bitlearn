#include <stdio.h>

void array_input(int arr[],int size) {
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void swap(int *num1, int *num2) {
    *num1 = *num1 ^ *num2;
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;
}

void sort_asnd(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) 
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

int main()
{
    int size;
    int arr[100] = {0};
    
    printf("Enter number of elements: ");
    scanf("%d", &size);
    
    array_input(arr, size);
    
    sort_asnd(arr, size);
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}