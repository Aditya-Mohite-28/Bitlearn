#include <stdio.h>

int is_equilibrium(int arr[], int size) {
    int right_sum = 0;
    int left_sum = 0;
    
    for (int i = 0; i < size; i++ ) {
        right_sum += arr[i];
    }
    left_sum += arr[0];
    right_sum -= arr[0];
    for (int i = 1; i < size - 1; i++) {
        right_sum -= arr[i];
        if(left_sum == right_sum) {
            return i;
        }else left_sum += arr[i];
    }
    
    return -1;
}

int main() {
    int arr[] = {-7, 1, 5, 1, 1, 2, -4, 3, 0, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int status = is_equilibrium(arr,size);
    
    if(status == -1){
        printf("Not is_equilibrium");
    }else {
        printf("Equilibrium at: %d", status);
    }

    return 0;
}