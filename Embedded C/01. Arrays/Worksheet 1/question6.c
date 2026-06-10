#include <stdio.h>

void array_input(int arr[],int size) {
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

int is_negative(int num) {
    if (num < 0) 
        return 1;               /// number is negative 
    
    return 0;                   /// number is positive
}

int main()
{
    int size, count = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    
    array_input(arr, size);
    
    for (int i = 0; i < size; i++) {
        if (is_negative(arr[i]))
            count++;
    }
    
    printf("Total number of negative number: %d", count);
    return 0;
}