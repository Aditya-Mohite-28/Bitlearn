#include <stdio.h>

int find_missing(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if((arr[i + 1] - arr[i]) != 1)
            return arr[i] + 1;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Missing Number: %d ", find_missing(arr, size));

    return 0;
}