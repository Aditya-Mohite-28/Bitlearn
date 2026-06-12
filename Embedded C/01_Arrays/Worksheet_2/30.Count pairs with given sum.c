#include <stdio.h>


int count_pairs(int arr[], int size, int sum) {
    int count = 0, i = 0;
    
    while (i < size) {
        for (int k = i + 1; k < size; k++)
            if(sum == arr[i] + arr[k]) {count++; break;}
        i++;
    }
    
    return count;
}

int main() {
    int arr[] = {1, 1, 2, 3, 3, 3, 1, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 2;
    
    printf("Pairs: %d ", count_pairs(arr, size, sum));

    return 0;
}