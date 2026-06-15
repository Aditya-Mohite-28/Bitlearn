#include <stdio.h>

int multiple(int arr[], int size) {
    int mul = 1;
    for (int i = 0; i < size; i++) {
        mul *= arr[i];
    }
    
    return mul;
}
 
int main() {
    int arr[] = {2,3,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("product of all is %d",multiple(arr, size));
    
    return 0;
}