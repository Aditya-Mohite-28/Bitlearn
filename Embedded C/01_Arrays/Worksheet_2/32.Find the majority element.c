#include <stdio.h>

int majority_element(int arr[], int size) {
    int count = 0;
    int majority = arr[0];
    for (int i = 0; i < size; i++) {
        if(count == 0) {
            majority = arr[i];
            count++;
        } else if(arr[i] == majority) {
            count++;
        } else count--;
    }
    
    return majority;
}

int main() {
    int arr[] = {1, 3, 3, 3, 2, 3, 4, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Majority Number: %d ", majority_element(arr, size));

    return 0;
}