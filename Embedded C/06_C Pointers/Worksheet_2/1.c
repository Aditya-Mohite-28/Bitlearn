#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    float b = 5.5f;
    char c = 'K';

    int *p_int = &a;
    float *p_float = &b;
    char *p_char = &c;

    printf("--- Phase 1: Variable Pointer Access ---\n");
    printf("Value of a via p_int: %d\n", *p_int);
    printf("Value of b via p_float: %.1f\n", *p_float);
    printf("Value of c via p_char: %c\n\n", *p_char);

    printf("--- Phase 2: Dynamic Memory Allocation ---\n");
    
    int *dyn_arr = (int *)malloc(3 * sizeof(int));
    
    if (dyn_arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *(dyn_arr + 0) = 100;
    *(dyn_arr + 1) = 200;
    *(dyn_arr + 2) = 300;

    printf("--- Phase 3: Pointer Arithmetic ---\n");
    int *ptr = dyn_arr;
    printf("Element 0: %d (Address: %p)\n", *ptr, (void*)ptr);
    ptr++;
    printf("Element 1: %d (Address: %p)\n", *ptr, (void*)ptr);
    ptr++;
    printf("Element 2: %d (Address: %p)\n", *ptr, (void*)ptr);

    printf("\n--- Phase 4: Pointer Typecasting ---\n");
    
    ptr = dyn_arr; 
    char *byte_ptr = (char *)ptr;
    printf("Reading the first byte of integer 100 as a char value: %d\n", *byte_ptr);

    free(dyn_arr);
    dyn_arr = NULL;

    return 0;
}