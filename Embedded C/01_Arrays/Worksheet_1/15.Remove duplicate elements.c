#include <stdio.h>

#define MAX_ELEMENT 1000

void find_dup(int arr[], int size, int freq[]) {
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
}

int shift(int arr[], int index, int size) {
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    return size - 1;
}

int rm_dup(int arr[], int size, int freq[]) {
    for (int i = 0; i < size; i++) {
        if (freq[arr[i]] > 1) {
            freq[arr[i]]--;
            size = shift(arr, i, size);
            i--;
        }
    }
    
    return size;
}

int main()
{
    int arr[] = {1, 1, 1, 2,9 ,2 , 5,5, 3, 3};
    int size = sizeof(arr)/sizeof(arr[0]); 
    int freq[MAX_ELEMENT] = {0};
    
    find_dup(arr, size, freq);
    size = rm_dup(arr, size, freq);
    
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}