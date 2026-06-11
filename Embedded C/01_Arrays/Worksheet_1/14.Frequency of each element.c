#include <stdio.h>

#define MAX_ELEMENT 1000

void array_input(int arr[],int size) {
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void countfreq(int arr[], int size, int freq[]) {
    
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
}

int main()
{
    int arr[] = {1, 1, 1, 2,9 ,2 , 2, 3, 3};
    int size = sizeof(arr)/sizeof(arr[0]); 
    int freq[MAX_ELEMENT] = {0};
    
    countfreq(arr, size, freq);
    
    for (int i = 0; i < MAX_ELEMENT; i++) {
        if (freq[i] != 0) 
            printf("frequency of %d is %d \n", i, freq[i]);
    }
    
    return 0;
}