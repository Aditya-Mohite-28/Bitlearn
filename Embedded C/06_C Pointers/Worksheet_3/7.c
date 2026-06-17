#include <stdio.h>
#include <stdlib.h>

int *allocate_buffer(void) {
    int *buf = (int *)malloc(10 * sizeof(int));
    return buf;
}

int main() {
    int *my_ptr = allocate_buffer();
    
    if (my_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        my_ptr[i] = i * 10;
    }
    printf("Before free: my_ptr[3] = %d\n", my_ptr[3]);
    printf("Memory before free. my_ptr points to: %p\n", (void*)my_ptr);
    free(my_ptr);
    printf("Memory has been freed. my_ptr still points to: %p\n", (void*)my_ptr);

    printf("After free (Dangerous Read): my_ptr[3] = %d\n", my_ptr[3]);

    my_ptr[3] = 999;
    printf("After free (Dangerous Write): my_ptr[3] = %d\n", my_ptr[3]);

    return 0;
}

/// After freeing my_ptr is becomes dangling pointer it still points to the same address but the Memory is free for future use.
/// If we try accessing the memory - on OS it can read junk value or OG value without crashing because after freeing the memory is not given to OS instantly
/// If memory is given back to OS instanly and we try to access the memory it till fail with Segmentation fault.