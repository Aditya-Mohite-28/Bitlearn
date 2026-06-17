#include <stdio.h>
#include <stdlib.h>

void modify_and_reallocate(int ***triple_ptr, int *size) {
    (**triple_ptr)[0] = 999; 
    *size = 7;
    **triple_ptr = (int *)realloc(**triple_ptr, (*size) * sizeof(int));

    (**triple_ptr)[5] = 60;
    (**triple_ptr)[6] = 70;
}

int main() {
    int size = 5;
    
    int **ptr_to_ptr = (int **)malloc(sizeof(int *));
    *ptr_to_ptr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        (*ptr_to_ptr)[i] = (i + 1) * 10;
    }

    printf("Original array values:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", (*ptr_to_ptr)[i]);
    }
    printf("\n\n");

    modify_and_reallocate(&ptr_to_ptr, &size);

    printf("Array values after function modification and reallocation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", (*ptr_to_ptr)[i]);
    }
    printf("\n");

    free(*ptr_to_ptr);
    free(ptr_to_ptr);
    
    return 0;
}