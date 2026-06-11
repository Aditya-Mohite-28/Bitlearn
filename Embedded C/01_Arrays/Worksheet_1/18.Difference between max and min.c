#include <stdio.h>

int diff(int arr[], int size) {
    int max = arr[0], min = arr[0];
    
    for (int i = 0; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }

    return max - min;
}

int main()
{
    int arr[] = {1, 1, 1, 2, 10 ,2 , 5,5, 7,3, 1};
    int size = sizeof(arr)/sizeof(arr[0]); 
    int result = diff(arr, size);
    
    printf("Difference between max and min is: %d\n", result);
    
    return 0;
}