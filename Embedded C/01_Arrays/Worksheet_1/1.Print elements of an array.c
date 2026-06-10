#include <stdio.h>

int main()
{
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Display the elements\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}