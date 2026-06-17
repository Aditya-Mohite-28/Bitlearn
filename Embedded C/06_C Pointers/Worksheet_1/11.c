#include <stdio.h>
 
int main() {
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    
    printf("Value of a: %d\nValue of *ptr: %d\nValue of **ptr2: %d\n", a, *ptr, **ptr2);
    
    return 0;
}