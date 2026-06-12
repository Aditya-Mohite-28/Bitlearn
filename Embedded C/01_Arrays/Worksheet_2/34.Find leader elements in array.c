#include <stdio.h>

void leader_elements(int arr[], int size) {
    int leaders[size];
    int count = 0;
    int index = size - 1;
    int max = arr[index];
    leaders[count++] = max;
    while (index > 0) {
        if(arr[index] > max) {
            max = arr[index];
            leaders[count++] = max;
        }
        index--;
    }
    
    for (int i = 0; i < count; i++)
        printf("%d ", leaders[i]);
}

int main() {
    int arr[] = {1, 3, 3, 11, 10, 2, 3, 4, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    leader_elements(arr,size);

    return 0;
}