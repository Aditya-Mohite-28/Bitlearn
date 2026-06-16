#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int *ptr = arr;
    ptr+=2;
    
    printf("%d", *ptr);
    return 0;
}