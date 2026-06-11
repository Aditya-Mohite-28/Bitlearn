#include <stdio.h>

int second_largest(int arr[], int size) {
    int max = arr[0], second_max = arr[0];
    for (int i = 1; i < size; i++) {
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if ((arr[i] != max) & (arr[i] > second_max)) {
            second_max = arr[i];
        }
    }
    
    return second_max;
}

int main()
{
    int arr[] = {1, 1, 1, 2, 9 ,2 , 5,5, 7,3, 3};
    int size = sizeof(arr)/sizeof(arr[0]); 
    int second_max = second_largest(arr, size);
    
    printf("Second Largest is: %d\n",second_max);
    
    return 0;
}
