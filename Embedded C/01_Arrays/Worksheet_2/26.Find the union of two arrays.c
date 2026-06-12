#include <stdio.h>

int merge(int arr1[],int arr2[],int arr3[], int size1, int size2, int size3) {
    int index1 = 0, index2 = 0, index = 0; 
    while (index1 < size1 || index2 < size2) {
        if(arr1[index1] < arr2[index2]) {
            arr3[index] = arr1[index1];
            index1++;
        } else if (arr1[index1] > arr2[index2]) {
            arr3[index] = arr2[index2];
            index2++;
        } else if (arr1[index1] == arr2[index2]) {
            arr3[index] = arr1[index1];
            index1++;
            index2++;
            size3--;
        }
        index++;
    }
    return size3;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 7, 8, 9};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int size3 = size1 + size2;
    int arr3[size3];
    
    size3 = merge(arr1, arr2, arr3, size1, size2, size3);
    
    for (int i = 0; i < size3; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}