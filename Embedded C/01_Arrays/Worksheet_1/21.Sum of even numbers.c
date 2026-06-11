#include <stdio.h>

int is_even(int num) {
    if(num & 1)
        return 0;
    else
        return 1;
}

int sum_even(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        if(is_even(arr[i])) {
            sum += arr[i];
        }
    }
    
    return sum;
}

int main()
{
    int arr[] = {1, 1, 1, 2, 10 ,2 , 5,5, 7,3, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Sum of all even numbers: %d ", sum_even(arr, size));

    return 0;
}