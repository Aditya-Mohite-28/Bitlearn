#include <stdio.h>
 
int main() {
    int a = 1;
    int *ptr1 = &a;
    float *ptr2;
    
    ptr2 = (float*)ptr1; // will print 0.000000
    
    printf("Value of a: %d\nValue of ptr1: %d\nValue of ptr2: %f\n", a, *ptr1, *ptr2);
    
    return 0;
}


// main.c: In function ‘main’:
// main.c:7:10: error: assignment to ‘float *’ from incompatible pointer type ‘int *’ [-Wincompatible-pointer-types]
//     7 |     ptr2 = ptr1;