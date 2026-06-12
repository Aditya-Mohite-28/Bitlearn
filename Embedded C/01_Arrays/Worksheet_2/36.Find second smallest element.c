#include <stdio.h>

int second_smallest(int arr[], int size) {
    int smallest = arr[1];
    int second_smallest = arr[0];

    for ( int i = 0; i < size; i++ ) {
        if ( arr[i] < smallest ) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if ( arr[i] > smallest && arr[i] < second_smallest ) {
            second_smallest = arr[i];
        }
    }
    
    return second_smallest;
}

int main() {
    int arr[] = {1, -7, 5, 1, 1, 2, 2, 3, 0,-4};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Second Smallest at: %d", second_smallest(arr, size));

    return 0;
}