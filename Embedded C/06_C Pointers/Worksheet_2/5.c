#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 5;
    int *arr = (int *)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }
    
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    arr = (int *)calloc(size , sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        free(arr);
        return 1;
    }
    
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr+i));
    }
    
    int new_size = 8;
    
    arr = (int *)realloc(arr, new_size * sizeof(int));
        arr[5] = 60;
        arr[6] = 70;
        arr[7] = 80;
    printf("\n");    
    for (int i = 0; i < new_size; i++) {
        printf("%d ", *(arr+i));
    }
    
    free(arr);
    arr = NULL;
    
}