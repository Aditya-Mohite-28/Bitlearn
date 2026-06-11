#include <stdio.h>

#define MAX_ELEMENT 1000

void array_input(int arr[],int size) {
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void find_dup(int arr[], int size, int freq[]) {
    
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
}

int main()
{
    int arr[] = {1, 1, 1, 2,9 ,2 , 5,5, 3, 3};
    int size = sizeof(arr)/sizeof(arr[0]); 
    int freq[MAX_ELEMENT] = {0};
    
    find_dup(arr, size, freq);
    
    printf("Duplicates elements are: ");
    for (int i = 0; i < MAX_ELEMENT; i++) {
        if (freq[i] > 1) 
            printf("%d ", i);
    }
    
    return 0;
}