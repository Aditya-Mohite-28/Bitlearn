#include <stdio.h>

int max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    
    return max;
}

int min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (min > arr[i])
            min = arr[i];
    }
    
    return min;
}

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
    
    printf("Maximum: %d\n", max(arr, size));
    printf("Minimum: %d\n", min(arr, size));
    return 0;
}