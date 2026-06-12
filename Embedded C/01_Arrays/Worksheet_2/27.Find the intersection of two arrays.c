#include <stdio.h>

#define MAX_ELEMENT 1000

int intersect(int arr1[], int arr2[], int size1, int size2) {
    int is_dulicate;
    int result[MAX_ELEMENT] = {0};
    for ( int i = 0; i < size1; i++ ) {
        is_dulicate = 0;
        for (int k = 0; k < i; k++) {
            if(arr1[i] == arr1[k]) {
                is_dulicate = 1;
                break;
            }
        }
        if(is_dulicate) continue;
        
        for (int j = 0; j < size2; j++) {
            if(arr1[i] == arr2[j]) 
                result[arr1[i]]++;
        }
    }
    
    for (int i = 0; i < (size1>size2?size1:size2); i++) {
        if(result[i] != 0) {
            printf("%d ",i);
        }
    }
}

int main() {
    int arr1[] = {1, 1, 2, 3, 4, 4, 5};
    int arr2[] = {1, 2, 2, 2, 7, 8, 9};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    
    intersect(arr1, arr2, size1, size2);

    return 0;
}