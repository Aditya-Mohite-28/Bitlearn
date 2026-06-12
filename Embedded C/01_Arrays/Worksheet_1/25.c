#include <stdio.h>

void print_even(int arr[], int size) {
    printf("Even Numbers: ");
    for (int i = 0; i < size; i++) {
        if((arr[i] & 1) == 0) {
            printf("%d ",arr[i]);
        }
    }
}

void print_odd(int arr[], int size) {
    printf("\nOdd Numbers: ");
    for (int i = 0; i < size; i++) {
        if((arr[i] & 1)) {
            printf("%d ",arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    print_even(arr, size);
    print_odd(arr, size);
    
    return 0;
}