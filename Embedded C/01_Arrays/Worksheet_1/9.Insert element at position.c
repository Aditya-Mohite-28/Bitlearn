#include <stdio.h>

void array_input(int arr[],int size) {
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

int add_element(int arr[], int data, int index, int size) {
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[index] = data;
    
    return size + 1;
}

int main()
{
    int size, data, index;
    int arr[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &size);
    
    array_input(arr, size);
    
    printf("Enter the element to insert: ");
    scanf("%d", &data);
    
    printf("Enter index: ");
    scanf("%d", &index);
    
    size = add_element(arr, data, index, size);
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}
