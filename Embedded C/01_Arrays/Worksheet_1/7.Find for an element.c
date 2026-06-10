#include <stdio.h>

void array_input(int arr[],int size) {
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

int search(int arr[],int size, int num) {
    for (int i = 0; i < size; i++) {
        if (num == arr[i]) {
            printf("Found at index: %d", i);
            return i;
        }
    }
    return -1;
}

int main()
{
    int size, target;
    
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    
    array_input(arr, size);
    
    printf("Enter the element to search: ");
    scanf("%d",&target);
    
    
    if( search(arr, size, target) == -1 )
        printf("Not found!");
    
    
    return 0;
}
