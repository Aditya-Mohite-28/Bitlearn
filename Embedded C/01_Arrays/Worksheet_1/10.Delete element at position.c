#include <stdio.h>

void array_input(int arr[],int size) {
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

int rm_element(int arr[], int index, int size) {
    if(index > size) {
        printf("Index is greater then the assigned element!\n");
        return size;
    }
    
    for (int i = index; i < size; i++) {
        arr[i] = arr[i + 1];
    }
    
    return size - 1;
}

int main()
{
    int size, index;
    int arr[100] = {0};
    
    printf("Enter number of elements: ");
    scanf("%d", &size);
    
    array_input(arr, size);
    
    printf("Enter index to remove: ");
    scanf("%d", &index);
    
    size = rm_element(arr, index, size);
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}