#include <stdio.h>

#define MAX_ELEMENT 1000

int count_dul(int arr[], int size) {
    int freq[MAX_ELEMENT] = {0}; 
    int duplicate_count = 0, count = 0;

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    
    for (int i = 0; i < size; i++) {
        if (freq[arr[i]] >= 2) {
            duplicate_count++;
            freq[arr[i]] = 0;
        }
    }
    
    return duplicate_count;
}

int main() {
    int arr[] = {1, 1, 1, 2, 2, 4, 5, 5, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Total duplicate elements: %d\n", count_dul(arr, size));

    return 0;
}