#include <stdio.h>
 
int main() {
    int a = 10;
    int *ptr;
    
    printf("Value of ptr(before initializing): %d\n",*ptr); // Garbage Value
    ptr = &a;
    printf("Value of ptr(after initializing): %d\n",*ptr);
    
    return 0;
}