#include <stdio.h>

int main()
{
    int size, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum of array elements is: %d", sum);

    return 0;
}